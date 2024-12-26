#include <stdio.h>

int main()
{
    int a;

    printf("Enter a :");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("You have enterd 1\n");
        break;

    case 2:
        printf("You have entered 2\n");
        break;

    case 3:
        printf("You have entered 3\n");
        break;

    case 4:
        printf("You have entered 4\n");
        break;

    default:
        printf("Does not exists\n");
    }
    return 0;
}