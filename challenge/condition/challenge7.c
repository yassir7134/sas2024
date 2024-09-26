#include <stdio.h>

int main() {
    char a;

    printf("Entrez un caractere : ");
    scanf("%c", &a);


    if (a >= 'A' && a <= 'Z') {
        printf("%c c'est un alphabet majuscule\n", a);
    }
    else {
        printf("%c c'est un alphabet minuscule\n", a);
    }

    return 0;
}
