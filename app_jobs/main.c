#include "app_jobs.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int option;
    int option_analytics;
    char nome[101];
    int numero;

    do
    {
        system("cls");
        printf("--JOBS SEARCH ENGINE--\n");
        printf("(0) Atualizar arquivo fonte\n");
        /* O nome na verdade � busca r�pida, e � feito
         de acordo com �ndice de determinado registro
         em um arquivo que o usu�rio quer consultar.*/
        printf("(1) Busca Rapida\n");
        /* Acredito que o melhor nome seria busca com filtros,
           onde sugerimos determinados filtros para classicaar
           as vagas de emprego */
        printf("(2) Busca por Filtro\n");
        printf("(3) Analise estatistica\n");
        scanf("%d", &option);
    }
    while(option!=0&&option!=1&&option!=2&&option!=3);

    switch(option)
    {
    case 0:
        printf("atualizando arquivo fonte...\n");
        FILE *arquivo_p = fopen("dataset.csv", "r");
        if (arquivo_p == NULL) {
            printf("Erro ao abrir o arquivo");
        return 1;
         while (fscanf(arquivo_p, "%100[^,],%d", nome, &numero) == 2) {
        // Processa os dados lidos
        printf("Nome: %s, N�mero: %d\n", nome, numero);
        }
    }
    case 1:
        printf("--BUSCA LIVRE--");
        break;
    case 2:
        printf("--BUSCA POR PERFIL--");
        break;
    // An�lise estat�stica s� faz sentido depois de realizar uma Busca!
    /*
    case 3:
        do
        {
            system("cls");
            printf("--ANALISE ESTATISTICA--\n");
            printf("(1) Tabela de medias\n");
            printf("(2) Tabela de frequencia\n");
            scanf("%d", &option_analytics);
        }
        while(option_analytics!=1&&option_analytics!=2);

        break;
    */
    default:
        printf("default");
        break;
    }

    return 0;
}
