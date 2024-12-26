#include <stdio.h>

// Function Prototype
int sum(int, int);

// Function Definition
int sum(int x, int y){
printf("The sum is %d\n", x + y);
return x+y;
}

int main(){
    
    
    int a = 1;
    int b = 2;
    // int c = a + b;
    // printf("The sum is %d\n", c);
    sum(a,b);   // Function Call


    int a1 = 4;
    int b1 = 6;
    //int c1 = a1 + b1;
    //printf("The sum is %d\n", c1);
    sum(a1, b1);   // fUNCTION Call


    int a2 = 32;
    int b2 = 28;
    //int c2 = a2 + b2;
    //printf("The sum is %d\n", c2);
    sum(a2, b2);   // Function Call

    return 0;
}