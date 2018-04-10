#ifndef wolfcrypt_user_settings_h
#define wolfcrypt_user_settings_h

#include "hwrand.h"

static inline int hwrand_generate_block(uint8_t *buf, size_t len) {
    hwrand_fill(buf, len);
    return 0;
}

#define IPHONE
//#define WOLFCRYPT_ONLY
#define WC_NO_HARDEN
#define NO_WOLFSSL_DIR
#define SINGLE_THREADED
//#define WOLFSSL_LWIP
#define WOLFCRYPT_HAVE_SRP
#define NO_INLINE
#define WOLFSSL_SHA512
#define HAVE_HKDF
#define HAVE_CHACHA
#define HAVE_POLY1305
#define HAVE_ED25519
#define HAVE_CURVE25519
#define HAVE_PK_CALLBACKS
//#define HAVE_FIPS

#define NO_WOLFSSL_MEMORY
//#define NO_WOLFSSL_SMALL_STACK
//#define MP_LOW_MEM

#define CUSTOM_RAND_GENERATE_BLOCK hwrand_generate_block


//#ifdef HAVE_FIPS
//    #define NO_MD4
//    #define NO_HC128
//    #define NO_RABBIT
//    #define NO_DSA
//    #define NO_PWDBASED
//#else
//    #define WC_RSA_BLINDING
//    #define USE_FAST_MATH
//    #define TFM_TIMING_RESISTANT
//    #define HAVE_ECC
//    #define ECC_TIMING_RESISTANT
//#endif

#endif
