// Question : Write a program using function to find average of three numbers.

#include <stdio.h>

float average (int a, int b, int c);

float average (int a, int b, int c){
    return (a + b + c)/3.0;
}

int main(){
    int a = 9.0;
    int b = 3.0;
    int c = 5.0;
    printf("The average of the three numbers is %f\n", average(a, b, c));
    
    return 0;
}