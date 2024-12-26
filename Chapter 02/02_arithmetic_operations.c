#include <stdio.h>

int main() 
{
    int a = 9;
    int b = 6;
    int c = a + b;
     
    printf ("The value of a is %d and value of b is %d and their sum is %d\n", a, b, c);

    printf ("The remainder when a is divided by b is  %d\n", a % b );
     // Modulus operator is used to get the remainder.
    
    return 0;
}