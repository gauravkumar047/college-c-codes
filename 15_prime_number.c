//15.program to check whether the entered number is prime or not
#include <stdio.h>	
int main(){
    int n, i=3;
    printf("enter the number: ");
    scanf("%d",&n);
    if(n<2){
        printf("%d is not a prime number",n);
    }
    else if(n==2){
        printf("%d is a prime number",n);
    }
    else if(n>2){
    while(i<n){
        if((n%i)==0 || (n%2)==0){
            printf("%d is not a prime number",n);
            goto a;
        }
            i=i+2;
    }
    printf("%d is a prime number",n);
    }
   a: return 0;
}