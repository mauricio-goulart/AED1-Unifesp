#include <stdio.h>
#include <stdlib.h>

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
    

    //alocação vetor dinamica(memoria heap)

    int *v_heap = (int *)malloc(5 * sizeof(int)); //inicia os elementos com lixo de memoria

    puts("Vetor Dinamico: \n");

    printf("&v_heap = [%p] | v_heap = [%p]\n", &v_heap, v_heap);

    for (int c = 0; c < 5; c++)
    {
        printf("&v_heap[%d] = [%p] | v_heap[%d] = [%d]\n", c, &v_heap[c], c, v_heap[c]);
    }
    





    return 0;


    


}