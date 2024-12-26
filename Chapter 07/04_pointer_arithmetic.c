#include <stdio.h>

int main(){
    
    // POINTER ARITHMETIC BY USING INTEGER POINTER (Increments the address by 4 bytes) :
    //int a = 8;
    //int *ptr = &a;
    //printf("The address of a is %u\n", &a);
    //printf("The address of a is %u\n", ptr);
    //ptr++; 
    /* Here when we are typing increment that means it will increment the address by the number of bytes it takes.
    E.g. If ptr takes 4 bytes and its previous address was 62302 then by ptr++ it will now become 62306. */
    
    // POINTER ARITHMETIC BY USING CHARACTER POINTER (Increments the address by only 1 byte) :
    char a = 'A';
    char *ptr = &a;
    printf("The address of a is %u\n", &a);
    printf("The address of a is %u\n", ptr);
    ptr++; 
    printf("The new address of ptr is %u\n", ptr);

    return 0;
}