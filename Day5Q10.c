//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>

int main() {
    int totsec, hours, min, sec;

    
    printf("Enter time in seconds: ");
    scanf("%d", &totsec);

   
    hours = totsec / 3600;
    min = (totsec % 3600) / 60;
    sec = totsec % 60;

    
    printf("Time = %d:%d:%d\n", hours, min, sec);

    return 0;
}
