/*
Read 20 elements in a vector A and build a new vector B with elements of A, but inverted, that is, the first element of A becomes the last element of B, and so on.

After creating vector B with the values, print the 2 vectors.

Use a constant to reference the size of the vector:

#define
const int
*/

#include <stdio.h>
#define TAM 5

int main(){

    int A[TAM], B[TAM];

    //inserindo valores do vetor A

    for(int i = 0; i < TAM; i++){
        
        printf("A[%d]:", i);
        scanf("%d", &A[i]);
    }

    // copiando e invertendo valores do vetor A para B

    for(int i = 0; i < TAM; i++){

        B[i] = A[TAM - i - 1];
    }

    // Imprimindo B

    for(int i = 0; i < TAM; i++){
        printf("%d \n", B[i]);
    }

    return 0;
}