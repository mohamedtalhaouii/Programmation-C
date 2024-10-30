#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, M, i=0, S=0;
    while (N != -1)
    {
        printf("\nPour quiter la saisir entrer -1\n");
        printf("Entrer la note numero %d : ", i+1);
        scanf("%d", &N);
        if (N != -1) {
            printf("La note est : %d\n", N);
            S+=N;
            i++;
        }
    }
    M = S / i;
    printf("\nLe Moyenne des Notes est : %d", M);
    return 0;
}