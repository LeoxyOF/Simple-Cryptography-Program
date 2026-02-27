#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "Cryptography.h"

typedef struct Crypto{
    int *Data;
    size_t Size;
} crypto_t;

crypto_t Cryptography(const char *Text){

    char Letters[27] = {
    'A','B','C','D','E','F','G','H','I','J','K','L','M',
    'N','O','P','Q','R','S','T','U','V','W','X','Y','Z',' ',
                        };

    size_t Count = 0;
    char const *ptr = Text;

    while(*ptr != '\0'){
        Count+=1;
        ptr+=1;
    }

    ptr = Text;

    int *NewText = malloc(Count*sizeof(int));

    if(NewText == NULL){
        printf("Memory Allocation Failed!");
        exit(1);
    }

    for(int i = 0; i < Count; i++){
        for(int k = 0; k <= 26; k++){
            if(toupper(ptr[i]) == Letters[k]){
                *(NewText + i) = k+1;
            }
        }
    }

    crypto_t Info = {
        .Data = NewText,
        .Size = Count,
    };

    return Info;
}

void Crypto_Free(crypto_t *p){
    free(p->Data);
    p->Data = NULL;
    p->Size = 0;
}
