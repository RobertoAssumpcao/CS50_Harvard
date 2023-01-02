/*
 * Implemente um programa que calcule o nível (representado a partir de uma série, como na escola)
 * aproximado necessário para compreender algum texto de acordo com o índice Coleman-Liau
 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    float grade, letter, sentendes;
    unsigned int counter_letter = 0, counter_sentendes = 0, counter_words = 0;
    char text[551];
    unsigned long n = 0;

    printf("text: ");
    gets(text);


    n = strlen(text);

    if(n>=3)
    {
        counter_words++;
    }
    for (int i = 0; i <= n; i++)
    {
        if (isalpha(text[i]))
        {
            counter_letter++;
        }
        if(isspace(text[i]))
        {
            counter_words++;
        }

        counter_sentendes = (text[i] == '.' || text[i] == '!' || text[i] == '?') ? counter_sentendes + 1 : counter_sentendes;
    }

    letter = (float)counter_letter * 100 / (float) counter_words;
    sentendes = (float) counter_sentendes * 100 / (float) counter_words;

    grade = 0.0588 * letter - 0.296 * sentendes - 15.8;

    if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        if (grade <= 1)
        {
            printf("Before Grade 1\n");
        }
        else
        {
            printf("Grade %i\n", (int)grade);
        }
    }

    return 0;
}
