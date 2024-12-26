#include <stdio.h>

int main(){
    int i = 72;
    int* j = &i; // J is the pointer pointing towards i.J is an integer pointer.
    
    // int *j is written here because the value of j is integer.
    // But it can also be written as char *j or float *j.

    printf("The address of i is %p\n", &i);  // (&)address ask what is the address of the value whereas (*)operator asks about the value of the respected address.
    printf("The address of i is %p\n", j);

    printf("The value of address j is %d\n", *j);   // Value will be the integer therefore we have typed %d.
    printf("The value of address j is %d\n", *(&i));  // For knowing value if addre4ss is provided then we used (*) operator.
    return 0;
}