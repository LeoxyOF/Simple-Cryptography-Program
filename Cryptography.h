#ifndef CRYPTO_H
#define CRYPTO_H

#include <stddef.h>

typedef struct Crypto{
    int *Data;
    size_t Size;
} crypto_t;

crypto_t Cryptography(const char *Text); // Converts text into numeric representation

void Crypto_Free(crypto_t *p); // Frees memory owned by crypto_t

#endif