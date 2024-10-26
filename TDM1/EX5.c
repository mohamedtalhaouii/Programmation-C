#include <stdio.h>
#include <stdlib.h>


int main()
{
    int F = 1;
    int n;

    printf("Entrer Un Entier : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        F*=i;
    }
    printf("%d", F);
    return 0;
}
