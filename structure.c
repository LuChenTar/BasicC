#include <stdio.h>
#include <string.h>
<<<<<<< HEAD
//conflict 2
=======
//cause some conflict
//use pointer to point to a structure
>>>>>>> fix21
int main(void) {
    struct employee {
        char name [40];//array member
        int code;//n int type member
        float salary;//float type memer      
    };
    struct employee person1, person2, person3;
    struct employee person4 = {"Jones", 387, 36000.00};
    struct employee *pEmployee;
    pEmployee = &person4;
    strcpy(person1.name, "jones");
    person1.code = 387;
    person1.salary = 36000.00;
    printf("person1: %s id=%d salary=%2.f\n", person1.name,
        person1.code, person1.salary);
    printf("size of struct  employee = %lu\n", sizeof(person1));
    printf("person4: %s id=%d salary=%2.f\n", person4.name, 
        person4.code, person4.salary);
    printf("address of person4: %p\n", &person4);
    printf("address of   .name: %p\n", &(person4.name));
    printf("address of   .code: %p\n", &(person4.code));
    printf("address of .salary: %p\n", &(person4.salary));
    printf("person4: %s id=%d salary=%2.f\n", pEmployee -> name, 
    pEmployee -> code, pEmployee -> salary);
    return 0;
}
