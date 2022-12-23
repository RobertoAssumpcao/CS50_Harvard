/*
Vamos recriar essa pirâmide em C, ainda que em texto, usando hashes ( # ) para tijolos, 
como visto a seguir. Cada hash é um pouco mais alto do que largo, então a pirâmide em si também é mais alta do que larga.
              #
            ##
          ###
        ####
      #####
    ######
 #######
########
*/

#include <stdio.h>

void criar_bloco(void)
{
    printf("#");
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
        for (short j = 0; j <= i; j++)
        {
            criar_bloco();
        }
        printf("\n");
    }
       

    return 0;
}