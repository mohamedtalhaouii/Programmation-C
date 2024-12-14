// Nom : Mohamed Talhaoui
// Filière : IIA (S3) | 2024/2025
#include <stdio.h>
#include <string.h>

int main()
{
    char *alpha;
    alpha = "abcdefghijklmnopqrstuvwxyz";
    char name[]= "talhaoui";


    for (int i = 0; i < strlen(name); i++)
    {
        for (int j = 0; j < strlen(alpha); j++)
        {
            if (*(name+i) == *(alpha+j))
            {
                *(name+i) = *(alpha+j+1);
                break;
            }
        }
    }

    for (int i = 0; i < strlen(name); i++)
    {
        printf("%c", *(name+i));
    }
    return 0;
}
