#include <stdio.h>

int main()
{
    int M, N;
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
    printf("La Matrice M*N est : \n");
    for (int i = 0; i < M; i++)
    {
        printf("|");
        for (int j = 0; j < N; j++)
        {
            printf("%d\t", Matrice[i][j]);
        }
        printf("|\n");
    }
    printf("\nLa Matrice Transposee N*M est : \n");
    for (int i = 0; i < M; i++)
    {
        printf("|");
        for (int j = 0; j < N; j++)
        {
            printf("%d\t", Matrice[j][i]);
        }
        printf("|\n");
    }
    
    
    return 0;
}