//
//  portable.c
//  HAPPairing
//
//  Created by Евгений Богомолов on 06/04/2018.
//  Copyright © 2018 Give Me App. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void *pvPortMalloc( size_t xSize ) {
    return malloc(xSize);
};

void vPortFree( void *pv ) {
    free(pv);
};

