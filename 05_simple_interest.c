//5.Program to calculate simple interest
#include <stdio.h>
int main(){
    float simple_interest, principal_amount, rate_of_interest, time;
    printf("enter the principal amount: ");
    scanf("%f",&principal_amount);
    printf("enter the rate of interest(p.a): ");
    scanf("%f",&rate_of_interest);
    printf("enter the time(in year): ");
    scanf("%f",&time);
    simple_interest=(principal_amount*rate_of_interest*time)/100;
    printf("the simple interest is: %.2f",simple_interest);

    return 0;
}