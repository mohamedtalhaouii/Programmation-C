// Nom : Mohamed Talhaoui
// Filière : IIA (S3) | 2024/2025
#include <stdio.h>
#include <string.h>

int main()
{
    char C[100];
    int len;
    printf("Entrer Un chaine : ");
    gets(C);

    len = strlen(C);
    printf("La longeur de cette chaine de caractere est %d", len);
    return 0;
}