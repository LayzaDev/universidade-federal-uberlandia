#include <stdio.h>

// 1 - Crie 2 vetores, cada um com 5 posições, some os elementos do vetor A com o vetorB e insira os em um vetorC. Ao fim do programa printe todos o elementos do vetorC.
// 2 - Comente o codigo ENQUANTO desenvove o programa

int main (){

    // CRIANDO VETOR A, VETOR B E VETORC COM 5 POSIÇÕES
    int vetorA[5] = {3, 2, 5, 4, 8}; 
    int vetorB[5] = {6, 2, 8, 9, 3};
    int vetorC[5]; 

    // Somando vetorA e vetorB e inserindo-os no vetorC
    vetorC[0] = vetorA[0] + vetorB[0];
    vetorC[1] = vetorA[1] + vetorB[1];
    vetorC[2] = vetorA[2] + vetorB[2];
    vetorC[3] = vetorA[3] + vetorB[3];
    vetorC[4] = vetorA[4] + vetorB[4];

    // Printando os elementos do vetorC

    printf("Elemento do vetorC na posição 0: %d \n", vetorC[0]);
    printf("Elemento do vetorC na posição 1: %d \n", vetorC[1]);
    printf("Elemento do vetorC na posição 2: %d \n", vetorC[2]);
    printf("Elemento do vetorC na posição 3: %d \n", vetorC[3]);
    printf("Elemento do vetorC na posição 4: %d \n", vetorC[4]);

    
    return 0;

}