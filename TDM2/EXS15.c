#include <stdio.h>
#include <string.h>

int main()
{
    char A[100];
    char B[100];
    printf("Entrer Un chaine A : ");
    gets(A);

    strcpy(B, A);

    printf("L'autre chaine de caractere à copie est : ");
    puts(B);

 return 0;
}