// Nom : Mohamed Talhaoui
// Filière : IIA (S3) | 2024/2025
#include <stdio.h>

int main()
{
    int *P;
    int T[10];
    P = &T[0];

    for (int i = 0; i < 10; i++)
    {
        printf("entrer l'element %d : ", i+1);
        scanf("%d", P+i);
    }

    printf("les elements de tableau avec multiplication par 2 sont : ");
    printf("[");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(P+i)*2);
    }
    printf("]");
    
    return 0;
}
