// Question : Write a program to check whether a given character is present in a string or not.

#include <stdio.h>
#include <string.h>

int main(){
    char c = 'k';
    int contains = 0;
    char str[] = "Anuj Bhumi";
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i] == c){
            contains = 1;
            break;
        }
    }
    if(contains){
        printf("Yes it contains\n");
    }
    else{
        printf("Does not contain\n");
    }
    
    return 0;
}