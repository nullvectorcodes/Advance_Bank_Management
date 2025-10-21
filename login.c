#include <stdio.h>
#include "luhn_validator.h"

int main(){
    int valid = 0;
    char acc_num[20] = {0};
    int pin = 0;
    printf("Enter Account Number: ");
    scanf("%19s",acc_num);
    printf("Enter PIN: ");
    scanf("%d",&pin);

    if (valid){
        printf("It's Valid!\n");
    }
    else{
        printf("Itsn't Valid!\n");
    }

    return 0;
}