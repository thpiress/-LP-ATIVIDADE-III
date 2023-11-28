#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char nomes[3];
    int i;
    int contatos[3];
    int opcao;

    do
    {

        printf("\n---Cadastro de Numero de Telefone---\n");
        printf("- Digite a Opção que deseja:\n ");
        printf("\n 1 - Registrar um número na agenda.\n");
        printf(" 2 - Mostrar números cadastrados e fechar o programa.\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            
            fflush(stdin);
            system("cls");
            printf("Digite o Nome da Pessoa: ");
            gets(nomes[i]);

            printf("Digite o Número que deseja registrar: ");
            gets(contatos[i]);
            break;
        case 2:
            printf("Nome do Contato: %s", nomes[i]);
            printf("Numero do Contato: %d", contatos[i]);

            break;
        default:
            printf("Opção Invalida!");
            break;
        }

    } while (opcao != 2);

    return 0;
}