#include <stdio.h>

 main() {
    int A[6]; 
    int soma; 
    
    A[0] = 1;
    A[1] = 0;
    A[2] = 5;
    A[3] = -2;
    A[4] = -5;
    A[5] = 7;

    
    soma = A[0] + A[1] + A[5];
    printf("\nSoma: %d\n", soma);

    
    A[4] = 100;

    
    for(int i = 0; i < 6; i++) {
        printf("\n%d\n", A[i]);
    }

    
}