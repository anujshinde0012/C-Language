#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[10];
} Emp;

int main()
{
    // typedef int anuj;
    // anuj a = 67; // ‘typedef’ keyword to create an alias name for data types in C.
    // printf("The value of a is %d", a);

    // typedef struct employee Emp;
    Emp e1;
    Emp*ptr1 = &e1;
    e1.code = 101;
    e1.salary = 25000.50;
    strcpy(e1.name, "Anuj");

    printf("show e1 : %d %s %f\n", e1.code, e1.name, e1.salary);
    printf("show e1 : %d %s %f", ptr1->code, ptr1->name, ptr1->salary);


    return 0;
}