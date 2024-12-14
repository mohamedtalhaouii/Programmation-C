#include <stdio.h>
#include <stdlib.h>


int main()
{
    int N;
    printf("Entrer le nombre des elements tu veux : ");
    scanf("%d", &N);

    int *P = malloc(N * sizeof(int));
    // int P = (int *)malloc( N * sizeof(int));

    for (int i = 0; i < N; i++)
    {
        printf("Entrer l'element %d : ", i+1);
        scanf("%d", P + i);
    }

    printf("les elements de tableau sont : \n");
    printf("[");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", *(P + i));
    }
    printf("]");
    free(P);

    return 0;
}