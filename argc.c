#include <stdio.h>
int main(int argc, char *argv[]) {
    int i;
    printf("number of arguments = %d\n", argc);
    for (i = 0;i<argc;i++) {
        printf("argument %i value : %s\n",i, argv[i] );
    }
    return 0;
}