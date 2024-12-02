// Nom : Mohamed Talhaoui
// Filière : IIA (S3) | 2024/2025
#include <stdio.h>
#include <stdlib.h>

void note(float N) {
    if (N < 10)
    {
        printf("Echec");
    }
    else if (N >= 10 && N < 12)
    {
        printf("Passable");
    }
    else if (N >= 12 && N < 14)
    {
        printf("Assez-Bien");
    }
    else if (N >= 14 && N < 16)
    {
        printf("Bien");
    }
    else
    {
        printf("Trés Bien");
    }
}

int main()
{
    float N;
    printf("Entrer Une Note Comprise entre 0 et 20 : ");
    scanf("%f", &N);

    while (N < 0 || N > 20)
    {
        printf("Erreur, Entrer Une Note Comprise entre 0 et 20 : ");
        scanf("%f", &N);
    }
    note(N);
    return 0;
}