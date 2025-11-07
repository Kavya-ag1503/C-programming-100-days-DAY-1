/*Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.*/

#include <stdio.h>

int main() {
    char ch;

    // Input character
    printf("Enter a character: ");
    scanf(" %c", &ch);  // space before %c skips newline

    // Check character type
    if (ch >= 'A' && ch <= 'Z') {
        printf("this is an uppercase alphabet.\n", ch);
    } 
    else if (ch >= 'a' && ch <= 'z') {
        printf("this is a lowercase alphabet.\n", ch);
    } 
    else if (ch >= '0' && ch <= '9') {
        printf("this is a digit.\n", ch);
    } 
    else {
        printf("this is a special character.\n", ch);
    }

    return 0;
}
