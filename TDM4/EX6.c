// Nom : Mohamed Talhaoui
// Filière : IIA (S3) | 2024/2025
#include <stdio.h>

int copietab(int *src, int *dest){
    for (int i = 0; i < 10; i++)
    {
        *(dest+i) = *(src+i);
    }
    return *dest;
}

int main()
{
    int *P;
    int A[10], B[10];
    P = A;


    printf("Saisir les elements de tableau de source\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Entrer l'element %d : ", i+1);
        scanf("%d", P+i);
    }

    copietab(A, B);

    printf("les elements de tableau destination sont : ");
    printf("[");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", B[i]);
    }
    printf("]");
    return 0;
}
