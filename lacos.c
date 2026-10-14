#include <stdio.h>
#include <stdlib.h>

/* Elabore um programa que peça ao usuario para digitar 10 números que sejam 
inteiros positivos, e ignorando os negativos. E mostre na tela o resultado da 
soma e a média desses valores.
-OBS: não precisa usar vetor, usem os laços da aula de hoje while e do-while*/

int main(int argc, char *argv[]) {
	int soma, n, i;
	printf("Insira 10 numeros positivos: ");
	i=0;
  soma=0;
	while(i<10){
		scanf("%d", &n);
		if(n>0){
			soma += n;
			i++;
		}
	}
	printf("Soma = %d e media = %d", soma, (soma/10));
	
	return 0;
}
