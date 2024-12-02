// Nom : Mohamed Talhaoui
// Filière : IIA (S3) | 2024/2025
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int fib0 = 0 , fib1 = 1;
    int i, n, fib;

    printf("Enter Un Entier : ");
    scanf("%d", &n);
    
    printf("Les %d premiers termes sont :\n", n);
    printf("fib0 = %d\n", fib0);
    printf("fib1 = %d\n", fib1);

    for ( i = 2; i <= n; i++)
    {
        fib = fib0 + fib1;
        printf("fib%d = %d\n", i, fib);
        fib0 = fib1;
        fib1 = fib;
    }    
    return 0;
}
