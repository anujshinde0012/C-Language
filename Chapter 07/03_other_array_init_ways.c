#include <stdio.h>

int main(){
    
    int cgpa[4] = {7, 8, 5, 9};
    
    for (int i = 0; i < 4; i++)
    {
        printf("The value of index at index %d is %d\n", i, cgpa[i]);
    }
    return 0;
}