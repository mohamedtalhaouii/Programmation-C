// Nom : Mohamed Talhaoui
// Filière : IIA (S3) | 2024/2025
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int N, M;
    int Somme=0;
    float Moyenne;

    printf("Entrer le nombre des lignes : ");
    scanf("%d", &N);
    printf("Entrer le nombre des colonnes : ");
    scanf("%d", &M);

    int *P = malloc( (N*M) * sizeof(int));
    // int P = (int *)malloc( (N*M) * sizeof(int));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("Entrer l'element de ligne %d, et colonne %d : ", i+1, j+1);
            scanf("%d", P + (i*N) + j );
            Somme += *(P + i*N + j);
        }
    }

    Moyenne = Somme / (N*M);
    printf("La moyenne des elements est : %.2f", Moyenne);
    free(P);

    return 0;
}