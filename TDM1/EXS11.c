// Nom : Mohamed Talhaoui
// Filière : IIA (S3) | 2024/2025
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int N;
    printf("Entrer un nombre negative : ");
    scanf("%d", &N);

    while (N > 0)
    {
        printf("vous avez entrer un nombre positive !!\n");
        printf("Entrer un nombre negative : ");
        scanf("%d", &N);
    }
    return 0;
}
