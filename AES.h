//
// Created by Henry Carter on 11/8/18.
//

#ifndef AES_AES_H
#define AES_AES_H

//Change this value to 128, 192, or 256 for different length keys
#define KEYLENGTH 256

unsigned char* encrypt(unsigned char pt[], unsigned char key[]);

#endif //AES_AES_H
