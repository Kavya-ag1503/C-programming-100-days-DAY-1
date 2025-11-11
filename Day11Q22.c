//Q22: Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h> 

int main(){
    float cp,sp,p,l;
    printf("Enter cost price and selling price: ");
    scanf("%f %f",&cp ,&sp);

    if(sp>cp){
        p = sp-cp;
        p = (p/cp)*100;
        printf("Profit per is %f\n:",p);
    }else if(cp>sp){
        l = cp-sp;
        l = (l/cp)*100;
        printf("Loss per is %f\n:",l);
    }else{
        printf("No profit and No loss\n");
    }
    
    return 0;
}