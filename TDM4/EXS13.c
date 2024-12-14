// Nom : Mohamed Talhaoui
// Filière : IIA (S3) | 2024/2025
#include <stdio.h>
#include <string.h>

int main()
{
    char *P[] = {"Salam", "Si", "Mohamed", "Talhaoui"};

    printf("les elements de tableau sont : \n");
    
    for (int i = 0; i < strlen(*P) - 1; i++)
    {
        printf("%s", P[i]);
        printf(" ");
    }
    return 0;
}