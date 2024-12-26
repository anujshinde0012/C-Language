// Write a program to calculate the factorial of a given number using a for loop.

#include <stdio.h>

int main(){
    
    int i = 1;
    int product = 1;
    int n = 8;

    for (int i = 1; i <= n; i++)
    {
       product *= i;  
    }
         printf("The calculation is %d\n", product);
          
    return 0;
}