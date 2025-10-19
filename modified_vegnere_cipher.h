#ifdef MODIFIED_VEGNERE_CIPHER_H
#define MODIFIED_VEGNERE_CIPHER_H

#include <stdio.h>
#include <string.h>

char plain_text[MAX_PIN_LEN] = {0};
char key[MAX_PIN_LEN] = {0};

char vegnere_cipher(char plain_text[MAX_PIN_LEN], char key[MAX_PIN_LEN]);

#endif