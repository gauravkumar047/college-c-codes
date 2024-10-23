//2.Write a program to find area and circumference of a circle
#include <stdio.h>
#define pi 3.14
int main(){
    float radius, area, cicumference;
    printf("enter the radius of the circle:");
    scanf("%f",&radius);
    area=pi*radius*radius;
    cicumference=2*pi*radius;
    printf("the area of the circle is:%.2f\n",area);
    printf("the circumference of the circle is:%.2f",cicumference);
    return 0;
}