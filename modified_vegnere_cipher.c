#include <stdio.h>
#include <string.h>

#define MAX_PIN_LEN 100

char vegnere_cipher(char plain_text[MAX_PIN_LEN], char key[MAX_PIN_LEN]);
char vegnere_cipher_decrpt(char decrypt_text[MAX_PIN_LEN], char key[MAX_PIN_LEN]);


int main(){
    char plain_text[MAX_PIN_LEN] = {0};
    char key[MAX_PIN_LEN] = {0};
    char decrypt_text[MAX_PIN_LEN] = {0};
    
    printf("Enter the message: ");
    scanf("%s",plain_text);
    printf("Enter the key: ");
    scanf("%s",key);
    printf("Enter the message: ");
    scanf("%s",decrypt_text);

    vegnere_cipher(plain_text, key);
    vegnere_cipher_decrpt(decrypt_text, key);

    return 0;
}

char vegnere_cipher(char plain_text[MAX_PIN_LEN], char key[MAX_PIN_LEN]){
    int i,j;
    char encrypted_text[MAX_PIN_LEN] = {0};

    int size_of_plain_text = strlen(plain_text);
    int size_of_key = strlen(key);

    for(i=0;i<size_of_plain_text;i++){  
        int plain_text_num = plain_text[i];
        int key_num = key[i%size_of_key];

        if ((plain_text_num >= '0' && plain_text_num <= '9')&&(key_num >= '0' && key_num <= '9')){
            int temp_num = (((plain_text_num - '0')+ (key_num - '0')) % 10) ;
            char encryted_char = (char) temp_num;
            encrypted_text[i] = encryted_char + '0';
        }
        else{
            printf("Enter only a Number!");
            break;
        }
    }

    printf("%s",encrypted_text);
}

char vegnere_cipher_decrpt(char decrypt_text[MAX_PIN_LEN], char key[MAX_PIN_LEN]){
    int i,j;
    char plain_text[MAX_PIN_LEN] = {0};

    int size_of_decrypt_text = strlen(decrypt_text);
    int size_of_key = strlen(key);

    for(i=0;i<size_of_decrypt_text;i++){  
        int decrypt_text_num = decrypt_text[i];
        int key_num = key[i%size_of_key];

        if ((decrypt_text_num >= '0' && decrypt_text_num <= '9')&&(key_num >= '0' && key_num <= '9')){
            int temp_num = (((decrypt_text_num - '0') - (key_num - '0')) % 10) ;
            char plain_char = (char) temp_num;
            plain_text[i] = plain_char + '0';
        }
        else{
            printf("Enter only a Number!");
            break;
        }
    }

    printf("%s",plain_text);
}