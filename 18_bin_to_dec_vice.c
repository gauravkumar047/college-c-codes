#include <stdio.h>
#include <math.h>
int main(){
    int decimal=0, binary=0, choice, rem, num, count=0;
    printf("to covert\nbinary to decimal >>> press 1\ndecimal to binary >>> press 2\nyour choice >>> ");
    scanf("%d",&choice);
    if(choice==1){
    printf("enter binary number : ");
    scanf("%d",&binary);
    num=binary;
    for(int i=0; num>0; i++){
        rem=num%10;
        decimal=decimal+rem*pow(2, i);
        num=num/10;
    }
    printf("binary number %d in decimal number is %d",binary,decimal);
    }
    else if(choice==2){
    int array[100];
    printf("enter decimal number : ");
    scanf("%d",&decimal);
    num=decimal;
    for(int i=0; num>0; i++){
        rem=num%2;
        array[i]=rem;
        num=num/2;
        count++;
    }
    printf("decimal number %d in binary number is ",decimal);
    for(int i=count-1; i>=0; i--){
        printf("%d",array[i]);
    }

    }else{
        printf("wrong input !");
    }
    

    


    return 0;
}