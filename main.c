#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char palavra[15] = {"banana"};
    char adivinhada[15];
    int tentativas = 6;
    char letra;
    printf("Adivinhe qual a palavra!\n");
    do {
        printf("\nDigite uma letra: ");
        scanf("%c", &letra);
        for (int i = 0; i < 6; i++) {
            if (letra == palavra[i]) {
                adivinhada[i] = letra;
                printf("%s", adivinhada);
            }
            else
                adivinhada[i] = '_';
        }
    } while (tentativas != 0);
    
}