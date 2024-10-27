#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char palavra[15] = "banana";
    int tamanho = strlen(palavra);
    char secreta[tamanho];
    int tentativas = 6;
    char letra;
    
    for (int i = 0; i < tamanho; i++) {
        secreta[i] = '_';
    }
    secreta[tamanho] = '\0';

    printf("%s", secreta);
    printf("\n");
    do {
        printf("digite uma letra: ");
        scanf(" %c", &letra);
        getchar();
        for (int i = 0; i < tamanho; i++) {
            if (letra == palavra[i]) {
                secreta[i] = palavra[i];
            }
        } 
        printf("%s", secreta);
        printf("\n");

    }while (tentativas != 0);
}
