#include<stdio.h>
int main (){
    int a;
   int b;

   printf("Entrez A : ");
   scanf("%d", &a);
   printf("Entrez B : ");
   scanf("%d", &b);

   int  somme = a + b;

   if (a == b)
      printf("triple de somme  :  %d\n",somme * 3);

   else
      printf("Somme : %d",somme);

   return 0;






}
