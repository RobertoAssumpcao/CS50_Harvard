#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    char frase[501], frase_cifrada[501];
    unsigned long n;

    if(argc == 2 && isdigit((int)*argv[1]))
    {
        printf("Digite a frase: ");
        scanf("%s", frase);

        n = strlen(frase);
        for (int i = 0; i < n; ++i)
        {
            frase_cifrada[i] = frase[i] + *argv[1];
        }
        printf("Frase cifrada fica: %s\n", frase_cifrada);
    }
    else
    {
        printf("Erro! É preciso digitar a flag correta.\n");
        return 1;
    }

    return 0;
}
