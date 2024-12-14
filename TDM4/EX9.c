// Nom : Mohamed Talhaoui
// Filière : IIA (S3) | 2024/2025
#include <stdio.h>
#include <string.h>


int strcmpr(char *A, char *B){
    int k=0;
    for (int i = 0; i < strlen(A); i++)
    {
        if (*(A+i) == *(B+i))
        {
            k++;
        }
    }
    if (k == strlen(A))
    {
        return 1;
    } else{
        return 0;
    }
}


int main()
{
    char *A = "Talhaoui";
    char *B = "Talhaoui";

    printf("%d", strcmpr(A, B));
    return 0;
}
