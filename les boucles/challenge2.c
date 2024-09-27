#include<stdio.h>
int main(){

int Nombre,factorielle=1,i;


printf("entrer un nombre :");
scanf("%d",&Nombre);
if(Nombre==0){

printf("factorielle de 0 est 1");}


else{
for(i=2;i<=Nombre;i++){

    factorielle=factorielle*i;

}





 printf("le fact de %d est %d ",Nombre,factorielle);
}

return 0;



}
