#include <stdio.h>
#include <stdlib.h>


float moyenne(float a, float b, float c)
{
    return (a+b+c) / 3;
}

int main()
{
    float a, b, c;
    printf("Entrer la note numero 1 : ");
    scanf("%f", &a);
    printf("Entrer la note numero 2 : ");
    scanf("%f", &b);
    printf("Entrer la note numero 3 : ");
    scanf("%f", &c);

    printf("\nLe Moyenne des Notes est : %.2f", moyenne(a, b, c));
    return 0;
}