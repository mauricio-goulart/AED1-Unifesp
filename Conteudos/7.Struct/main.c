#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct _aluno
{
    char nome[100];
    int idade;
}Aluno;

int main()
{
    Aluno mauricio;

    strcpy(mauricio.nome, "Mauricio");
    mauricio.idade = 18;

    Aluno *maria = (Aluno *)calloc(1,sizeof(Aluno));
    strcpy(maria->nome, "Maria");

    maria->idade = 18;

    printf("Size aluno: [%lu]\n", sizeof(Aluno));
}