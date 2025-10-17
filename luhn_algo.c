#include "luhn_validator.h"


void luhn_validator(void){
    int  i, size_of_card_num = 0, final_luhn_num = 0 , is_alter_num = 0;
    char card_number[20] = {0};

    printf("Enter Your Card Number: ");
    scanf("%s", card_number);


    size_of_card_num = strlen(card_number);

    for (i=0;i<size_of_card_num;i++){
        if(!isdigit(card_number[i])){
            printf("You entered an invalid number! ");
            return;
        }
    }

    for (i = size_of_card_num-1;i>=0;i--){
        int digit = card_number[i] - '0';
        if (is_alter_num){
            digit *=2;
            if (digit>9){
                digit -= 9;
            }
        }
        final_luhn_num += digit;
        is_alter_num = !is_alter_num;
    }

    if(final_luhn_num%10 == 0){
        printf("Num is valid!");
    }
    else{
        printf("Num is not valid!");
    }
}