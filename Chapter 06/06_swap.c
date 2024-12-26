#include <stdio.h>

void swap (int* a, int* b);

void swap (int* a, int* b){
    int temp;
    temp = *a;
    *a = *b; 
    *b = temp; 
}
int main(){
    int a = 11;
    int b = 12;
    swap (&a, &b);
    printf("The value of a is %d and the value of b is %d", a, b);
    
    return 0;
}