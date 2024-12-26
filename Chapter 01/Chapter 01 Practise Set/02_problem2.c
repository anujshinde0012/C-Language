#include <stdio.h>

int main(){
    int r = 6;
    int height = 9;

    printf ("The area of circle whose radius %d is %f\n", r, 3.14*r*r);
    printf ("The volume of cylinder whose radius %d and height %d is %f", r, height, 3.14*r*r*height);
    return 0;
}