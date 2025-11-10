// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Checking if triangle is valid or not
    if (a + b > c && b + c > a && c + a > b) {
        
        // types
        if (a == b && b == c) {
            printf("Triangle is Equilateral\n");
        }
        else if (a == b || b == c || a == c) {
            printf("Triangle is Isosceles\n");
        }
        else {
            printf("Triangle is Scalene\n");
        }
    }
    else {
        printf("Not a valid triangle\n");
    }

    return 0;
}
