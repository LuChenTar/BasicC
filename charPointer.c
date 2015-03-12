#include <stdio.h>

int main(void)
{
    char *our_text_string;//the pointer of char

    our_text_string = "Hello";//1.store the "Hello" string in a address  
                              //2.our_text_string is equal to the address of "Hello"

    printf("This string is %s\n", our_text_string);

    printf("Hello %s", "World");//1."World" has a memory address
                                //2.%s expect a address
    
    return 0;
}