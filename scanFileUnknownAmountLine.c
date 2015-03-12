#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int i, j, m , n = 0,c;
    bool sumToHundred = false;

    FILE *fp = fopen(argv[1], "r");

    while((c = (int) fgetc(fp) != EOF)) {
        if(c == '\n')
            n++;
    }

    int *A = malloc(n*sizeof(int));
    n=0;
    rewind(fp);

    while((fscanf(fp, "%d", &A[n]) != EOF)){
        printf("%d\n", n);
        n++;
    }
    fclose(fp);


    for(i = 0;i < (n - 2);i++) {
        for(j = i + 1; j < (n - 1); j++) {
            for (m = j + 1;m < n;m++){
                if(A[i] + A[j] + A[m] == 100) {
                    sumToHundred = true;
                }
            }
        }
    }
    if(sumToHundred){
        printf("yes\n");
    }else{
        printf("no\n");
    }

    free(A);
    return 0;
    
}