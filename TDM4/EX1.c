#include <stdio.h>


int main()
{
    int n = 2, *p;
    p = &n;
    printf("l'adrese est %d et valeur est %d", p, *p);
    return 0;
}
