#include <stdio.h>

struct endereco
{
    int numero;
};


struct Alunos
{
    int idade;
    int ra;
    struct endereco end;
    
}AlunosLP[3];




typedef struct 
{
    int a1;
    int a2;
}nome;





int main()
{

    for ( int c = 0; c < 3; c++)
    {
        printf("%i* Aluno\n", c + 1);
        printf("Idade: ");
        scanf("%i", &AlunosLP[c].idade);
        printf("RA: ");
        scanf("%i", &AlunosLP[c].ra);
        scanf("%i",&AlunosLP[c].end.numero);
    }
    


}