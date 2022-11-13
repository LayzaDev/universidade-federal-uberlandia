/* 
Read a vector of 10 elements. print thevector elements identifying whether each value read is even or odd. 
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;
    
    int vector[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for(i= 0; i <= 9; i++){

        if(vector[i] % 2 == 0){

            printf("vector[%d]: is pair \n", vector[i]);

        } 
        if(vector[i] % 2 == 1){

            printf("vector[%d]: is odd \n", vector[i]);
        }
    }

    return 0;

}