#include <stdio.h>
#include <malloc.h>


//Struct dos corredores

typedef struct
{
    int num;
    char nome[20];
}corredor;


int main()
{
    int n;
    printf("Num carros: ");
    scanf("%d", &n);

    //Cria os corredores e aloca
    corredor *corredores = malloc(n * sizeof(corredor));

    //Ve se esta entre 3 e 1000
    while (n < 3 || n > 1000)
    {
        printf("Digite um número correto: ");
        scanf("%d", &n);
    }

    //Ler os dados

    for (int c = 0; c < n; c++)
    {
        printf("Nome e numero: ");
        scanf("%s %d",corredores[c].nome, &corredores[c].num);
    }


    //Ler ordem de chamada

    int *ordem = (int *)malloc(n * sizeof(int));


    printf("Digite ordem: ");
    for (int c = 0; c < n; c++)
    {
        scanf("%d", &ordem[c]);
    }

    //Fazer a ultrapassagem

    int ultrapassagem;

    printf("Digite a ultrapassagem: ");
    while (1)
    {
        scanf("%d" , &ultrapassagem);

        if (ultrapassagem == -1)
        {
            break;
        }
        
    }
    

    //validar a ultrapassagem








    

    free(corredores);
    



}