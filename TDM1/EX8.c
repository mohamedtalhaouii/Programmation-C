#include <stdio.h>

int main()
{
    float C, F;
    printf("Entrer la temperature : ");
    scanf("%f", &C);

    F = (C * 1.8) + 32;

    printf("%.2f °C = %.2f °F", C, F);
    return 0;
}
