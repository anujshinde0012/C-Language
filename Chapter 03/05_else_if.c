#include <stdio.h>

int main()
{

    int age = 21;

    if (age > 60)
    {
        printf("You can definetly drive but be safe, you are a senior citizen.");
    }

    else if (age > 18)
    {
        printf("You are fully eligible to drive.");
    }

    else 
        {
            printf("Sorry! You are not eligible to drive.");
        }

    return 0;
}