#include <stdio.h>
void movertorre(int casas){
    if (casas > 0) {
        printf("Direita\n");
        movertorre(casas - 1);
    }
}

void moverrainha(int casas){
    if(casas > 0) {
        printf("Esquerda\n");
        moverrainha(casas - 1);
    }
}

void moverbispo(int casas){
    if(casas > 0) {
        for(int cima = 1; cima <= 5; cima++) {
            for(int direita = 10; direita >= 10; direita--) {
                printf("Direita, ");
            }
            printf("Cima\n");
        }
    }
    
}

int main(){

     //mover torre cinco casas para direita
    movertorre(5);
    printf("\n");

    //mover bispo cinco casas na diagonal
    moverbispo(5);
    printf("\n");

    //mover rainha oito casas para esquerda
    moverrainha(8);
    printf("\n");

    //mover cavalo com loops
    for(int cimac = 0, direitac = 1; cimac < 2 && direitac == 1; cimac++, direitac--) {
        printf("Cima, Cima, Direita\n");
    }
   
    return 0;
}