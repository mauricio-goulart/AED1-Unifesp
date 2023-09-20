#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **m = NULL; //n_rows = 2 | n_cols = 3

    m = (int **)calloc(2, sizeof(int *));
    
    for (int c = 0; c < 3; c++)
    {
        m[c] = (int *)calloc(3, sizeof(int));
    }


    int count = 0;

    for (int l = 0; l < 2; l++)
    {
        printf("&m[%d] = [%p] | m[%d] = [%p]\n", l, &m[l], l, m[l]);

        for (int c = 0; c < 3; c++)
        {
            m[l][c] = count++;

            printf("&m[%d][%d] = [%p] | m[%d][%d] = [%d]\n", l, c, &m[l][c], l, c, m[l][c]);
        }

        puts("");
        
    }
    
    



}