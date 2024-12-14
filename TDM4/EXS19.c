#include <stdio.h>

void swap(int *A, int *B){
    int tmp = *A;
    *A = *B;
    *B = tmp;
}

int main()
{
    int A, B;

    printf("Entrer la valeur de A : ");
    scanf("%d", &A);
    printf("Entrer la valeur de B : ");
    scanf("%d", &B);

    printf("Avant l'echange : \n");
    printf("A = %d et B = %d", A, B);

    swap(&A, &B);

    printf("\nApres l'echange : \n");
    printf("A = %d et B = %d", A, B);
    return 0;
}