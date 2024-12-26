#include <stdio.h>

int main(){
    char i = 'A';
    char* j = &i; // J is the pointer pointing towards i. J is a character pointer.
    
    float k = 9.567;
    float *l = &k; // J is the pointer pointing towards i. J is a float (decimal number) pointer.  


    printf("The address of i is %p\n", &i);  // (&)address ask what is the address of the value whereas (*)operator asks about the value of the respected address.
    printf("The address of i is %p\n", j);

    printf("The value of address j is %d\n", *j);   // Value will be the integer therefore we have typed %d.
    printf("The value of address j is %d\n", *(&i));  // For knowing value if addre4ss is provided then we used (*) operator.
    return 0;
}