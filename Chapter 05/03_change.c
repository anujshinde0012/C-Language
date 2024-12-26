#include <stdio.h>

int change (int a);

int change (int a){
    a = 29;  // Misnomer
    return 0;
}

int main(){
    int b = 35;
    change(b);  // The value of remains the same i.e., 35 it does not change.
    printf("b is %d; no change !", b); 
    
    return 0;
}