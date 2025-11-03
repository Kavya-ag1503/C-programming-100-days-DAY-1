//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h> 

int main(){

    float sim,comp,p,r,t;

    printf("Enter principal value: ");
    scanf("%f",&p);
    printf("Enter rate of intrest: ");
    scanf("%f",&r);
    printf("Enter time period: ");
    scanf("%f",&t);

    sim = (p*r*t)/100;

    comp = p * pow((1 + r / 100), t) - p;

    
    printf("Simple intrest is:%f\n",sim);
    printf("Compound Interest is: %f\n", comp);
    return 0;
}