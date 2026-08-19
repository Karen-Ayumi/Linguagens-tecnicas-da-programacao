#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*
	
	int n, resultado, bit64, bit32, bit16, bit8, bit4, bit2;
	printf("Coloque um valor: ");
	scanf("d%", &n);
	
	bit64 = n % 2;
	resultado = resultado / 2;
	
	bit32 = resultado % 2;
	resultado = resultado / 2;
	
	bit16= resultado % 2;
	resultado = resultado / 2;
	
	bit8 = resultado % 2;
	resultado = resultado / 2;
	
    bit4 = resultado % 2;
	resultado = resultado/ 2;
	
	bit2 = resultado % 2;
	resultado = resultado / 2;
	
	printf (" o %d em binario é = %d%d%d%d%d%d%d", n, resultado %2, bit2, bit4, bit8, bit16, bit32, bit64);
	
	*/
	
	float x1, x2, y1, y2, dist, p1, p2;
	
	printf("Insira as coordenadas do ponto p1: ");
	scanf("%f , %f", &x1, &y1);
	
	printf("Insira as coordenadas do ponto p2: ");
	scanf("%f , %f", &x2, &y2);
	
	p1 = pow(x2-x1, 2);
	p2 = pow(y2-y1, 2);
	
	dist = sqrt(p1+p2);
	
	printf("distancia: (%f)", dist);
	
	
	
	
	
	
	
	return 0;
}
