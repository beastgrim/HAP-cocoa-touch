/**
 * The MIT License (MIT)
 *
 * Copyright (c) 2016 sheinz (https://github.com/sheinz)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#ifndef __SPIFLASH_H__
#define __SPIFLASH_H__

#include <stdint.h>
#include <stdbool.h>
//#include "common_macros.h"

#define SPI_FLASH_SECTOR_SIZE      4096

bool spiflash_read(uint32_t addr, uint8_t *buf, uint32_t size);

/**
 * Write data to SPI flash.
 *
 * @param addr Address to write to. Can be not aligned.
 * @param buf Buffer of data to write to flash. Doesn't have to be aligned.
 * @param size Size of data to write. Buffer size must be >= than data size.
 *
 * @return true if success, otherwise false
 */
bool spiflash_write(uint32_t addr, uint8_t *buf, uint32_t size);

/**
 * Erase a sector.
 
 */
bool spiflash_erase_sector(uint32_t addr);

#endif  // __SPIFLASH_H__
