#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char alunos[5][200];
    int idade[5];
    float notas[5][3];
    float medias[5];
    float soma = 0;
    int i, j;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o nome do %dº aluno: ", i + 1);
        gets(alunos[i]);

        printf("Idade do Aluno: ");
        scanf("%d", &idade[i]);

        for (j = 0; j < 3; j++)
        {
            printf("Digite a %dº nota do aluno: ", 1 + j);
            scanf("%f", &notas[i][j]);

            soma += notas[i][j];
            medias[i] = soma / j;
        }

        fflush(stdin);
        system("cls");
    }

    for (i = 0; i < 5; i++)
    {
        printf("\n\nNome do aluno: %s", alunos[i]);
        printf("\nIdade do aluno: %d", idade[i]);

        for (j = 0; j < 3; j++)
        {
            printf("\n%dº Nota do aluno: %.1f", i + 1, notas[i][j]);
            
        }

        printf("\n\nMedia do aluno: %.1f", medias[i]);
    }

    return 0;
}