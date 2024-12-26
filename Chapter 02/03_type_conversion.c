#include <stdio.h>

int main()
{
     int a = 9;
     int b = 2;
     int c = 9/2; // RULE : int/int = int ]
     
     float x = 9.0;
     int y = 2;
     float z = x/y; // RULE : float/int = float

     float m =  9.0;
     float n = 2.0;
     float o = m/n; // RULE : float/float = float

     int q = 9.8; // Demosion has happened (9.8 becomes integer i.e., 9)

     printf ("The value of c is %d\n", c);
     printf ("The value of z is %f\n", z);
     printf ("The value of o is %f\n", o);
     printf ("The value of q is %d\n", q);


    return 0;
}