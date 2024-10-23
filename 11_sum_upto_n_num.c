//11.program to print the sum of all numbers upto a given number
#include <stdio.h>	
int main(){
    int a, b, sum=0;
    printf("enter a number upto which you want the sum of: ");
    scanf("%d",&a);
    for(b=1; b<=a; b++){
        sum=sum+b;
    }
    printf("sum is: %d",sum);
    return 0;
}