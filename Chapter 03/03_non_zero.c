#include <stdio.h>

int main()
{

    if (1)
    {
        printf("This if gets executed !\n"); // Non-zero value whose value is not zero i.e., int, float, or characters, then they can be executed in the if statement.
    }

    if (90)
    {
        printf("Will this if get executed ?\n");
    }

    if ('a')
    {
        printf("The character inside the if statement will get executed in the terminal.\n");
    }

    if (9.456)
    {
        printf("This float inside the if statement will also get executed inside the terminal.\n");
    }

    if (0)
    {
        printf("Please execute me.\n"); // This If statement contains the value 0, therefore it cannot be executed in the terminal.
    }
    return 0;
}