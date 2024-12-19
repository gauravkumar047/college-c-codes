#include <stdio.h>	
int main(){
    int num, n, d, sum=0;
    printf("enter the number : ");
    scanf("%d",&num);
    n=num;
    for(int i=1 ; ; i++){
        d=n%10;
        n=n/10;
        sum=sum+d;
        if(n==0){
            break;
    }
    }
    printf("sum of all digits of %d is %d",num,sum);
    return 0;
}