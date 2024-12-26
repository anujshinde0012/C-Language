#include <stdio.h>
#include<string.h>

struct employee {
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee facebook[100];
     facebook[0].code = 100;
     facebook[1].code = 101;
     facebook[2].code = 102;
     
     facebook[0].salary = 190;
     facebook[1].salary = 191;
     facebook[2].salary = 192;

     strcpy(facebook[0].name, "Anuj");
     strcpy(facebook[1].name, "Bhumi");
     strcpy(facebook[2].name, "Shinde");

     printf("%d %f %s\n %d %f %s\n %d %f %s\n", facebook[0].code, facebook[0].salary, facebook[0].name,facebook[1].code, facebook[1].salary, facebook[1].name, facebook[2].code, facebook[2].salary, facebook[2].name);
    
    return 0;
}