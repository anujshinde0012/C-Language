// Question : Write a function and pass the value by reference.

#include <stdio.h>

void change_to_ten_times(int*);

void change_to_ten_times(int *a){
    *a = *a * 10;
}

int main(){
    int b = 10;
    printf("The value of b is %d\n", b);
    change_to_ten_times(&b);
    printf("The value of b is %d\n", b);
    return 0;
}
    