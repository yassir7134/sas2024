#include <stdio.h>

int main() {
    int a;

    printf("entrer en nomber : ");
    scanf("%d", &a);

    if( a > 0){
        printf("nomber et positif");
    }
    else if(a < 0){
        printf("entrer et negatif");
    }
    else{
        printf("nomber et nul");
    }
    return 0;
}
