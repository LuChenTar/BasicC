#include <stdio.h>

void nextYear(int *y);

int main(void) {
    int thisYear;

    thisYear = 1981;
    nextYear(&thisYear);
    printf("address of thisYear is %p\n", &thisYear);
    printf("Year: %d\n", thisYear);

    return 0;
}

void nextYear(int *y) {
    printf("contents of y      is %p\n", y);
    printf("address of y      is %p\n", &y);
    *y = *y + 1;
}