#include <stdio.h>

int main(){
    int marks[5];
    printf("Enter the marks of every students\n");
    // scanf("%d", &marks[0]);
    // scanf("%d", &marks[1]);
    // scanf("%d", &marks[2]);
    // scanf("%d", &marks[3]);
    // scanf("%d", &marks[4]);
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("The value of marks at index %d is %d\n", i, marks[i]);
    }

    printf("The marks of 5 students are %d, %d, %d, %d, %d.", marks[0], marks[1], marks[2], marks[3], marks[4]);
    return 0;
}                                                   