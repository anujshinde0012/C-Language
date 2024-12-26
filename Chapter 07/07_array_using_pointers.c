#include <stdio.h>

int main(){
    int marks[] = {55, 90, 78, 66};
    int *ptr = &marks[0];
    // int *ptr = marks; SAME AS int *ptr = &marks[0];

    for (int i = 0; i < 4; i++)
    {
        printf("The marks at index %d is %d\n", i, marks[i]);
        printf("The marks at index %d is %d\n", *ptr);
        ptr++;
    }
    
    return 0;
}