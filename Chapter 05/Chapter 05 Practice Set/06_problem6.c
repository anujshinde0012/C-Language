// Question : Write a recursive function to calculate the sum of first ‘n’ natural numbers.

#include <stdio.h>

int sum(int);

int sum(int n){
    if (n == 1){
        return n;
    }
    return sum(n-1) + n;
}
int main(){
    int a = 6;
    printf("The sum of first 6 natural numbers is %d\n", sum(6));
    
    return 0;
}