// Nom : Mohamed Talhaoui
// Filière : IIA (S3) | 2024/2025
#include <stdio.h>
#include <stdlib.h>

int TableMultiplucation(int M, int i)
{
    return M*i;
}

int main()
{
    int nbr;
    printf("Entrer Un Entier : ");
    scanf("%d", &nbr);

    printf("Le table de multiplication est :\n");
    for (int i = 1; i <= 9; i++)
    {
        printf("%d × %d = %d\n", nbr, i, TableMultiplucation(nbr, i));
    }
    return 0;
}