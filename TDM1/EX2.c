#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    printf("Entrer Une Note Comprise entre 0 et 100 :");
    scanf("%d", &N);

    while (N < 0 || N > 100)
    {
        printf("Erreur, Entrer Une Note Comprise entre 0 et 100 :");
        scanf("%d", &N);
    }

    if (N < 50)
    {
        printf("Echec");
    }
    else if (N >= 50 && N < 65)
    {
        printf("Passable");
    }
    else if (N >= 65 && N < 80)
    {
        printf("Bien");
    }
    else
    {
        printf("Tres Bien !");
    }
    return 0;
}
