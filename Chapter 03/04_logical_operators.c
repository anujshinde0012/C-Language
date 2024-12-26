#include <stdio.h>

int main()
{

    int a = 1;
    int b = 1;

    printf("The value of a and b is %d\n", a && b);
    printf("The value of a or b is %d\n", a || b);
    printf("The value of not(a) is %d\n", !a);
    printf("The value of not(b) is %d\n", !b);

    if (a && b)
    {
        printf("Both a and b are true.\n");
    } 
      
      // Both the cases are same and both gives the same output in the terminal where 1 is considred to be true and 0 is considred to be false.  
    if (a)
    {
        if (b)
        {
            printf("Both a and b are true.\n");
        }
    }

    return 0;
}