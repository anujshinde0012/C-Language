#include <stdio.h>

int main(){
    
    int a = 12;
    int b = 85;
    int c = 67;
    int d = 99;
     
    if (a>=b && a>=c && a>=d){
        printf("A is the greater among the four numbers i.e. %d\n", a);
    }

    else if (b>=a && b>=c && b>=d){
        printf("B is the greatest among the four numbers i.e. %d\n", b);
    }

    else if (c>=a && c>=b && c>=d){
        printf("C is the greatest among the four numbers i.e. %d\n", c);
    }

    else {
        printf("D is the greatest among the four numbers i.e. %d\n", d);
    }
    
    
    return 0;
}