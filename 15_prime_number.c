#include <stdio.h>
int prime(int n){
    if(n<2){
        return 0;
    }else if(n==2){
        return 1;
    }
    for(int i=2; i<n; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n, p;
    printf("enter the number : ");
    scanf("%d",&n);
    p=prime(n);
    if(p){
        printf("%d is a prime number",n);
    }else{
        printf("%d is not a prime number",n);
    }
    return 0;
}