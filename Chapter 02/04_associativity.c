#include <stdio.h>

int main()
{
    int a = 2;
    int b = 6;
    int c = 4;

    printf ("The value is %d\n", a*b/c); // The associativity of operators went from left to right.
    printf ("The value is %d", 2*a * 3*b / 5*c + 8*a*b );
      // 2*2 * 3*b / 5*c + 8*a*b
      // 4*3*b / 5*c + 8*a*b
      // 12*6 / 5*c + 8*a*b
      // 72/5 * c + 8*a*b
      // 14*4 + 8*a*b
      // 56 + 96
      //152

    

    return 0;
}