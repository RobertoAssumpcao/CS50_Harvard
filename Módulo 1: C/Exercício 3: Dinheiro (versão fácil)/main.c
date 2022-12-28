/*
    um programa que primeiro pergunta ao usuário quanto dinheiro é devido e
    depois imprime o número mínimo de moedas com as quais essa mudança pode ser feita.
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    float dollar;
    int centavos;
    short qtd_moedas_usadas[4] = {0, 0, 0 ,0}, moeda[4] = {25,10,5,1}, i = 0;


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
        }

    } while (centavos >= 1);
    
    for (i = 0; i < 4; i++)
    {
        if(qtd_moedas_usadas[i] > 0)
        {
            printf("Precisa usar %i moedas de $%ic \n", qtd_moedas_usadas[i], moeda[i]);
        }    
    }
    
    return 0;
}