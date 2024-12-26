// Question : Write problem 5’s structure using ‘typedef’ keywords.


#include <stdio.h>

typedef struct c {
    int real;
    int imaginary;
} Complex;

int main(){
     Complex c = {1, 5};
     printf("The value of Complex number is %d + %d i", c.real, c.imaginary);
    return 0;
}