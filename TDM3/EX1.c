// Nom : Mohamed Talhaoui
// Filière : IIA (S3) | 2024/2025
#include <stdio.h>
#include <stdlib.h>


int Carre(int N)
{
    return N*N;
}

int main()
{
    int nbr;
    printf("Entrer Un Entier : ");
    scanf("%d", &nbr);
    printf("Le Carre de cette nbr est : %d", Carre(nbr));
    return 0;
}