#include <stdio.h>
#include <stdlib.h>

#include "aluno.h"

void criaFila(A *cabeca) {

    cabeca->prox = NULL;
}

A *verificaFila(A *cabeca){

    if (cabeca == NULL) {

        printf("\nFila vazia!");
        return NULL;
    }

    return cabeca;
}

void insereFila(A *cabeca) {

    A *novo;

    novo = malloc(sizeof(A));

    printf("\n");

    printf("Informe o NOME do aluno: ");
    scanf("%s", &novo->nome);

    printf("Informe a NOTA 1: ");
    scanf("%i", &novo->nota1);

    printf("Informe a NOTA 2: ");
    scanf("%i", &novo->nota2);

    printf("Informe o PERIODO do aluno: ");
    scanf("%s", &novo->periodo);

    printf("Informe o RA do aluno: ");
    scanf("%i", &novo->ra);

    novo->prox = NULL;
    
    if(cabeca->prox == NULL) {
        
        cabeca->prox = novo;
    }
    else {
        
        while(cabeca->prox != NULL) {

            cabeca = cabeca->prox;
        }

        cabeca->prox = novo;
    }
}

void mostraMedias(A *cabeca){

    while(cabeca->prox != NULL){

        float media;

        media = (cabeca->prox->nota1 + cabeca->prox->nota2) / 2;

        if(media >= 7) {

            printf("Aluno: %s (RA: %i) (PERIODO: %s) - APROVADO - MEDIA = %0.2f\n", cabeca->prox->nome, cabeca->prox->ra, cabeca->prox->periodo, media);
        }
        else if(media >= 2) {

            printf("Aluno: %s (RA: %i) (PERIODO: %s) - EM EXAME - MEDIA = %0.2f\n", cabeca->prox->nome, cabeca->prox->ra, cabeca->prox->periodo, media);
        }
        else {

            printf("Aluno: %s (RA: %i) (PERIODO: %s) - REPROVADO - MEDIA = %0.2f\n", cabeca->prox->nome, cabeca->prox->ra, cabeca->prox->periodo, media);
        }

        cabeca = cabeca->prox;
    }
}

void removeFila(A *cabeca) {

    cabeca->prox = cabeca->prox->prox;
}

void menu(A *cabeca) {

    int opcao;

    do {
        printf("==========## MENU - MANIPULACAO DE FILA ##==========\n");
        printf("1 - Registrar Aluno\n");
        printf("2 - Mostrar Medias\n");
        printf("3 - Remover primeiro registro\n");
        printf("4 - Sair\n");

        printf("Escolha uma opcao: ");
        scanf("%i", &opcao);

        switch (opcao) {

            case 1:
                system("cls");
                insereFila(cabeca);
                system("cls");
                break;

            case 2:
                system("cls");
                mostraMedias(cabeca);
                printf("\n");
                break;

            case 3:
                system("cls");
                removeFila(cabeca);
                break;

            case 4:
                printf("\nPrograma finalizado!\n");
                break;

            default:
                system("cls");
                printf("Escolha uma opcao valida!\n");
            }
    } while (opcao != 4);
}
