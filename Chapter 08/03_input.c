#include <stdio.h>

int main(){
    
    char anuj[4];
    scanf("%s", anuj); // Here '&' is not used because in string character itself contains the address of the string.

    printf("%s", anuj);
    
    return 0;
}