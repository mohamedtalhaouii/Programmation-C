// Nom : Mohamed Talhaoui
// Filière : IIA (S3) | 2024/2025
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, S=0;
    while (N != 0)
    {
        printf("\nPour arrete tapez 0 !!\n");
        printf("Entrer un nombre : ");
        scanf("%d", &N);
        S+=N;
    }
    printf("La somme des nombres saisis est : %d", S);
    return 0;
}
