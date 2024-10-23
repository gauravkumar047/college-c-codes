//12.program to find the factorial of a given number
#include <stdio.h>	
int main(){
    int i, n, result;
    printf("enter the number whose factorial you want: ");
    scanf("%d",&n);
    for(result=n, i=n-1; i>0; i--){
        result=result*i;
    }
    printf("factorial of %d is: %d",n,result);
    return 0;
}