// Nom : Mohamed Talhaoui
// Filière : IIA (S3) | 2024/2025
#include <stdio.h>
#include <stdlib.h>


int Fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    } 
    else {
        return Fibonacci(n-1) + Fibonacci(n-2);
    }
}

int main()
{
    int n;
    printf("Entrer un entier : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", Fibonacci(i));
    }
    return 0;
}