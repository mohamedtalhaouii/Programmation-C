// Nom : Mohamed Talhaoui
// Filière : IIA (S3) | 2024/2025
#include <stdio.h>
#include <string.h>

int main()
{
    char *P[] = {"casemiro", "mohamed", "talhaoui", "skhonelaktaf", "abdelkader", "baredlaktaf", "diplomatico", "mip", "ronaldo", "wassingh", "toto"};
    char *tmp;

    int taille = sizeof(P) / sizeof(P[0]);

//-------------------Trie a Bulles--------------------//
//--Vous pouvez utiliser n'importe quel type de Tri--//
    for (int i = 0; i < taille - 1; i++)
    {
        for (int j = 0; j < taille - i - 1; j++)
        {
            if (strcmp(P[j], P[j + 1]) > 0)
            {
                tmp = P[j];
                P[j] = P[j + 1];
                P[j + 1] = tmp;
            }
        }
    }
//----------------------------------------------------//

    printf("les elements de tableau avec l'order alphabetique sont : \n");
    for (int i = 0; i < taille; i++)
        {
            printf("%s\n", P[i]);
        }
    return 0;
}
