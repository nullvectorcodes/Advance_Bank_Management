#include "luhn_validator.h"


int luhn_validator(const char *card_number){
    int  i, size_of_card_num = 0, final_luhn_num = 0 , is_alter_num = 0;

    size_of_card_num = strlen(card_number);

    for (i=0;i<size_of_card_num;i++){
        if(!isdigit(card_number[i])){
            return 0 ;
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
        return 1;
    }
    else{
        return 0;
    }
}