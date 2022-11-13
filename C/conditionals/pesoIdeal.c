#include <stdio.h>
#include <stdlib.h>

int main(){

    float h, peso;
    char sexo;

    printf("Digite seu sexo: \n");
    scanf("%f", &sexo);

    printf("Digite sua altura: \n");
    scanf("%f", &h);

    if(sexo == "M" || sexo == "m"){

        printf("Seu peso ideal é: %.2f \n", peso);
        peso = (72.7 * h) - 58;

    } else if (sexo == "F" || sexo == "f"){

        peso = (62.1 * h) - 44.7;
        printf("Seu peso ideal é: %.2f \n", peso);

    } else {

        printf("Error!");
        
    }

    return 0;
}
