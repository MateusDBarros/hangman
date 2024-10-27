#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(0));
    int random = rand() % 4;
    char palavras[15] = {"banana", "carro", "arvore", "hospital"};
    char palavra[] = palavras[random];
    int tamanho = strlen(palavra);
    char secreta[tamanho];
    int tentativas = 6;
    char letra;
    
    for (int i = 0; i < tamanho; i++) {
        secreta[i] = '_';
    }
    secreta[tamanho] = '\0';

    
    do {
        int check = 0;
        printf("%s\t Tentativas: %d\n", secreta, tentativas);
        printf("\n");
        printf("digite uma letra: ");
        scanf(" %c", &letra);
        getchar();
        for (int i = 0; i < tamanho; i++) {
            if (letra == palavra[i]) {
                secreta[i] = palavra[i];
                check = 1;
            }
        }
        if(check == 0) {
            printf("Letra nao esta na palavra!\n");
            tentativas--;
        }
        if (strcmp(palavra, secreta) == 0) {
            printf("%s\t Tentativas: %d\n", palavra, tentativas);
            printf("Voce venceu!\n");
            return 0;
        }
        
    }while (tentativas != 0);

    printf("\n");
    printf("Que pena, tentativas acabaram, mais sorte da proxima vez!\n");
    return 0;
}
