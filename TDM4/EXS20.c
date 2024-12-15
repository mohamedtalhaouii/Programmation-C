// Nom : Mohamed Talhaoui
// Filière : IIA (S3) | 2024/2025
#include <stdio.h>
#include <stdlib.h>

int max(int *tableau, int taille){
    int max = *tableau;
    for (int i = 0; i < taille; i++)
    {
        if (max < *(tableau + i))
        {
            max = *(tableau + i);
        }
    }
    return max;
}

int main()
{
    int N;
    printf("Entrer la taille de tableau : ");
    scanf("%d", &N);

    int *P = malloc(N * sizeof(int));

    for (int i = 0; i < N; i++)
    {
        printf("Entrer l'element %d : ", i+1);
        scanf("%d", P + i);
    }
    
    printf("%d", max(P, N));

    free(P);
    return 0;
}