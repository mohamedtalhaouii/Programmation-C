// Nom : Mohamed Talhaoui
// Filière : IIA (S3) | 2024/2025
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char *P = (char *)malloc(sizeof(char));
    
    printf("Entrer la chaine de caractere : ");
    scanf("%s", P);

    char *T = malloc(strlen(P) * sizeof(char));

    strcpy(T, P);

    for (int i = 0; i < strlen(T); i++)
    {
        printf("%c", *(T+i));
    }
    free(P);
    free(T);

    return 0;
}