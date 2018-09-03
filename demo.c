#include "rowidx.h"
#include <stdio.h>  // printf
#include <stddef.h>

int main(){
    double x[] = {1,2,3,4,5,6};
    size_t n = 3;
    size_t m = 2;
    
    printf("\n%s\n", "Row-Major Order Matrices in C:");
    for(size_t i=0; i<n; i++){
        for(size_t j=0; j<m; j++){
            printf("%4.1f", x[rowidx(i,j,m)]);
        }
        printf("\n");
    }

    printf("\n%s\n", "Transpose the Matrix -- Switch the i- and j-loop");
    for(size_t j=0; j<m; j++){
        for(size_t i=0; i<n; i++){
            printf("%4.1f", x[rowidx(i,j,m)]);
        }
        printf("\n");
    }

    printf("\n%s\n", "Use the Macro ROWIDX:");
    for(size_t i=0; i<n; i++){
        for(size_t j=0; j<m; j++){
            printf("%4.1f", x[ROWIDX(i,j,m)]);
        }
        printf("\n");
    }

}
