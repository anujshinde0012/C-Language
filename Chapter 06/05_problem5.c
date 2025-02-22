// Question : Write a program using a function which calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main().

#include <stdio.h>

int *sum (int, int);

int *sum (int a, int b){
    int s = a + b;
    int *ptr = &s;
    printf("The sum is %d\n", s);
    return ptr;
}

float *avg(int a, int b){
    float avg = (a + b)/2.0;
    float *ptr = &avg;
    printf("The average is %f\n", avg);
    return ptr;
}

int main(){
    
    int x = 6;
    int y = 8;

    int *ptr1;
    float *ptr2;

    ptr1 = sum (x, y);
    ptr2 = avg (x, y);

    printf("The address of sum is %u and the address of avg is %u", ptr1, ptr2);
    return 0;
}
