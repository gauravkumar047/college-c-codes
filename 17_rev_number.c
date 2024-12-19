#include <stdio.h>	
int main(){
    int num, n, remainder, reverse=0;
    printf("enter the number : ");
    scanf("%d",&n);
    num=n;
    while(num>0){
        remainder=num%10;
        reverse=(reverse*10)+remainder;
        num=num/10;
    }
    printf("reverse of %d is %d",n,reverse);
    return 0;
}