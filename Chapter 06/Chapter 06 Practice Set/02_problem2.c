/* Question : Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to a function and print its address.
 Are these addresses same? Why? */

 #include <stdio.h>

 int add(int *val){
    printf("The value of val is %d\n", val);
    printf("The value at val is %d\n", *val);
 }
 
 int main(){
    int i = 23;
    int *val = &i;
    printf("The address of i is %u\n", &i);
    add(val);
    return 0;
 }