/*
The sorting of values ​​in a vector can be performed by comparing each element with all the others that have not yet been sorted by performing exchange when the element
under analysis is greater than the other element.

1) Write an algorithm to sort a vector.
2) Compare the vector element with its successor.
3) If the current element is greater than the successor
element, then the successor element will be smaller;
2) For each element already sorted, print the element.
3) Run in debug mode to evaluate the algorithm.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int vetor[5]= {4, 2, 5, 1, 3};

    for(int i = 0; i < 4; i++){
        
        int menor;
        int j; 

        for(j = i + 1 ; j < 4; j++ ){

            if(vetor[i] > vetor[j]){

                menor = vetor[j];

                vetor[j] = vetor[i];
                
                vetor[i] = menor;

            }
        }

        printf("%d \n", vetor[i]);
    }

    return 0;
}