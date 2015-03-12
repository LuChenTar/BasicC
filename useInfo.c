#include <stdio.h>
#include "info.h"

int main(void) {
    struct info *person;
    person = info_new(80.0, 173.0);
    info_show(person);
    printf("BMI is %f\n", info_get_bmi(person));
    info_free(person);
    return 0;
}