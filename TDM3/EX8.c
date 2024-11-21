#include <stdio.h>
#include <stdlib.h>


int SommePremiers(int N)
{
    int S = 0;
    for (int i = 1; i <= N; i++)
    {
        S+=i;
    }
    return S;
}

int main()
{
    int nbr;
    do {
        printf("Entrer Un Entier : ");
        scanf("%d", &nbr);
    } while (nbr <= 0);

    printf("La Somme des %d premiers entiers positifs est : %d", nbr, SommePremiers(nbr));
    return 0;
}