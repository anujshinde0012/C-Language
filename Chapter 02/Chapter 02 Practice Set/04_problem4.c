#include <stdio.h>

int main()
{

    // Explain step by step verification of 3*x/y-z+k where x = 2, y = 3, z = 3, k = 1.

    int x = 2;
    int y = 3;
    int z = 3;
    int k = 1;

    printf("The value is %d", 3 * x / y - z + k);
    // 3*2/y-z+k
    // 6/3-z+k
    // 2-3+k
    //-1+1
    // 0
    return 0;
}