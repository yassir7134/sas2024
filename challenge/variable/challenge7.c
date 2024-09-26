#include<stdio.h>
int main(){
float a;
float b;
float c;
printf("entrer the number A:");
scanf("%f",&a);
printf("entrer the number B");
scanf("%f",&b);
printf("entrer the number C");
scanf("%f",&c);
float ap = a * 2;
float bp = b * 3;
float cp = c * 5;
float sp = (ap + bp + cp) / 10;

printf("Moyenne Ponderee est : %f",sp);


    return 0;

}
