#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct _book
{
    char name[100];
    int pag;
    float price;
}Book;


Book * create_book(char *name, int numpages, float price)
{
    Book *bk = (Book *)calloc(1, sizeof(Book));


    strcpy(bk->name,name);

    bk->pag = numpages;

    bk->price = price;

    

    return bk;
}


void print_book(Book *book)
{
    printf("Name: [%s]\n",book->name);
    printf("Pages: [%d]\n", book->pag);
    printf("Price: [%.2f]\n", book->price);
}

void delete_book(Book **book)
{
    Book *aux = *book;
    free(aux);

    *book = NULL;

}

int main()
{
    Book *tw1 = create_book("The Witcher 1", 256, 49.90);

    print_book(tw1);

    delete_book(&tw1);

    

    printf("Livro == NULL [%d]\n", tw1 == NULL);
}