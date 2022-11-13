/*
Write an algorithm to obtain the sum of two matrices A and B, storing the result in a third matrix C.
*/

#include <stdio.h>

int main(){

    int matrizA[2][3];
    int matrizB[2][3];
    int matrizC[2][3];
    int nro;

    printf("Informe os valores da matriz A: \n");

    for(int coluna = 0; coluna < 3; coluna++){

        for(int linha = 0; linha < 2; linha++){

            printf("Informe um nro para matriz A \n");
            scanf("%d", &nro);
            
            matrizA[linha][coluna] = nro;
        } 
    }

    for(int coluna = 0; coluna < 3; coluna++){

        for(int linha = 0; linha < 2; linha++){

            printf("Informe um nro para matriz B \n");
            scanf("%d", &nro);
            
            matrizB[linha][coluna] = nro;       
        }  
    }

    for(int coluna = 0; coluna < 3; coluna++){
        for(int linha = 0; linha < 2; linha++){

            matrizC[linha][coluna] = matrizA[linha][coluna] + matrizB[linha][coluna];
        }
    }

    for(int coluna = 0; coluna < 3; coluna++){
        for(int linha = 0; linha < 2; linha++){
            
            printf("Resultado da matriz C: %d \n", matrizC[linha][coluna]);
        }
    }

    return 0;
    
}