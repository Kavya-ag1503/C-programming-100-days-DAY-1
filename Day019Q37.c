// Q37: Write a program to find the LCM of two numbers.

#include <stdio.h>

int main() {
    int a, b, h = 0, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int min = (a < b) ? a : b;
    for(int i = 1; i <= min; i++) {
        if(a % i == 0 && b % i == 0) {
            h = i; // hcf
        }
    }

    lcm = (a * b) / h;

    printf("HCF of %d and %d is %d\n", a, b, h);
    printf("LCM of %d and %d is %d\n", a, b, lcm);

    return 0;
}
