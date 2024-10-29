#include <stdio.h>

int main()
{
    int n, i, p = 0;
    printf("Entrer Un Nombre : ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            p++;
        } 
    }
    
    if (p == 2)
    {
        printf("%d est un nombre premier", n);
    } else {
        printf("%d n'est pas un nombre premier", n);
    }
    return 0;
}
