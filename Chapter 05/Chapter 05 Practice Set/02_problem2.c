// Question : Write a function to convert Celsius temperature into Fahrenheit.

#include <stdio.h>

float c2f (float);

float c2f (float c){
    return (9/5)*c + 32;
}

int main(){
    
    float c = 35.6;

    printf("The given temperature in degree celcius is %f\n", c2f (c));
    
    
    return 0;
}