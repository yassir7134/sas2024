#include<stdio.h>
int main (){
int n;
printf ("entrer un nomber a plusieurs chiffres /n:");
scanf ("%d",&n);


while (n > 0) {
        int figure = n % 10;
        printf("%d", figure);
        n /= 10;
    }
    return 0;




}
