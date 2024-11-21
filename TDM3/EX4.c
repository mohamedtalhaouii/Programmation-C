#include <stdio.h>
#include <stdlib.h>

int Somme(int A, int B)
{
    return A + B;
}

int main()
{
    int A, B;
    printf("Entrer Premier nbr : ");
    scanf("%d", &A);
    printf("Entrer Deuxieme nbr : ");
    scanf("%d", &B);

    printf("La Somme des deux est : %d", Somme(A,B));
    return 0;
}