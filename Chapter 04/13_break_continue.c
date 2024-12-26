#include <stdio.h>

int main(){
    
    int n = 10;

    for (int i = 0; i < n; i++)
    {
        if ( i==8)
        {
           //break; // exit the loop now after setting the value of 'i' !
             continue; // skip the iteration now !
        }
                 
        printf("i is %d\n", i);
    }
    
    return 0;
}