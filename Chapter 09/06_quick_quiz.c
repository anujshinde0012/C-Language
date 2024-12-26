#include <stdio.h>
#include <string.h>

struct employee {
    int code;
    float salary;
    char name[10];
};

void show(struct employee e){
   printf("Code of Employee :\n", e.code);
   printf("Name of Employee :\n", e.name);
   printf("Salary of Employee :\n", e.salary);

}
int main(){
    struct employee e1;
    e1.code = 101;
    e1.salary = 25000.50;
    strcpy(e1.name, "Anuj");
    
    printf("show e1 : %d %s %f", e1.code, e1.name, e1.salary);

    return 0;
}