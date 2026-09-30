#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
// exercicio do legendario la 
	
	int qtd_total, capacidade, n_mochilas;
	
	printf("Insira a quantidade de itens e a capacidade de mochilas: ");
	scanf("%d,%d", &qtd_total, &capacidade);
	
	n_mochilas = qtd_total / capacidade;
	
	printf("Voce precisa de %d, mochilas", n_mochilas);	
	
// exercicio do numeros primos 
	
	int verifica (int N);
	int verifica(int N){
		if ((N%2) ==1)
			if ((N%5)==0)
				return 1;
		else
		return 0;
	}
	
	
	int alph, beta, gama, theta, resto2, resto5;
	
	printf("Insira quatro numeros inteiros: , , , ,")
	
	scanf("%d,%d,%d,%d", &alph, &beta, &gama, &theta);
	
	if (verifica (alph)) printf("%d", alph);
	if (verifica(beta)) printf("%d", beta);
	if (verifica (gama)) printf("%d", gama);
	if (verifica (theta)) printf("%d", theta);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
