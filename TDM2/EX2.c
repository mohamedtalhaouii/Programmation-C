#include <stdio.h>
#include <stdlib.h>

int main()
{
    // la taille de tableau
    int N, Max;
    printf("\nEntrer Le Nombre des elements dans cette tableau : ");
    scanf("%d", &N);
    int T[N];

    // les elements de tableau
    for (int i = 0; i < N ; i++)
    {
        printf("\nEntrer L'element %d : ", i+1);
        scanf("%d", &T[i]);
    }
    // trouve le plus grand element
    Max = T[0];
    for (int i = 0; i < N; i++)
    {
        if (Max < T[i])
        {
            Max = T[i];
        }
    }
    printf("Le plus grand element dans le tableau est : %d", Max);
    return 0;
}
