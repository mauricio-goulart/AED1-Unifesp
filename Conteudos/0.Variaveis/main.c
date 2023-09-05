#include <stdio.h>
/*
    Mostra o endereço de memoria e os respectivos valor das variaveis. 
*/


int main()
{
    int a = 20;
    int b,c;

    printf("&a = [%p] *a = [%i]\n", &a, a);
    printf("&b = [%p] *b = [%i]\n", &b, b);
    printf("&c = [%p] *c = [%i]\n\n", &c, c);


    b = 10;
    c = a + b;

    printf("&a = [%p] *a = [%i]\n", &a, a);
    printf("&b = [%p] *b = [%i]\n", &b, b);
    printf("&c = [%p] *c = [%i]\n", &c, c);


}