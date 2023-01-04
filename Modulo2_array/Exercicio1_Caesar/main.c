#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    char frase[801], frase_cifrada[801];
    unsigned long n;
    int flag;

    if (argc == 2 && isdigit((int)* argv[1]))
    {
        flag = atoi(argv[1]);

        printf("Digite a frase: ");
        scanf("%s", frase);

        n = strlen(frase);
        for (int i = 0; i < n; ++i)
        {
            frase_cifrada[i] = (int)frase[i] + flag;
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
