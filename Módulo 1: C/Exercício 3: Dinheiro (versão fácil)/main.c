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
    short qtd_moedas_usadas = 0, moedas_usadas[40], moeda[4] = {25,10,5,1}, i = 0;


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
            continue;
        }
        else
        {
            centavos = centavos - moeda[i];
            moedas_usadas[qtd_moedas_usadas] = moeda[i];
            qtd_moedas_usadas++;
        }

    } while (centavos >= 1);
    
    printf("centavos restantes: %i\n", centavos);
    printf("Foram usadas: %i\n", qtd_moedas_usadas);
    
    for (short j = 0; j < qtd_moedas_usadas; j++)
    {
        printf("As moedas usadas foram: %i\n", moedas_usadas[j]);
    }
    

    return 0;
}