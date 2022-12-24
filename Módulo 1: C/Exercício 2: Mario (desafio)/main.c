/*
No início de World 1-1 em Super Mario Brothers, da Nintendo, Mario deve pular pirâmides de blocos adjacentes
Vamos recriar essas pirâmides em C, ainda que em texto, usando hashes ( # ) para tijolos, a la a seguir.
Cada hash é um pouco mais alto do que largo, então as pirâmides em si também são mais altas do que largas.
*/

#include <stdio.h>

void criar_bloco(void)
{
    printf("#");
}

void criar_espaco(void)
{
    printf(" ");
}

int main(void)
{
    short altura;

    // Tratanto valores menores que 1 e maior que 8.
    do
    {
        printf("Digite o tamanho da altura (Entre 1 e 8)\n");
        scanf("%hd", &altura);
    } while (altura < 1 || altura > 8);

    for (short i = 0; i < altura; i++)
    {
        for (short k = altura - 1; k > i; k--)
        {
            criar_espaco();
        }

        for (short j = 0; j <= i; j++)
        {
            criar_bloco();
        }

        criar_espaco();
        
        for (short j = 0; j <= i; j++)
        {
            criar_bloco();
        }

        printf("\n");
    }

    return 0;
}