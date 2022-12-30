#include <stdio.h>
#include <stdlib.h>

int main() {
    long numero_cartao;
    short retorno_scanf = -1;
    char string_invalida;

    do {
        printf("Digite o numero do cartão:\n");
        retorno_scanf = scanf("%li", &numero_cartao);

        // Verifica se o usuario digitou uma cadeia de caracteres.
        do {
            string_invalida = getchar();
        } while (string_invalida != '\n');

    } while (numero_cartao <= 0 || retorno_scanf == 0);

    return 0;
}
