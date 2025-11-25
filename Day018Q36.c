// Q36: Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int main(){

    int a,b,h=0;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    int min = (a < b) ? a : b;
   for(int i = 1; i <= min; i++){
        if(a%i==0 && b%i==0){
            h = i; //largest cf
        }
    }
    printf("%d",h);
    return 0;
}