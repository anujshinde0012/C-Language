#include <stdio.h>
#include <string.h>

int main(){

    char st[] = "Anuj"; 
    char s1[67] = "Anuj";
    char s2[67] = " Bhai";

   // printf("%d", strlen(st)); 
   // strlen counts the number of character in the string excluding the null character. 

   // char target[34];
   // strcpy(target, st); // target now contains Anuj.
   // printf("%s %s", target, st);

   // strcat(s1, s2); // s1 now contains "Anuj Bhai". 
   // printf("%s", s1);

   int a = strcmp("far", "joke");
   printf("%d", a); // if the first string comes first in the dictionary than second then we will be getting the neagtive number other positive.

    return 0;
}