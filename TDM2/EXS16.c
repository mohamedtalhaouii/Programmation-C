#include <stdio.h>
#include <string.h>

int main()
{
    char A[100];
    char B[100];

    printf("Entrer la premiere chaine : ");
    gets(A);
    printf("Entrer la deuxieme chaine : ");
    gets(B);
    if (strcmp(A, B) == 0)
    {
        printf("elles sont egales");
    } 
    else if (strcmp(A, B) == 1)
    {
        printf("plus grandes");
    } 
    else if (strcmp(A, B) == -1)
    {
        printf("plus petites");
    }
    return 0;
}