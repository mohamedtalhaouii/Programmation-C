#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X, trv;
    int T[6] = {1, 3, 5, 7, 9, 11};
    printf("Entrer le nombre qui vous rechercher : ");
    scanf("%d", &X);

    for (int i = 0; i < 6; i++)
    {
        if (T[i] == X)
        {
            printf("L'element %d est trouve, et sa position est %d \n", X, i);
            trv = 1;
            break;
        }
    }
    if (trv != 1)
    {
        printf("L'element %d n'est pas present", X);
    }
    return 0;
}
