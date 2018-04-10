//
//  hwrand.h
//  HAPPairing
//
//  Created by Евгений Богомолов on 02/04/2018.
//  Copyright © 2018 Give Me App. All rights reserved.
//

#ifndef hwrand_h
#define hwrand_h

#include <stdint.h>
#include <sys/types.h>

#ifdef    __cplusplus
extern "C" {
#endif
    
    /* Return a random 32-bit number */
    uint32_t hwrand(void);
    
    /* Fill a variable size buffer with data from the Hardware RNG */
    void hwrand_fill(uint8_t *buf, size_t len);
    
#ifdef    __cplusplus
}
#endif



#endif /* hwrand_h */

