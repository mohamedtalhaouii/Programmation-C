#include <stdio.h>

int main()
{
    int N, i=1;
    while (i <= 10)
    {
        printf("Entrer le nombre numero %d : ", i);
        scanf("%d", &N);
        if (N < 0)
        {
            continue;
        }
        i++;
    }
    return 0;
}