#include <stdio.h>
#include "luhn_validator.h"
#include <conio.h>

int main(){
    int ch , i =0;
    char pin[6] = {0};
    int valid = 0;
    char acc_num[20] = {0};
    printf("Enter Account Number: ");
    scanf("%19s",acc_num);
    if (valid){
        printf("\nThe card is Valid!\n");
    }
    else{
        printf("\nThe Card Isn't Vlid!\n");
    }
    printf("Enter PIN: ");

    while ((ch = _getch()) != 13){
        pin[i] = ch;
        printf("*");
        i++;
    }


    return 0;
}