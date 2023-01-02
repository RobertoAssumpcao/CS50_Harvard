/*
 * Implemente um programa que calcule o nível (representado a partir de uma série, como na escola)
 * aproximado necessário para compreender algum texto de acordo com o índice Coleman-Liau
 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    double grade = 0.0;
    unsigned int letters = 0, sentences = 0, words = 0;
    char text[251];
    unsigned long n = 0;

    printf("text: ");
    gets(text);


    n = strlen(text);
    for (int i = 0; i <= n; i++) {
        if (isalpha(text[i])) {
            letters++;
        }
    }

    grade = 0.0588 * letters - 0.296 * sentences - 15.8;

    printf("%s\n", text);
    printf("Letters %i\n", letters);
    printf("Grade %f\n", grade);

    return 0;
}
