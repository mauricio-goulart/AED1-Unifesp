#include <stdio.h>
#include <string.h>
#include <ctype.h>

void Imprimir_menu()
{
    printf("------String------\n");
    printf("Digite alguma coisa: ");
}


int main()
{
    char palavra[256];
    int alfabeto[26] = {0};

    Imprimir_menu();
    fgets(palavra, sizeof(palavra), stdin);

    for (int c = 0; palavra[c] != '\0'; c++)
    {
        if (isalpha(palavra[c]))
        {
            alfabeto[tolower(palavra[c]) - 'a']++; 
        }
        
    }

    for (int c = 0; c < 26; c++)
    {
        if (alfabeto[c] > 0)
        {
            printf("%c: %i \n", 'a' + c, alfabeto[c]);
        }
        
    }
    
}

    
