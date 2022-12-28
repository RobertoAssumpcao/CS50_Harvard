/*
    um programa que primeiro pergunta ao usuário quanto dinheiro é devido e
    depois imprime o número mínimo de moedas com as quais essa mudança pode ser feita.
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    float dollar;
    int centavos;
    short qtd_moedas_usadas[4] = {0, 0, 0 ,0}, moeda[4] = {25,10,5,1}, i = 0, contador = 0;


    // Pegando troco e convertendo em centavos.
    do
    {
        printf("Digite o troco devido:\n");
        scanf("%f", &dollar);
    } while (dollar <= 0.0);
    
    centavos = dollar * 100;
    
    // Verificando qual e quantas moedas usar para devolver ao cliente.
    do
    {
        if(centavos - moeda[i] < 0)
        {
            i++;
        }
        else
        {
            centavos -= moeda[i];
            qtd_moedas_usadas[i]++;
            contador++;
        }

    } while (centavos >= 1);
    
    for (short j = 0; j < 4; j++)
    {
        if(qtd_moedas_usadas[j] > 0)
        {
            printf("Precisa usar %i moedas de $%ic \n", qtd_moedas_usadas[j], moeda[j]);
        }    
    }
    
    return 0;
}