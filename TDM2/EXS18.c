// Nom : Mohamed Talhaoui
// Filière : IIA (S3) | 2024/2025
#include <stdio.h>
#include <string.h>


int main()
{
    char A[]= "Mohamed";
    char B[] = "Talhaoui ";

    printf("La chaine Source : ");
    puts(A);
    printf("La chaine destination : ");
    puts(B);

    strncat(B, A, 2);

    printf("L'autre chaine à concatener les premiers 2 caractere est : ");
    puts(B);

    return 0;
}
