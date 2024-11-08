#include <stdio.h>

int main()
{
    int M, N;
    printf("Entrer nbr des lignes des matrices : ");
    scanf("%d", &M);
    printf("Entrer nbr des colonnes des matrices : ");
    scanf("%d", &N);
    int A[M][N], B[M][N], C[M][N];

    for (int i = 0; i < M; i++) // saisir des elements
    {
        for (int j = 0; j < N; j++)
        {
            printf("Entrer l'element de la Matrice A de ligne %d, et de colonne %d : ", i, j);
            scanf("%d", &A[i][j]);
            printf("Entrer l'element de la Matrice B de ligne %d, et de colonne %d : ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < M; i++) // faire la sommation
    {
        for (int j = 0; j < N; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
        
    }

    printf("La Somme de deux Matrices est : \n"); // affichage la resultat
    for (int i = 0; i < M; i++)
    {
        printf("|");
        for (int j = 0; j < N; j++)
        {
            printf("%d\t", C[i][j]);
        }
        printf("|\n");
    }
    return 0;
}
