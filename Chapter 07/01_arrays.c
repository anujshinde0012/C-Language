#include <stdio.h>

int main(){
    int marks[90]; // The limit of the marks will be only 90 variables as we mentioned in the square brackets.

    marks[0] = 21;
    marks[1] = 78;
    // But we can only go till marks[89].
   // It is very important to note that the array index always starts with zero(0).

    printf("Marks 0 and marks 1 is %d %d", marks[0], marks[1]);
    return 0;
}