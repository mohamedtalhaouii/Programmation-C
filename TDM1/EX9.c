// Nom : Mohamed Talhaoui
// Filière : IIA (S3) | 2024/2025
#include <stdio.h>

int main()
{
    int A, B;
    int r=1;

    printf("Entrer premier nombre : ");
    scanf("%d", &A);
    printf("Entrer deuxieme nombre : ");
    scanf("%d", &B);

    while (A <= B)
    {
        printf("\nLe premier nombre doit etre superieur au deuxieme nombre !\n");
        printf("Entrer premier nombre : ");
        scanf("%d", &A);
        printf("Entrer deuxieme nombre : ");
        scanf("%d", &B);
    }
    
    if(B == 0)
    {
        printf("PGCD est : %d", A);
    }

    while (r != 0)
    {
        r = A % B;
        A = B;
        B = r;
    }
    printf("PGCD est : %d ", A);

    return 0;
}
