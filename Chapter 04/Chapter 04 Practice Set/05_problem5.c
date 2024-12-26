// Write a program to sum first ten natural numbers using while loop.

#include <stdio.h>

int main(){
    int i = 1;
    int sum = 0;

    while (i<=10)
    {
        i++;
        sum +=i;
        
    }
    printf("The sum is %d\n", sum );
    

    return 0;
}