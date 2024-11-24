#include <stdio.h>
#include <stdlib.h>


int parfait(int N)
{
    int S = 0;
    for (int i = 1; i < N; i++)
    {
        if (N % i == 0) // Les diviseurs de N
        {
            S+=i; // La Somme des diviseurs de N
        }
    }

    if (N == S) {
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

    printf("%d", parfait(nbr));
    return 0;
}