/*
    um programa que primeiro pergunta ao usuário quanto dinheiro é devido e
    depois imprime o número mínimo de moedas com as quais essa mudança pode ser feita.
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    float troco;
    int troco_arredondado;
    do
    {
        printf("Digite o troco devido:\n");
        scanf("%f", &troco);
    } while (troco <= 0.0);
    
    troco_arredondado = round(troco);

    return 0;
}