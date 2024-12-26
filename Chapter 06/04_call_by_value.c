#include <stdio.h>

int sum(int, int);

int sum(int a, int b){
    return a + b;
}

int main(){
    int x = 19;
    int y = 32;
    printf("The sum of 19 and 32 is %d\n", sum(x, y));  
    return 0;
}