/*
Write an algorithm that reads a vector of N elements. After typing the last value, find and display the largest element.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int maior = 0;
    int n;
    
    printf("Tamanho do vetor: \n");
    scanf("%d", &n);

    int vetor[n];

    for(int i = 0; i < n; i++){
        printf("Digite um numero: \n");
        scanf("%d", &vetor[i]);
    }

    for(int j = 0; j < n; j++){
        if(vetor[j] > maior){
            maior = vetor[j];
        }
    }

    printf("O maior elemento eh: %d \n", maior);

    return 0;

}