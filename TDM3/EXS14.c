// Nom : Mohamed Talhaoui
// Filière : IIA (S3) | 2024/2025
#include <stdio.h>
#include <stdlib.h>


float conversion(float C)
{
    return (C * 1.8) + 32;
}

int main()
{
    float C;
    printf("Entrer la temperature : ");
    scanf("%f", &C);

    printf("%.2f °C = %.2f °F", C, conversion(C));
    return 0;
}