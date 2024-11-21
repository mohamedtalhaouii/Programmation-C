#include <stdio.h>
#include <stdlib.h>


int premier(int N)
{
    int P = 0;
    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            P++;
        }
    }
    if (P <= 2) // Si il est divise sur 1 et sur lui-meme P doit-etre incrementer par 2
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

    printf("%d", premier(nbr));
    return 0;
}