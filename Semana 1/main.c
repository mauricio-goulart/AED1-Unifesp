#include <stdio.h>
#include <string.h>




int main()
{
    char palavra[10];

    printf("Digite uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);
    
    palavra[strlen(palavra)] = '\0';

    printf("%s ", palavra);


    for (int c = 0; c < 26; c++)
    {
        printf("%c: " , 'a' + c);
    }
    
}