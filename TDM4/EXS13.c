// Nom : Mohamed Talhaoui
// Filière : IIA (S3) | 2024/2025
#include <stdio.h>

int main()
{
    char *P[]={"Hello", "Si", "Mohamed", "Talhaoui"};

    printf("les elements de tableau sont : \n");
    
    for (int i = 0; i < sizeof(*P); i++)
    {
        for (int j = 0; *(P[i]+j) != '\0'; j++) // chaque element de tableau pointe sur premier caractere
        {
            printf("%c", *(P[i] + j)); // et on incrumente chaque caractere jusqu'a '\0' 
        }
        printf(" "); // pour l'espace avec chaque chaine de caractere
    }
    return 0;
}