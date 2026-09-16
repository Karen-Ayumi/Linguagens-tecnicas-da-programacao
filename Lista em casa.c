#include <stdio.h>
#include <stdlib.h>




int main(int argc, char *argv[])
{
   
int reais, d1, d2, d3, d4, d5, d6;

    printf("Insira o valor: ");
    scanf("%d", &reais);

    d1 = reais / 100;
    reais = reais % 100;
    d2 = reais / 50;
    reais = reais % 50;
    d3 = reais / 10;
    reais = reais % 10;
    d4 = reais / 5;
    reais = reais % 5;
    d5 = reais / 2;
    reais = reais % 2;
    d6 = reais / 1;

    printf("Notas de 100: %d \n Notas de 50: %d\n Notas de 10: %d\n Notas de 5: %d\n Notas de 2: %d\n Notas de 1: %d", d1, d2, d3, d4, d5 ,d6);
