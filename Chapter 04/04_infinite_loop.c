#include <stdio.h>

int main(){
    
    int i = 0;

    while (i < 10){
        printf("The value of i is %d \n", i); /* In this loop type, the value of 'i' will remain constant i.e., 0, 
        becuase the condition for the increament of value of 'i' is removed. Therefore, the loop is executed continuously.
        */ 
    }
    return 0;
}