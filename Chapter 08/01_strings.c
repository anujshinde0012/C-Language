#include <stdio.h>

int main(){
    
    // char st[] = {'a', 'b', 'n', '\0'}; // To mark that the string is completed we use the null character.
    char st[] = "abn"; // Same as the above. when we use double quotes we do not use the null character. 
    for (int i = 0; i < 3; i++)
    {
        printf("Character is %c\n", st[i]);
    }    
    return 0;
}