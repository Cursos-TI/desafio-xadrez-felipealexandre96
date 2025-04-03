#include <stdio.h>

int main(){
    //mover torre cinco casas para direita

    int t = 1, b = 1, r = 1;
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
    
    return 0;
}