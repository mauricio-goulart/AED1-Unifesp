#include <stdio.h>
/*
    Mostrando o endereço dos ponteiros, o endereço que eles guardam, e o conteudo.

      p2 = mostra o endereço que ele está guardando que no caso é o endereço de um ponteiro     
     *p2 = mostra o conteúdo que ele guarda que no caso é um endereço
    **p2 = mostra conteúdo do endereço que ele está guardando
*/
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