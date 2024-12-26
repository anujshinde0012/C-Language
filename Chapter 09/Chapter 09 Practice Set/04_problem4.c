// Question : Write a program to illustrate the use of arrow operator → in C

#include <stdio.h>

typedef struct emp {
    int salary;
    float score;
} Employee;


int main(){
    Employee e1;
    Employee *ptr = &e1;
    // (*ptr).salary = 56;
    // (*ptr).score = 456;

    ptr -> salary = 56;
    ptr -> score = 456;

    printf("The value of salary of an employee is %d and score of an employee is %f.\n", ptr -> salary, ptr -> score);
    
    return 0;
}