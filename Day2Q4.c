//Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>


int main(){

    float rad,area, cir;
    printf("Enter radius of circle: ");
    scanf("%f",&rad);

    area = 3.14*rad*rad;
    cir = 2*3.14*rad;
    printf("Area of circle is:%f\n",area);
    printf("Circumference of circle is :%f\n",cir);

    return 0;

}