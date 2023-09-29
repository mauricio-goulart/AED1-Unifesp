#include <stdio.h>
#include <stdlib.h>

typedef struct _student
{
    char name[100];
    int age;
    int grade;


}Student;




int main()
{
    Student classmates[40]; //alocação estatica


    Student *classmatess = (Student *) calloc (40,sizeof(Student)); //alocação dinamica


    classmatess[1].age = 10;

    printf("%d\n",classmatess[1].age);


    free(classmatess);
}