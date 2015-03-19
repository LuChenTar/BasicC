//Author: Lu Chen
//Date: 19 Mar 2015
//Descrption:  calculating the number words
//             define a word as a sequence of 1 or more non-white spaces

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

 int main(void) {
    int length=0, i=0;
    char c;
    bool inside = false;
    while((c=getchar()) != EOF) {
        if(c == ' ' || c=='\t' || c == '\n') {
            inside=false;
        }else {
            if(!inside){
                inside = true;
                length++;
            }
        }
    }
    printf("\n%d\n", length);
    return 0;
 }