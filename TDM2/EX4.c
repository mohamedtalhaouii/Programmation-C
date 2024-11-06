#include <stdio.h>
#include <stdlib.h>


int main()
{
    int N;
    printf("\nEntrer Le Nombre des elements dans cette tableau : ");
    scanf("%d", &N);
    int T[N];

    for (int i = 0; i < N ; i++)
    {
        printf("\nEntrer L'element %d : ", i+1);
        scanf("%d", &T[i]);
    }

    for (int i = 0; i < N; i++)
    {
        printf("\nL'element de T[%d] = %d \n", i+1, T[N-i-1]);
    }
    return 0;
}
