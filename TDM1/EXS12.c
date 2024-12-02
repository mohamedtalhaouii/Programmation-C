// Nom : Mohamed Talhaoui
// Filière : IIA (S3) | 2024/2025
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char B[3];
    int motpass;
    while (B != "bon")
    {
        motpass = (rand() % (9999+1-1000)) + 1000; // il faut trouve 4 entiers (min = 1000 et max = 9999)
        printf("Le mot de passe généré est : %d\n", motpass);
        printf("Si vous aimez le mot de passe, tapez bon : ");
        scanf("%c", &B);
        break;
    }
    return 0;
}
