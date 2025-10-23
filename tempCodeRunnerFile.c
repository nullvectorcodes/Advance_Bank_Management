#include <stdio.h>
#include "luhn_validator.h"
#include <conio.h>

int main(){
    int ch , i =0;
    char pin[6] = {0};
    int valid = 0;
    char acc_num[20] = {0};
    printf("Enter Account Number: ");
    scanf("%20s",acc_num);

    if (valid){
        printf("Enter PIN: ");
        while ((ch = _getch()) != 13){
        pin[i] = ch;
        printf("*");
        i++;
    }
    }
    else{
        printf("\nThe Card Isn't Vlid!\n");
    }

    return 0;
}