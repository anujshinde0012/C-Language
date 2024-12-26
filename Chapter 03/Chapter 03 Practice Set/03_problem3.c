#include <stdio.h>

//Calculate income tax paid by an employee to the government as per the slabs mentioned below: 
//          Income Slab          Tax                   
//           2.5 – 5.0L           5%                        
//           5.0L - 10.0L         20%                     
//           Above 10.0L          30%                  


int main(){
    int income, tax;

    printf("Enter income :\n");
    scanf("%d", &income);

    if (income >=2.5 && income <=5.0){
        printf("You are registered to pay 5 percent tax to the government.");
    }

    else if (income >=5.0 && income <= 10.0){
        printf("You are registered to pay 20 percent tax to the government.");
    }

    else {
        printf("You are registered to pay 30 percent tax to the government.");
    }

    return 0;
}