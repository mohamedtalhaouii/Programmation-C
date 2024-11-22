#include <stdio.h>
#include <stdlib.h>

int grand(int A, int B, int C)
{
    int Max = A;
    if (Max < B || Max < C)
    {
        Max = B;
        if (Max < C)
        {
            Max = C;
        }
    }
    return Max;
}

int main()
{
    int A, B, C;
    printf("Entrer Premier nbr : ");
    scanf("%d", &A);
    printf("Entrer Deuxieme nbr : ");
    scanf("%d", &B);
    printf("Entrer Derniere nbr : ");
    scanf("%d", &C);

    printf("Le plus grand des trois est : %d", grand(A,B,C));
    return 0;
}