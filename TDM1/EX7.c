// Nom : Mohamed Talhaoui
// Filière : IIA (S3) | 2024/2025
#include <stdio.h>

int main()
{
    int a,b, N;
    printf("Entrer la base : ");
    scanf("%d", &a);
    printf("Entrer l'exposant : ");
    scanf("%d", &b);
    N=1;
    for (int i = 1; i <= b; i++)
    {
        N*=a;
    }
    printf("%d^%d = %d", a,b, N);
    return 0;
}
