// Nom : Mohamed Talhaoui
// Filière : IIA (S3) | 2024/2025
#include <stdio.h>

int main()
{
    char *name;
    name = "Talhaoui";
    int nbr = 0;

    while (*name != '\0')
    {
        nbr++; // calculer le nbr de caractere
        *name++; //incrument jusqu'a \0
    }

    printf("le nbr de caractere dans cette chaine de caractere est : %d", nbr);
        
    return 0;
}
