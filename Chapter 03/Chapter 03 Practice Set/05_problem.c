//https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html

 #include <stdio.h>
 
 int main(){
    
    char ch = 'S';
    printf("The character is %c\n", ch);
    printf("The value of character is %d\n", ch);
 
 // characters having ASCII value between 97 and 122 they are in lower case. 
    if (ch >= 97 && ch <= 122){
        printf("The character is lower case.\n");
    }

    else {
        printf("The character is not a lower case, its an upper case.\n");
    }

    return 0;
 }