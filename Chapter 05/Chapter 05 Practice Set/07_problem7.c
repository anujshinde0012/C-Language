/* Question : Write a program using function to print the following pattern (first n lines)
*
* * *
* * * * *      */

#include <stdio.h>

int main(){
    int n = 10;
    for (int i =  0; i < n; i++)
    {
       // This loop runs from 0 to 2.
       // If i = 0 ----> print 1 star.
       // If i = 1 ----> print 3 stars.
       // If i = 2 ----> print 5 stars.
       // no_of_stars = (2*i+i)
       // This for loop prints (2*i+i) stars.

       for(int j = 0; j < 2*i+i; j++){
        printf("*");
       }
       // THis printf prints a new line.
       printf("\n");
    }
    return 0;
}