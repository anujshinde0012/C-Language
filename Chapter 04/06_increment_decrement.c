#include <stdio.h>

int main(){
    
    int i = 5;
     printf("The value of i is %d \n", i);

     i = i + 5;
     printf("The value of i is %d \n", i++); // i = 5, 5 + 5 = 10
     printf("The value of i is %d \n", i); // i = 10, 10 + 1 = 11

     // Here, in the increment part the i++ and ++i both are two different concepts. 
    /*  ++i first does the increment of 'i' and then prints the value of 'i'.
        for eg., if i = 2 and we apply ++i,
        it will be first incremented by 1 i.e., 3 and then it will the value of 'i' i.e., 3
       
        But in i++, the value of 'i' is printed first and then the increment of 'i' is being performed.
        for e.g., if i = 5 and we apply i++,
        it will be first printed and then there will be increment of 'i' by 1 i.e., 6
    */

     // i++ is also known as POST INCREMENT OPERATOR.   


     i +=2; // i+=2 is same as i = i + 2
     printf("The value of i is %d \n", i); // i = 11, 11 + 2 = 13
    return 0;
}