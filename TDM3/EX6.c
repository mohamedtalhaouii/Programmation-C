// Nom : Mohamed Talhaoui
// Filière : IIA (S3) | 2024/2025
#include <stdio.h>
#include <stdlib.h>

int Factorielle(int N)
{
    int F = 1;
    for (int i = 1; i <= N; i++)
    {
        F = F*i;
    }
    return F;
}

int main()
{
    int N;
    printf("Entrer Un Entier : ");
    scanf("%d", &N);

    printf("Le Factorielle %d! est : %d", N, Factorielle(N));
    return 0;
}