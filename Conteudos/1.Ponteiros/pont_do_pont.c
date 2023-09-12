#include <stdio.h>

int main()
{
    int a = 10;
    int *p1 = &a;
    int **p2 = &p1;

    printf("&a = [%p] a = [%i]\n", &a, a);
    printf("&p1 = [%p] p1 = [%p] *p1 = [%i]\n", &p1, p1, *p1);
    printf("&p2 = [%p] p2 = [%p] *p2 = [%p] **p2 = [%i]\n\n", &p2, p2, *p2, **p2);

    **p2 = 99;

    printf("&a = [%p] a = [%i]\n", &a, a);
    printf("&p1 = [%p] p1 = [%p] *p1 = [%i]\n", &p1, p1, *p1);
    printf("&p2 = [%p] p2 = [%p] *p2 = [%p] **p2 = [%i]\n\n", &p2, p2, *p2, **p2);
}