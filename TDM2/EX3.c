// Nom : Mohamed Talhaoui
// Filière : IIA (S3) | 2024/2025
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // la taille de tableau
    int N, M, S=0;
    printf("\nEntrer Le Nombre des elements dans cette tableau : ");
    scanf("%d", &N);
    int T[N];

    // les elements de tableau
    for (int i = 0; i < N ; i++)
    {
        printf("\nEntrer L'element %d : ", i+1);
        scanf("%d", &T[i]);
        S = S + T[i];
    }
    M = S / N;
    printf("La somme des elements  est %d et le moyenne est %d", S, M);
    return 0;
}
