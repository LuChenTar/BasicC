#include "stdio.h"

int main(void) {
    char String[] = "Hello";

    char an_array_of_words[] = "One\0Two\0Three";

    char *my_pointer = an_array_of_words;

    printf("%s\n", (my_pointer + 8 + 2));

    return 0;
}