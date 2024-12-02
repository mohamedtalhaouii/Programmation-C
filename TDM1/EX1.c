// Nom : Mohamed Talhaoui
// Filière : IIA (S3) | 2024/2025
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int An , N;
    printf("Entrer Annee de naissance :");
    scanf("%d", &An);
    N =  2024 - An;

    if( N >= 18) {
        printf("Majeur");
    } else{
        printf("Mineur");
    }
    return 0;
}
