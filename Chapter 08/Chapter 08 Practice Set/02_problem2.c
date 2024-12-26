// Question : Write a program to take string as an input from the user using %c and %s confirm that the strings are equal.

#include <stdio.h>

int main()
{

    char str[5];

    // scanf("%s", str);

    for (int i = 0; i < 4; i++)
    {
        scanf("%c", &str);
        fflush(stdin);
    }

    str[4] = '\0';
    printf("%s", str);

    return 0;
}