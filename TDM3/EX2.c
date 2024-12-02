// Nom : Mohamed Talhaoui
// Filière : IIA (S3) | 2024/2025
#include <stdio.h>
#include <stdlib.h>

int grand(int A, int B)
{
    if (A > B)
    {
        return A;
    } else {
        return B;
    } 
}

int main()
{
    int A, B;
    printf("Entrer Premier nbr : ");
    scanf("%d", &A);
    printf("Entrer Deuxieme nbr : ");
    scanf("%d", &B);

    printf("Le plus grand des deux est : %d", grand(A,B));
    return 0;
}