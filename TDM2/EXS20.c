// Nom : Mohamed Talhaoui
// Filière : IIA (S3) | 2024/2025
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char A[100];
    int Maj = 1, Mins = 1;

    printf("Entrer Un chaine A : ");
    gets(A);

    for (int i = 0; i < strlen(A); i++) {
        if (islower(A[i] == 1)) {
            Maj = 0;  // il va changer chaque fois qu'il trouve un caractere minuscule
        }
        if (isupper(A[i] == 1)) {
            Mins = 0; // il va changer chaque fois qu'il trouve un caractere majuscule
        }
    }

    if (Maj == 1) {
        printf("La Chaine est Majuscule");
    } else if (Mins == 1) {
        printf("La Chaine est Miniscule");
    } else {
        printf("La Chaine est Mixte");
    }

    return 0;
}
