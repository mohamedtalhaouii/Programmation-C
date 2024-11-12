#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    char A[100];
    printf("Entrer Un chaine A : ");
    gets(A);

    printf("La Conservation de la chaine caractere à entier est : %d", atoi(A));

    return 0;
}
