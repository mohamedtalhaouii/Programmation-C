// Nom : Mohamed Talhaoui
// Filière : IIA (S3) | 2024/2025
#include <stdio.h>

int main()
{
    int M, N, sym=0;
    printf("Entrer nbr des lignes de la matrice : ");
    scanf("%d", &M);
    printf("Entrer nbr des colonnes de la matrice : ");
    scanf("%d", &N);
    int Matrice[M][N];

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("Entrer l'element de ligne %d, de colonne %d : ", i, j);
            scanf("%d", &Matrice[i][j]);
        }
    }

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (Matrice[i][j] == Matrice[j][i])
            {
                sym++;
            }
        }
    }
    if (sym == M*N)
    {
        printf("La Matrice est symetrique");
    } else {
        printf("La Matrice n'est pas symetrique");
    }
    
    
    return 0;
}
