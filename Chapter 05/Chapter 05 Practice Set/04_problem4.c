// Question : Write a program using recursion to calculate nth element of Fibonacci series.
// Fibonacci Series : 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, .... 
// Fibonacci (n) = Fibonacci (n-1) + Fibonacci (n-2)
#include <stdio.h>

int Fibonacci (int);

int Fibonacci (int n){
    if (n == 1 || n == 2){
        return (n-1);
    }
    return Fibonacci (n-1) + Fibonacci (n-2);
}

int main(){
    int n = 4;

    printf("The value of Fibonacci Series at %d is %d\n", n, Fibonacci(n));
    
    return 0;
}