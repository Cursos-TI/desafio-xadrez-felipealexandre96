#include <stdio.h>

int main(){
    //mover torre cinco casas para direita

    int t = 1, b = 1, r = 1;
    int movimentocompleto = 1; //flag para controlar o movimento em "L"
    int opcao;
    while (t <= 5)
    {
        printf("Direita\n"); //imprime a direção do movimento
        t++;
    }

    //mover bispo cinco casas na diagonal
    do
    {
        printf("Cima, Direita\n"); //imprime a direção do movimento
        b++;
    } while (b <= 5);

    //mover rainha oito casas para esquerda
    for (int r; r <=7; r++)
    {
        printf("Esquerda\n"); //imprime a direção do movimento
    }
    printf("\n");

    //mover cavalo com loops
    printf("Escolha uma opção de movimento para o Cavalo\n");
    printf("1. cima, cima, direita\n");
    printf("2. direita, direita, cima\n");
    scanf("%d", &opcao);

    if(opcao == 1){
    while(movimentocompleto--) {
        for(int i = 0; i < 2; i++) {
            printf("Cima\n"); //imprime cima duas vezes
        }
        printf("Direita\n"); //imprime direita uma vez
    }
    } else {
         //mover cavalo com loops
    while(movimentocompleto--) {
        for(int i = 0; i < 2; i++) {
            printf("Direita\n"); //imprime direita duas vezes
        }
        printf("Cima\n"); //imprime cima uma vez
    }
    }

    
    return 0;
}