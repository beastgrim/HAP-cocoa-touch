/* Configuration */

#ifndef wolfcrypt_user_settings_h
#define wolfcrypt_user_settings_h

#include <stdlib.h>
static inline int hwrand_generate_block(uint8_t *buf, size_t len) {
    arc4random_buf(buf, len);
    return 0;
}
#define CUSTOM_RAND_GENERATE_BLOCK hwrand_generate_block

#define IPHONE
#define WOLFCRYPT_ONLY
#define WC_NO_HARDEN
#define NO_WOLFSSL_DIR
#define SINGLE_THREADED
#define WOLFSSL_LWIP

#define NO_WOLFSSL_MEMORY
#define NO_WOLFSSL_SMALL_STACK
#define MP_LOW_MEM

#define WOLFSSL_SHA512
#define HAVE_HKDF
#define HAVE_CURVE25519
#define HAVE_ED25519
#define WOLFCRYPT_HAVE_SRP
#define HAVE_CHACHA
#define HAVE_POLY1305

#endif
