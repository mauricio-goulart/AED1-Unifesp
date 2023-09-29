#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct _book
{
    char name[100];
    int pag;
    float price;
}Book;


typedef struct _student
{
    char name[100];
    int age;
    Book *favorite_book;

}Student;





Book *create_book(char *name, int numpages, float price)
{
    Book *bk = (Book *)calloc(1, sizeof(Book));


    strcpy(bk->name,name);

    bk->pag = numpages;

    bk->price = price;

    

    return bk;
}

Book *copy_book(Book *book)
{
    return create_book(book->name,book->pag,book->price);
}

void print_book(Book *book)
{
    printf("Name: [%s]\n",book->name);
    printf("Pages: [%d]\n", book->pag);
    printf("Price: [%.2f]\n", book->price);
}

void destroy_book(Book **book)
{
    free(*book);

    *book = NULL;
}

Student *create_student(char *name, int age, Book *book)
{
    Student *student = (Student *)calloc(1,sizeof(Student));

    strcpy(student->name,name);
    student->age = age;
    student->favorite_book = copy_book(book);

    return student;

}

void print_student(Student *student)
{
    printf("Name: [%s]\n", student->name);
    printf("Age: [%d]\n", student->age);
    puts("");
    printf("Favorite Book: %s\n", student->favorite_book->name);
}

void destroy_student(Student **student)
{
    destroy_book(&(*student)-> favorite_book);

    free(*student);
    *student = NULL;

}

int main()
{
    Book *tw1 = create_book("The Witcher 1", 256, 49.90);

    print_book(tw1);

    printf("%p\n",*tw1);

    Student *Mauricio = create_student("Mauricio", 18, tw1);
    
    print_student(Mauricio);

    destroy_book(&tw1);

    destroy_student(&Mauricio);

    printf("Livro == NULL [%d]\n", tw1 == NULL);
}