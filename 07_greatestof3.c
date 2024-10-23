//7.program to find the greatest of three numbers
#include <stdio.h>
int main(){
    int num1, num2, num3;
    printf("enter first number: ");
    scanf("%d",&num1);
    printf("enter second number: ");
    scanf("%d",&num2);
    printf("enter third number: ");
    scanf("%d",&num3);
    if(num1>num2 && num1>num3){
        printf("%d is the greatest of three numbers",num1);
    }
    else if(num2>num1 && num2>num3){
        printf("%d is the grestest of three numbers",num2);
    }
    else{
        printf("%d is the greatest of three numbers",num3);
    }
    return 0;
}