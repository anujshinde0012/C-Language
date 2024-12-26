#include <stdio.h>

int main(){
    // condition ? expression-if-true : expression-if-false ;
    int a = 345;
    int b = 389;
    (a>b) ? printf("You should have an apple.") : printf("You should have a banana.") ; // We get "you should have a banana" as the output when we run in the terminal because b is greater than a. 
    
    return 0;
}