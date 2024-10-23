//6.program that checks whether two number entered by the user are equal or not
#include <stdio.h>
int main(){
    float number1, number2;
    printf("enter number1: ");
    scanf("%f",&number1);
    printf("enter number2: ");
    scanf("%f",&number2);
    if(number1==number2){
        printf("both numbers are equal!");
    }
    else{
        printf("both numbers are not equal");
    }
    return 0;
}