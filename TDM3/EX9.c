// Nom : Mohamed Talhaoui
// Filière : IIA (S3) | 2024/2025
#include <stdio.h>
#include <stdlib.h>


int Power(int a, int b)
{
    int S = 0;
    for (int i = 1; i <= b; i++)
    {
        S+=a*b;
    }
    return S;
}

int main()
{
    int A, B;
    printf("Entrer la base : ");
    scanf("%d", &A);
    printf("Entrer l'exposant : ");
    scanf("%d", &B);

    printf("%d^%d = %d", A, B, Power(A, B));
    return 0;
}