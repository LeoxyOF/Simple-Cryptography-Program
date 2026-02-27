#include <stdio.h>
#include "Cryptography.c"


int main(){

    const char *Name = "John Lennon";

    crypto_t CryptographyName = Cryptography(Name);

    for(size_t i = 0; i < CryptographyName.Size; i++){
        printf("%d ", CryptographyName.Data[i]);
    }

    Crypto_Free(&CryptographyName);
}