#include <stdio.h>

// 1- Crie um vetor com 10 posições SEM USAR LAÇO DE REPETIÇÃO e insira elementos apenas nos indices pares, no final, printe a primeira e a última posição do vetor. 

// 2 - Comente seu código explicando-o.

int main(){

    int vetor[10]; // Criando o vetor de 10 posições

    vetor[0] = 2; // Inserindo elemento no vetor na posição 0;
    vetor[2] = 3;
    vetor[4] = 18;
    vetor[6] = 10;
    vetor[8] = 4;

    printf("Primeira posicao: %d \n", vetor[0]); // Printando o elemento da primeira posição do vetor.

    printf("Ultima posicao: %d \n", vetor[9]); // Printando o elemento da ultima posição do vetor.

    return 0;
}