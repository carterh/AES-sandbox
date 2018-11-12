#include <iostream>
#include "AES.h"


int main() {

    unsigned char plaintext[16];
    unsigned char key[16];

    std::cout << "Please enter a plaintext (16 bytes in hexadecimal):" << std::endl;
    for(int i = 0; i < 16; i++){
        unsigned int tmp;
        scanf("%2x", &tmp);
        plaintext[i] = tmp;
    }

    std::cout << "Please enter a key (16 bytes in hexadecimal):" << std::endl;
    for(int i = 0; i < 16; i++){
        unsigned int tmp;
        scanf("%2x", &tmp);
        key[i] = tmp;
    }

    unsigned char* ct = encrypt(plaintext, key);

    for(int i = 0;i < 16;i++){
        printf("%02X", ct[i]);

    }
    printf("\n");

    free(ct);

    return 0;
}