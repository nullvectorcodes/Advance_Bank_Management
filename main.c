#include <stdio.h>
#include "luhn_validator.h"

int response = 0;

int main(){
    printf("\n----Banking System----\n");
    printf("1. Login\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
    scanf("%d", &response);

    switch (response){
        case 1: //login
            luhn_validtor();
            break;
        case 2: //deposit
            break;
        case 3: //withdraw
            break;
        case 4: //exit
            break;
    }
    
}