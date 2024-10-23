//13.program to print the sum of even and odd numbers from 1 to N numbers
#include <stdio.h>	
int main(){
    int n, i, j, odd=0, even=0;
    printf("enter the number upto which you want the sum of odd and even number: ");
    scanf("%d",&n);
    for(i=0; i<=n; i=i+2){
        even=even+i;
    }
    for(j=1; j<=n; j=j+2){
        odd =odd+j;
    }
    printf("sum of all even numbers between 1 and %d : %d\nsum of all odd numbers from 1 to %d : %d",n,even,n,odd);
    return 0;
}