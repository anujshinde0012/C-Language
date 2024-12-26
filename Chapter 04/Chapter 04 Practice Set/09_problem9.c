#include <stdio.h>

int main(){
    
    int i = 1;
    int n = 8;
    int product = 1;

    while (i<=n)
    {
        product *= i;
        i++;
    }
     
     printf("The product is %d\n", product);

    return 0;
}