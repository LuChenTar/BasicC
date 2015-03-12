//An OO apoarch to C
//gcc -Wall -c info.c
//gcc -Wall -o useInfo useInfo.c info.o
//./useInfo 

#include <stdio.h>
#include <stdlib.h>
#include "info.h"

struct info
{
    double mass;
    double height;
};
struct info *info_new(double m, double h)
{
    struct info *res;
    res = malloc(sizeof(struct info));
    res -> mass = m;
    res -> height = h;
    return res;
};
double info_get_bmi(struct info *o) {
    return o->height * o->mass;
}
void info_show(struct info *o) {
    printf("h: %f m: %f bmi: %f\n", o->height,
        o->mass, info_get_bmi(o));
}
void info_free(struct info *o) {
     free(o);
}