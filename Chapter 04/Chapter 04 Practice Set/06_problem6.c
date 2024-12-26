/*
#include <stdio.h>

int main(){
    
    int i = 10;
    int sum = 0;

    for (int i = 1; i<=10; i++)
    {
        printf("The sum of first ten natural numbers are %d\n", sum, sum +=i);
    }
    
    return 0;
}
*/

#include <stdio.h>

int main(){
    
    int i = 1;
    int sum = 0;

    do
    {
        i++;
        sum +=i;
    } while (i<=10);
    
    return 0;
}