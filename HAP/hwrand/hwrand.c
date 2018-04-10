//
//  hwrand.c
//  HAPPairing
//
//  Created by Евгений Богомолов on 02/04/2018.
//  Copyright © 2018 Give Me App. All rights reserved.
//

#include "hwrand.h"
#include <stdlib.h>

uint32_t hwrand(void) {
    return arc4random();
}

void hwrand_fill(uint8_t *buf, size_t len) {
    arc4random_buf(buf, len);
}
