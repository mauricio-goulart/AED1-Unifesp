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


    if (ultrapassagem >= 1 && ultrapassagem <= n)
    {
        int p = -1;
        int p2 = -1;

        for (int c = 0; c < n; c++)
        {
            if (corredores[c].num == ultrapassagem)
            {
                p = c;
            }

            if (corredores[c].num == ordem[c])
            {
                p2 = c;
            }
            

            
        }

        if (p != -1 && p2 != -1)
        {
            int troc = ordem[p];
            ordem[p] = ordem[p2];
            ordem[p2] = troc;
        }
        
        
    }

    for (int c = 0; c < 3 && c < n; c++)
    {
        for (int l = 0; l < n; l++)
        {
            if (corredores[l].num == ordem[c])
            {
                printf("%d %s\n", corredores[l].num, corredores[l].nome);
                break;
            }
            
        }
        
    }
    
    
    

    free(corredores);
    free(ordem);
    



}