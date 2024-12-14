// Nom : Mohamed Talhaoui
// Filière : IIA (S3) | 2024/2025
#include <stdio.h>

void cat(char *src[], char *dest[]) {
    for (int i = 0; i < 4; i++) {
        dest[i] = src[i];
    }
}

int main() {
    char *T[] = {"Salam", "Si", "Mohamed", "Talhaoui"}; 
    char *P[4]; 

    cat(T, P);

    printf("Les elements du tableau concatene sont : \n");
    for (int i = 0; i < 4; i++) {
        printf("%s ", P[i]);
    }
    printf("\n");

    return 0;
}
