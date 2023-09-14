#include <stdio.h>

int main()
{
    int v[5] = {1, 2, 3, 4, 5};

    printf("&v = [%p], v = [%p]\n\n", &v, v);

    printf("Forma comum: \n");

    for (int c = 0; c < 5; c++)
    {
        printf("&v[%d] = [%p] | v[%d] = [%d]\n", c, &v[c], c, v[c]);
    }

    printf("\n\nUsando aritmetica de ponteiros: \n");

    for (int c = 0; c < 5; c++)
    {
        printf("(v + %d) = [%p] | *(v + %d) = [%d]\n", c, (v + c), c,*(v + c));
    }

    return 0;
    
    




}