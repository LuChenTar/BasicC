#include <stdio.h>
#define PI 3.14159
#define max(a,b) ((a) > (b)?(a):(b))
#define max_bad(a,b) (a > b? (a):(b))
int main(void) {
    printf("Hello World. pi = %f max(4,2) = %d\n", PI, max(4,2));
    printf("max(0xf,0xf & 0) = %d\n", PI, max(0xf,0xf & 0));
    printf("max_bad(0xf,0xf & 0) != %d\n", PI, max_bad(0xf,0xf & 0));
    return 0;
}