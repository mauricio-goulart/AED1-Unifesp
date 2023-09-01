#include <stdio.h>
#include <stdlib.h>

struct ponto
{
    double x, y;
};


int main()
{
    struct ponto *p;

    p = (struct ponto*) malloc (sizeof(struct ponto));

    if (p == NULL)
    {
        printf("Não alocou");
    }

    

    p->x = 12.0;

    printf("%lf", p->x);  



    free (p);




}