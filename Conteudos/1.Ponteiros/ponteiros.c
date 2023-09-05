#include <stdio.h>
/*
    Mostrando o endereço dos ponteiros, qual endereço eles armazenam, e qual o conteudo deles.
    &p = endereço do ponteiro
    p = endereço que o ponteiro mostra
    *p = conteudo do p (Se p nao tem conteudo da falha de segmentação)

*/
int main()
{
    int a = 10;
    int *p1 = NULL;
    int *p2;

    printf("&a = [%p] a = [%i]\n", &a, a);
    printf("&p1 = [%p] p1 = [%i]\n", &p1, p1);
    printf("&p2 = [%p] p2 = [%i]\n\n", &p2, p2);

    p1 = &a;
    p2 = p1;
    *p2 = 4;

    printf("&a = [%p] a = [%i]\n", &a, a);
    printf("&p1 = [%p] p1 = [%i] *p1 = [%i]\n", &p1, p1, *p1);
    printf("&p2 = [%p] p2 = [%i] *p2 = [%i]\n\n", &p2, p2, *p2);



    
    

    return 0;
}