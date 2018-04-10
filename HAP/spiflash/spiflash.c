//
//  spiflash.c
//  HAPPairing
//
//  Created by Евгений Богомолов on 02/04/2018.
//  Copyright © 2018 Give Me App. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#include "debug.h"

#define BUFF_SIZE 16384
static uint8_t *storage_buf = NULL;

void init_buffer_if_needed() {
    const uint32_t size = BUFF_SIZE;
    if (storage_buf == NULL) {
        storage_buf = malloc(size);
        memset(storage_buf, 0xff, size);
        
        INFO("Init SPI flash: %d", size);
    }
}

bool spiflash_read(uint32_t addr, uint8_t *buf, uint32_t size) {
    init_buffer_if_needed();
    
    if (addr + size > BUFF_SIZE) {
        ERROR("Read flash at wrong address: %d", addr);
        return false;
    }
    const void *src =  &storage_buf[addr];
    memcpy(buf, src, size);
    
    print_binary("spiflash_read", buf, size);
    return true;
}

bool spiflash_write(uint32_t addr, uint8_t *buf, uint32_t size) {
    init_buffer_if_needed();
    print_binary("spiflash_write", buf, size);

    if (addr + size > BUFF_SIZE) {
        ERROR("Write with out of buffer size: %d", size);
        return false;
    }
    
    const void *src = buf;
    void *dst = &storage_buf[addr];
    memcpy(dst, src, size);
    
    return true;
}

bool spiflash_erase_sector(uint32_t addr) {
    init_buffer_if_needed();

    if (addr > BUFF_SIZE) {
        return false;
    }
    
    void *src =  &storage_buf[addr];
    uint32_t size = BUFF_SIZE - addr;
    memset(src, 0xff, size);

    return true;
}

