// Nom : Mohamed Talhaoui
// Filière : IIA (S3) | 2024/2025
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int N, A;
    printf("\nEntrer Le Nombre des elements dans cette tableau : ");
    scanf("%d", &N);
    int T[N];
    int C[N];

    for (int i = 0; i < N ; i++)
    {
        printf("\nEntrer L'element %d : ", i+1);
        scanf("%d", &T[i]);        
    }
    for (int i = 0; i < N; i++)
    {
        int X = 1;
        for (int j = i + 1; j < N; j++)
        {
            if (T[i] == T[j])
            {
                X++;
                C[j] = -1; // Marquer les doublons
            }
        }
        if (X > 1 && C[i] != -1) // Si l'element est un doublon non marque
        {
            printf("\nL'element %d est apparait %d fois.\n", T[i], X);
        }
    }
    return 0;
}
