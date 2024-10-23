//Write a program to convert temperature from celsius to fehrenheit
#include <stdio.h>
int main(){
    float celsius, fehrenheit;
    //enter temperature in celsius
    printf("enter the temperature in centigrade:");
    scanf("%f",&celsius);
    //converting celsius to fehrenheit
    fehrenheit=(9.0/5.0)*celsius+32;
    printf("%.2f%c centidrade is equal to %.2f%c fehrenheit",celsius,248, fehrenheit, 248);
    return 0;
}