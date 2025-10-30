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
    valid  = luhn_validator(acc_num);

    if (valid){
        printf("Enter PIN: ");
        while ((ch = _getch()) != 13){
        pin[i] = ch;
        printf("*");
        i++;
        }
    }
    else{
        printf("\nThe Card Isn't Valid!\n");
    }
    return 0;
}