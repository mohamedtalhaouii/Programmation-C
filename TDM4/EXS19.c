// Nom : Mohamed Talhaoui
// Filière : IIA (S3) | 2024/2025
#include <stdio.h>

void swap(int *A, int *B){
    int tmp = *A;
    *A = *B;
    *B = tmp;
}

int main()
{
    int A, B;

    // Demande de saisir :
    printf("Entrer la valeur de A : ");
    scanf("%d", &A);
    printf("Entrer la valeur de B : ");
    scanf("%d", &B);

    // Affiche avant l'echange :
    printf("Avant l'echange : \n");
    printf("A = %d et B = %d", A, B);

    swap(&A, &B);

    // Affiche apres l'echange :
    printf("\nApres l'echange : \n");
    printf("A = %d et B = %d", A, B);
    return 0;
}