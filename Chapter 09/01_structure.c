#include <stdio.h>
#include<string.h>

struct employee {
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee e1, e2;
    e1.code = 123100607;
    strcpy(e1.name, "Anuj");
    e1.salary = 15.9090;

    printf("%d %f %s", e1.code, e1.salary, e1.name);

    
    return 0;
}