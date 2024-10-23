//14.program to print the fibonacci series
#include <stdio.h>	
int main(){
    int n, a=0, b=1, c;
    printf("enter number of terms upto which you want the fibonacci series: ");
    scanf("%d",&n);
    printf("fibonacci series: %d,%d,",a,b);
    for(int i=3; i<=n; i++ ){
        c=a+b;
        printf("%d,",c);
        a=b;
        b=c;
    }
    return 0;
}