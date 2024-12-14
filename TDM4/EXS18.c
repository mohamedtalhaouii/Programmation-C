#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char *P = (char *)malloc(sizeof(char));
    
    printf("Entrer la chaine de caractere : ");
    scanf("%s", P);

    for (int i = 0; i < strlen(P); i++)
    {
        printf("%c", *(P+i));
    }
    free(P);

    return 0;
}