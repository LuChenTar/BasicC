#include <stdio.h>

int g = 42;
int main(void)
{
    int total = 5;
    int *my_pointer = &total;

    *my_pointer = 10; // contains actual locatio of memory where the variable total is

    printf("The value is: %i\n", *my_pointer); // 10
    printf("The value is: %i\n", total); // 10

    int y = 1;
    int *x = NULL;
    x = &y;
    *x = *x + 1;
    printf("x points to address %p\n", x);
    printf("y = %d, *x = %d\n",y, *x );
    x = &g;
    *x = *x + 1;
    printf("x points to address %p\n", x);
    printf("g = %d, *x = %d\n",g, *x );

    /* code */
    return 0;
}

//1.When you create a pointer, you use a * to create it : int *my_pointer
//2.When you wish to see what is at a memory address of a pointer
// you use the * character for example : print printf("The value is: %i\n", *my_pointer);
//3.To change "what is at" a memory address, you use the star/asterisk syntax
//like this *my_pointer