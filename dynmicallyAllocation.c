#include <stdio.h>
#include <stdlib.h> /*for alloc(), free()*/

int main(void)
{   
    int i, n, *A, si;
    scanf("%d", &n);
    A = (int *) malloc(n * sizeof(int));//allocates n elements
    for(i=0; i<n;i++)
        A[i]=i; //alt :*(A+i)=i;

    si = 0;
    for(i = 0; i<n;i++)
        si += A[i];
    printf("sum of 0 to %d = %d\n", n-1,si );

    free(A);//release storage allocated at address A
            //avoid memory leak
            //must not use *A after this!
    return 0;
}
