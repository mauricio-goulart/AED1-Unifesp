#include <stdio.h>
#include <stdlib.h>
/*
    Programa que cria um vetor estatico e um dinamico.
*/

void somar_vetor_com_escalar(int *v, int n, int escalar)
{
    for (int c = 0; c < n; c++)
    {
        v[c] = v[c] + escalar;
    }
    
}

void print_vetor(int *v, int n)
{
    for (int c = 0; c < n; c++)
    {
        printf("&v[%d] = [%p] | v[%d] = [%d]\n", c, &v[c], c, v[c]);
    }
    
}

void deletar_vetor(int **v)
{
    free(*v);

    v = NULL;
}

int main()
{
    puts("Vetor estatico: ");
    int v_stack[5] = {0, 3, 4, 5, 6};

    print_vetor(v_stack, 5);

    somar_vetor_com_escalar(v_stack, 5, 10);

    puts("\nVetor dinamico: ");
    
    int *v_call = (int *)calloc(5,sizeof(int));

    for (int c = 0; c < 5; c++)
    {
        v_call[c] = c *100;
    }


    print_vetor(v_call, 5);

    somar_vetor_com_escalar(v_call, 5, 9);

    puts("");

    print_vetor(v_call, 5);

    deletar_vetor(&v_call);
    return 0;
}