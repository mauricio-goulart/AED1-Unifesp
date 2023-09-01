#include <stdio.h>

int main()
{
    int *v, a[10];

    v = a;

    a[0] = 0;

    printf("%i", a[0]);

    *v = 5;

    *(v + 1) = 3;

    printf("\n%i\n%i\n", a[0],a[1]);

}