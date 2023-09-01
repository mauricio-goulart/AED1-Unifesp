#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *n;
    char *c; /*ponteiro para o espaço alocado*/

    

    c = (char *)malloc(1); /*aloca um byte na memoria*/

    if (c == NULL)
    {
        printf("Não conseguiu alocar memoria \n");
        exit(1);
    }
    
    *c = 'd'; /*Carrego um valor na região de memoria alocada*/

    printf("%c\n", *c);

    free(1);

    printf("%i", *n);


    return 0;
}