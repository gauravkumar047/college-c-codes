//4.program to swap two variable using third variable
#include <stdio.h>
int main(){
    int variable1, variable2, variable3;
    printf("enter variable1:");
    scanf("%d",&variable1);
    printf("enter variable2:");
    scanf("%d",&variable2);
    printf("before swapping\nvariable1=%d\nvariable2=%d\n",variable1,variable2);
    variable3=variable1;
    variable1=variable2;
    variable2=variable3;
    printf("after swapping\nvariable1=%d\nvariable2=%d",variable1, variable2);
    return 0;
}