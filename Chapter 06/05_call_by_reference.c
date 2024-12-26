#include <stdio.h>

// Let sum now change the value of x.
int sum(int*, int*);

int sum(int *a, int *b){\
    *a = 10;
    return *a + *b;
}

int main(){
    int x = 19;
    int y = 32;
    printf("The sum of 19 and 32 is %d\n", sum(&x, &y));  

    printf("The value of x is %d\n", x);
    return 0;
}