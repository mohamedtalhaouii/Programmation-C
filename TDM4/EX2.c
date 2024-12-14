// Nom : Mohamed Talhaoui
// Filière : IIA (S3) | 2024/2025
#include <stdio.h>

int main()
{
    int n = 2, *p, **pt;
    p = &n;
    pt = &p;
    printf("l'adrese est %d et valeur est %d", *pt, **pt);
    return 0;
}
