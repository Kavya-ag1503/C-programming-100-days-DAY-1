//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main(){
    
    float c,f;
    printf("Enter temp in cel: ");
    scanf("%f",&c);
    
    f = (c*9/5)+32;

    printf("Temp in Fahr is:%f\n",f);
    return 0;

}