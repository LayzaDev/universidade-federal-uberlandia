#include <stdio.h>

int main(){

    char jogador1, jogador2;

    printf("Jogador 1 escolha um char: R, P ou S \n");
    jogador1 = getchar();
    setbuf(stdin,NULL);

    printf("Jogador 2 escolha um char: R, P ou S \n");
    jogador2 = getchar();

    scanf("%c %c", &jogador1, &jogador2);

    if(jogador1 == "R" && jogador2 == "S" || jogador1 == "S" && jogador2 == "P" || jogador1 == "P" && jogador2 == "R"){

        printf("Jogador 1 é o vencedor! \n");

    } else if(jogador2 == "R" && jogador1 == "S" || jogador2 == "S" && jogador1 == "P" || jogador2 == "P" && jogador1 == "R"){

        printf("Jogador 2 é o vencedor! \n");
    }

    return 0;
}