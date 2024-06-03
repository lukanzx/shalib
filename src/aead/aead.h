#pragma once

#include <stddef.h>
#include <stdint.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

#include <event2/buffer.h>
#include <event2/bufferevent.h>
#include <mbedtls/hkdf.h>
#include <sodium.h>
#include "cipher.h"
#include "logger.h"

#define SUBKEY_INFO ((const unsigned char*)"ss-subkey")
#define SUBKEY_INFO_LEN 9

#define MAX_PAYLOAD_LENGTH 0x3FFF

struct cipher;
struct cipher_context;

int aead_encrypt(
        struct cipher *c,
        const uint8_t *plaintext,
        size_t plaintext_len,
        uint8_t *ciphertext,
        size_t *ciphertext_len
);

int aead_decrypt(
        struct cipher *c,
        const uint8_t *ciphertext,
        size_t ciphertext_len,
        uint8_t *plaintext,
        size_t *plaintext_len
);

struct bufferevent *create_encrypted_bev(
        struct bufferevent *bev,
        struct cipher_context *c
);

void HKDF_SHA1(
        const uint8_t *key,
        size_t key_len,
        const uint8_t *salt,
        size_t salt_len,
        const uint8_t *info,
        size_t info_len,
        uint8_t *out
);

void AEAD_CHACHA20_POLY1305_HKDF_SHA1(
        const unsigned char *key,
        const unsigned char *salt,
        unsigned char *out
);
