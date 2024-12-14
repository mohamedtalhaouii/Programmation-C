// Nom : Mohamed Talhaoui
// Filière : IIA (S3) | 2024/2025
#include <stdio.h>

int main()
{
    char *P[] = {"Salam", "Si", "Mohamed", "Talhaoui"};

    int taille = sizeof(P) / sizeof(P[0]);

    printf("les elements de tableau sont : \n");
    
    for (int i = 0; i < taille - 1; i++)
    {
        printf("%s ", P[i]);
    }
    return 0;
}