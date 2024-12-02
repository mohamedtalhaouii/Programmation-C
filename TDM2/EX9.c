// Nom : Mohamed Talhaoui
// Filière : IIA (S3) | 2024/2025
#include <stdio.h>

int main()
{
    int n, p, q;
    printf("Entrer nbr des lignes de la matrice A : ");
    scanf("%d", &n);
    printf("Entrer nbr des colonnes de la matrice A : ");
    scanf("%d", &p);

    printf("\nAlors Le nombre de ligne de la matrice B peut-être %d\n", p);
    printf("Entrer nbr des colonnes de la matrice B : ");
    scanf("%d", &q);

    int A[n][p], B[p][q], C[n][q];

    for (int i = 0; i < n; i++) // saisir des elements de Matrice A
    {
        for (int j = 0; j < p; j++)
        {
            printf("Entrer l'element de la Matrice A de ligne %d, et de colonne %d : ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < p; i++) // saisir des elements de Matrice B
    {
        for (int j = 0; j < q; j++)
        {
            printf("Entrer l'element de la Matrice B de ligne %d, et de colonne %d : ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < n; i++) // faire le produit
    {
        for (int j = 0; j < q; j++)
        {
            int S = 0;
            for (int k = 0; k < p; k++)
            {
                S = S + A[i][k] * B[k][j];
            }
            C[i][j] = S;
        }
        
    }

    printf("A * B = \n"); // affichage la resultat
    for (int i = 0; i < n; i++)
    {
        printf("|");
        for (int j = 0; j < q; j++)
        {
            printf("%d\t", C[i][j]);
        }
        printf("|\n");
    }
    return 0;
}
