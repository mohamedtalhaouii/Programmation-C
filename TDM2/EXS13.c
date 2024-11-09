#include <stdio.h>

int main()
{
    int N;
    printf("\nEntrer nbr des lignes de la matrice Carre :");
    scanf("%d", &N);
    printf("\nAlors le nbr des colonnes de la matrice est %d\n", N);
    int Matrice[N][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("Entrer l'element de ligne %d, de colonne %d : ", i, j);
            scanf("%d", &Matrice[i][j]);
        }
    }

    printf("\nLe diagonal de la Matrice est : \n");
    for (int i = 0; i < N; i++)
    {
        printf("|");
        for (int j = 0; j < N; j++)
        {
            if (i == j){
            printf("(%d)\t", Matrice[i][j]); // on fait () pour extrait le diagonal
            } else {
                printf("%d\t", Matrice[i][j]);
            }
        }
        printf("|\n");
    }
    return 0;
}
