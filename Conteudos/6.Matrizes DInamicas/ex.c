#include <stdio.h>
#include <stdlib.h>

int ** crate_int_matrix(int nrows, int ncols)
{
    int **m = (int **)calloc(nrows, sizeof(int *)); //aloca as linhas da matriz

    for(int c = 0; c < ncols; c++)
    {
        m[c] = (int *)calloc(ncols, sizeof(int));
    }

    return m;

}

void print_matrix(int **m, int nrows, int ncols)
{
    for (int l = 0; l < nrows; l++)
    {
        for (int c = 0; c < ncols; c++)
        {
            printf("[%d]", m[l][c]);
        }

        puts("");
        
    }
    

}

void add_scalar(int **m, int nrows, int ncols, int scalar)
{
    int count = scalar;


    for (int l = 0; l < nrows; l++)
    {
        for (int c = 0; c < ncols; c++)
        {
            m[l][c] = count;

            count = count + scalar;
        }
        
    }
    
}


void destroy_matrix(int* **m, int nrows, int ncols)
{
    int **aux = *m;

    for (int l = 0; l < nrows; l++)
    {
        free(aux[l]);
    }

    free(aux);
    *m = NULL;
    
}



int main()
{
    int n_rows, n_cols, scalar;

    printf("\tMATRIZ\n\n");

    printf("Linhas: ");
    scanf("%d", &n_rows);

    printf("Colunas: ");
    scanf("%d", &n_cols);

    int **m = crate_int_matrix(n_rows, n_cols);

    printf("Escalar: ");
    scanf("%d", &scalar);

    add_scalar(m, n_rows, n_cols, scalar);


    puts("");
    print_matrix(m, n_rows,n_cols);

    printf("\n&m = [%p]\nm = [%p]\n*m = [%p]\n**m = [%d]\n", &m, m, *m, **m);

    destroy_matrix(&m, n_rows, n_cols);

    printf("m is NULL? = %d\n", m == NULL);



}