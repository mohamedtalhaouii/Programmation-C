// Nom : Mohamed Talhaoui
// Filière : IIA (S3) | 2024/2025
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    saisir :
    printf("\nEntrer le mot de passe : ");
    scanf("%d", &N);
    if (N != 2005) //Le mot de pass
    {
        printf("Le Mot de Passe est Incorrect !!\n");
        goto saisir;
    }
    printf("Le Mot de Passe est Correct.");
    
    return 0;
}