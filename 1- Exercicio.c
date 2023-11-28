#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // delcarando variaveis:

    char nomes[5][200];
    int idade[5];
    float peso[5];
    float altura[5];
    int i;
    int maiorIda = 0;
    int menorIda = 0;
    float maiorPes = 0;
    float menorPes = 0;
    float maiorAlt = 0;
    float menorAlt = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o nome da %dº pessoa: ", i + 1);
        gets(nomes[i]);

        printf("Digite a idade: ");
        scanf("%d", &idade[i]);

        printf("Digite o peso: ");
        scanf("%f", &peso[i]);

        printf("Digite a altura: ");
        scanf("%f", &altura[i]);

        fflush(stdin);
        system("cls");
    }

    // Resultado:

    for (i = 0; i < 5; i++)
    {
        printf("\nNome da %dº pessoa: %s ", i + 1, nomes[i]);

        printf("\nIdade: %d", idade[i]);

        printf("\nPeso: %.1f", peso[i]);

        printf("\nAltura: %.1f", altura[i]);

    }

        printf("Maior idade:\n %d", maiorIda);
        printf("Menor idade:\n %d", menorIda);
        printf("Maior altura:\n %d", maiorAlt);
        printf("Menor altura:\n %d", menorAlt);
        printf("Maior peso:\n %d", maiorPes);
        printf("Menor peso:\n %d", menorPes);

    return 0;
}