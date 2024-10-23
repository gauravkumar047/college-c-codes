/*10.program that takes two operands and one operator from the user and perform the operation and prints the result by using switch statement*/
#include <stdio.h>	
int main(){
    int choice;
    float operand1, operand2, result;
    printf("Enter first operand: ");
    scanf("%f",&operand1);
    printf("Enter second operand: ");
    scanf("%f",&operand2);
    printf("Enter 1:>addition 2:>substraction 3:>division 4:>multiplication\nyour choice:> ");
    scanf("%d",&choice);
    switch(choice){
        case 1: result=operand1+operand2;
                printf("addition :> %f",result);
                break;
        case 2: result=operand1-operand2;
                printf("substraction :> %f",result);
                break;
        case 3: result=operand1/operand2;
                printf("division :> %f",result);
                break;
        case 4: result=operand1*operand2;
                printf("multiplicatioin :> %f",result);
                break;
        default : printf("invalid choice!");
    }
    return 0;
}