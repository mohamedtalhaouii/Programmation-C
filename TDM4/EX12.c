// Nom : Mohamed Talhaoui
// Filière : IIA (S3) | 2024/2025
#include <stdio.h>

int main()
{
    int T[4][4];
    int *P = (int *)T;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("entrer l'element de colonne %d, de ligne %d : ", i+1, j+1);
            scanf("%d", P + i * 4 + j);
        }
    }

    printf("les elements de tableau sont : \n");

    for (int i = 0; i < 4; i++)
    {
        printf("|");
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", *(P + i * 4 + j));
        }
        printf("|\n");
    }

////////////////////////////////////////////////////////////////////////////////////
    int tmp;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i < 3) // pour n'obtenir pas overflow
            {
                tmp = *(P + i*4 + j);
                *(P + i*4 + j) = *(P + (i+1)*4 + j); // si on a i=3 => i+1=4 (OVERFLOW!!)
                *(P + (i+1)*4 + j) = tmp;
            }
        }
    }
/////////////////////////////////////////////////////////////////////////////////////

    printf("les elements de tableau apres l'echanger sont : \n");

    for (int i = 0; i < 4; i++)
    {
        printf("|");
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", *(P + i * 4 + j));
        }
        printf("|\n");
    }
    return 0;
}


//   OUTPUT :

//   les elements de tableau sont :
//   |1      2       3       4       |
//   |5      6       7       8       |
//   |9      10      11      12      |
//   |13     14      15      16      |

//   les elements de tableau apres l'echanger sont :
//   |5      6       7       8       |
//   |9      10      11      12      |
//   |13     14      15      16      |
//   |1      2       3       4       |