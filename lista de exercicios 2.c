#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
//1
 int idade, ano, nascimento;
 printf("Sua idade ");
 scanf("%d", &idade);
 ano = 2026;
 nascimento = ano - idade;
 printf("%d", nascimento); 
//2
 float km, ms;
 printf("Coloque o valor em km/s: ");
 scanf("%f", &km);
 ms = km / 36;
 printf("%f", km);
//3
 float reais, dolar;
 printf("Coloque o valor em reais: ");
 scanf("%f", &reais);
 dolar = reais / 5.22;
 printf("%f", dolar);
//4
float C, F;
printf("Coloque o valor em celsius: ");
scanf("%f", &C);
F = C * (9.0/5.0) + 32.0;
printf("%f", F);
//5
float graus, radianos, p;
printf("Coloque o valor em graus: ");
scanf("%f", &graus);
p = 3.141592;
radianos = graus * (p/ 180);
printf("%f", radianos);
//6
int numero, sucessor, antecessor;
printf("Escolha um numero: ");
scanf("%d", &numero);
sucessor = numero + 1;
antecessor = numero - 1;
printf("%d\n%d", antecessor, sucessor);
//7
float primeiro. segundo, terceiro, premio;
premio = 780000;
primeiro = premio * 0.46;
segundo = premio * 0.32;
terceiro = premio - (primeiro + segundo);
printf("%f \n %f \n %f", primeiro, segundo, terceiro);
//8
int horas, minutos, segundos, restominutos;
printf("Coloque os segundos: ");
scanf("%d", &segundos);
horas = segundos / 3600;
restominutos = segundos % 3600;
minutos = restominutos /60;
segundos = restominutos % 60;
printf("%d:%d:%d", horas, minutos, segundos);
//9






 //10
int a,b,c, maiorab, maiorabc;
printf("Coloque tres valores: ");
scanf("%d\n%d\n%d", &a, &b, &c);
maiorab = (a + b + abs(a - b)) / 2;
maiorabc = (maiorab + c + abs(maiorab - c)) / 2;
printf("%d E o maior", maiorabc);




  


  
}




