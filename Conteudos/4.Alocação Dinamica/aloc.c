#include <stdio.h>
#include <stdlib.h>
/*
    Memoria Stack = memoria ja alocada estaticamente, porem tem espaço limitado
    ex: 
    int n;

    Memoria Heap = memoria alocada dinamicamente, espaço maior
    ex:
    int *n = (int *)malloc(sizeof(int));

    free(n);


*/


int main()
{
    //alocação vetor estático (memoria Stack)

    int v_stack[5] = {0, 10, 20, 30, 40};


    puts("Vetor Estatatico:\n");
    printf("&v_stack = [%p] | v_stack = [%p]\n\n", &v_stack, v_stack);

    for (int c = 0; c < 5; c++)
    {
        printf("&v_stack[%d] = [%p] | v_stack[%d] = {%d}\n", c, &v_stack[c], c, v_stack[c]);
    }

    puts("\n");
    

    //alocação vetor dinamica com malloc (memoria heap)

    int *v_heap = (int *)malloc(5 * sizeof(int)); //inicia os elementos com lixo de memoria.

    puts("Vetor Dinamico: \n");

    printf("&v_heap = [%p] | v_heap = [%p]\n", &v_heap, v_heap);

    for (int c = 0; c < 5; c++)
    {
        printf("&v_heap[%d] = [%p] | v_heap[%d] = [%d]\n", c, &v_heap[c], c, v_heap[c]);
    }
    


    //alocação vetor dinamica com calloc, garante que todos itens do vetor tenha o valor 0. (memoria heap)

    int *v_cal = (int *)malloc(5 * sizeof(int)); //inicia os elementos com lixo de memoria

    puts("\nVetor Dinamico calloc: \n");

    printf("&v_call = [%p] | v_call = [%p]\n", &v_cal, v_cal);

    for (int c = 0; c < 5; c++)
    {
        printf("&v_call[%d] = [%p] | v_call[%d] = [%d]\n", c, &v_cal[c], c, v_cal[c]);
    }
    



    free(v_heap);
    free(v_cal);

    return 0 ;


    


}