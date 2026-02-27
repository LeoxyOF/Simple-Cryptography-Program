#include <stdio.h>
#include "Cryptography.c"


int main(){

    // Change the string and test the program if you want
    const char *Name = "John Lennon";

    crypto_t CryptographyName = Cryptography(Name);

    for(size_t i = 0; i < CryptographyName.Size; i++){
        printf("%d ", CryptographyName.Data[i]);
    }

    Crypto_Free(&CryptographyName);

}
