// Question : Write a function to calculate force of attraction on a body of mass ‘m’ exerted by earth. Consider g = 9.8m/s2.

#include <stdio.h>

float force (float, float);

float force (float m, float g){
    return m*g;
}

int main(){
    float m = 3;
    float g = 9.8;

    printf("The force of attraction on a body of mass exerted by earth is %f\n", force(m, g));
    
    return 0;
}