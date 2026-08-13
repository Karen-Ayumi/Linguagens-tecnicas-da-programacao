#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float areac, raio, r2;
	printf("Insira o raio do circulo\n");
	scanf ("%f", &raio);
	r2 = raio*raio;
	areac = pi*r2;
	printf("A area do circulo de raio %f = %f" , raio, areac); 

	printf("\nAgora a do trapezio");
 	float areat, baseMaior, baseMenor, altura;
    printf("\nInsira a Base Maior, Base Menor e a Altura\n");
    scanf("%f %f %f", &baseMaior, &baseMenor, &altura);
    areat = (baseMaior+baseMenor)*altura /2;
    printf("\nA area do trapezio %f", areat);


	return 0;
	
}
