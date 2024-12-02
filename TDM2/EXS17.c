// Nom : Mohamed Talhaoui
// Filière : IIA (S3) | 2024/2025
#include <stdio.h>
#include <string.h>


int main()
{
    char A[100];
    char B[100];
    printf("Entrer Un chaine A : ");
    gets(A);

    strncpy(B, A, 3);

    printf("L'autre chaine à copie les premiers 3 caractere est : ");
    puts(B);

    return 0;
}
