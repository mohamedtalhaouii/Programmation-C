// Nom : Mohamed Talhaoui
// Filière : IIA (S3) | 2024/2025
#include <stdio.h>

int main()
{
    int T[5][5];
    int *P = (int *)T;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("entrer l'element de colonne %d, de ligne %d : ", i+1, j+1);
            scanf("%d", P + i * 5 + j);
        }
    }

    printf("les elements de tableau sont : \n");

    for (int i = 0; i < 5; i++)
    {
        printf("|");
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t", *(P + i * 5 + j));
        }
        printf("|\n");
    }

    return 0;
}