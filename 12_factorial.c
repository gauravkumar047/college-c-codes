//12.program to find the factorial of a given number
#include <stdio.h>
int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}	
int main(){
    int n;
    printf("enter the number whose factorial you want : ");
    scanf("%d",&n);
    printf("factorial of %d is %d",n,factorial(n));
    return 0;
}