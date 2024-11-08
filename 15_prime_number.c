#include <stdio.h>	
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    if(n<2){
        printf("%d is not a prime number",n);
    }
    else if(n==2){
        printf("%d is a prime number",n);
    }
    else if((n%2)==0){
        printf("%d is not a prime number",n);
    }
    else if(n==3){
        printf("%d is a prime number",n);
    }
    else if(n>3){
        for(int i=3; i<n; i=i+2){
            if((n%i)==0){
                printf("%d is not a prime number",n);
                goto a;
            }
            else{printf("%d is a prime",n);
            goto a;
            }
        }
    }
   a: return 0;
}