// Nom : Mohamed Talhaoui
// Filière : IIA (S3) | 2024/2025
#include <stdio.h>
#include <stdlib.h>


int parite(int N)
{
    if (N % 2 == 0)
    {
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    int nbr;
    printf("Entrer Un Entier : ");
    scanf("%d", &nbr);
    printf("%d", parite(nbr));
    return 0;
}