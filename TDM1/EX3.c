// Nom : Mohamed Talhaoui
// Filière : IIA (S3) | 2024/2025
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    printf("Entrer Un Entier :");
    scanf("%d", &N);

    if (N % 2 == 0)
    {
        printf("Paire");
    } else {
        printf("Impaire");
    }
    
    return 0;
}
