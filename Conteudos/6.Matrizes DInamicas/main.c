#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[2][3] = {{1,2,3}, {4,5,6}};
    

    printf("&m = [%p] | m = [%p]\n\n", &m, m);
    
    for (int l = 0; l < 2; l++)
    {
        for (int c = 0; c < 3 ; c++)
        {
            printf("&Matriz[%d][%d] = %p | Matriz[%d][%d] = %d\n", l, c , &m[l][c], l, c, m[l][c]);
        }

        puts("");
        
    }
    
}