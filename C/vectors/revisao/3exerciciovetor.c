#include <stdio.h>


// 1 - Crie um vetor de 8 posição SEM USAR LAÇO DE REPETIÇÃO, insira elementos apenas nos indices impares, ao fim do programa some esses elementos e tire a média. 
// 2 - Comente seu codigo explicando-o
int main (){

    int vetor[8]; // Criando o vetor com 8 posições

    vetor[1] = 4; // Inserindo elemento no indice 1 do vetor
    vetor[3] = 1;
    vetor[5] = 6;
    vetor[7] = 5;

    int soma = vetor[1] + vetor[3] + vetor[5] + vetor[7]; // Somando os elementos dos indices impares

    int media = soma/4; // Calculando a media da soma

    printf("%d \n", media); // printando a media

    return 0;
}