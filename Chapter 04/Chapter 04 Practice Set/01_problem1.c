// Write a program to print multiplication table of a given number n.


#include <stdio.h>

int main(){
    
    int n;
    scanf("%d", &n);

    for (int i = 0; i <= 10; i++)
    {
        printf("%d X %d = %d\n", n, i, n*i);
    }
        
    return 0;
}