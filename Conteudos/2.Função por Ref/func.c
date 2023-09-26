#include <stdio.h>
/*
    Passagem por referencia na função.

    Na função eu estou alterando algo que está na main
*/

void cont(int a, int b, int *soma, int *sub)
{
    *soma = a + b;
    *sub = a -b;
}


int main()
{
    int a = 10;
    int b = 20;
    int soma;
    int sub;

    cont(a, b, &soma, &sub);

    printf("a = [%d]\nb = [%d]\na + b = [%d]\na - b = [%d]\n", a,b,soma,sub);
}