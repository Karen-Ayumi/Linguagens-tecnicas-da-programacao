#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//1- Faça um programa que leia um número inteiro N e mostre todos os números de 1 até N.
	
	int n, i;
	
	printf("Insira um numero de termos: ");
	scanf("%d", &n);
	
	for (i=1;i<=n;i++){
		printf("%d ", i);
	}
	
	// 2 -Contagem regressiva (while)
	
	printf ("\nInsira uma quantidade de termos: ");
	scanf("%d", &n);
	
	while(n>=1){
		printf("%d", n);
		n--;
	}
	
	//3-Validação de número (do while)
	
	int num;
	
	do {
		printf("\nInsira um numero de 1 a 10: ");
		scanf("%d", &num);
		if (num<1 || num > 10){
			printf("Numero invalido");
		}
	}
		while (num<1 || num>10);
		printf("Numero valido!");
		
	//Leia 5 números inteiros utilizando while e calcule a média entre eles.
	
	int j = 0, soma = 0;
    float media;

    while (j < 5) {
        printf("\nDigite o %d numero: ", j + 1);
        scanf("%d", &num);
        soma = soma + num;
        j++;
    }

    media = soma / 5.0;
    printf("Media = %.1f\n", media);


	
	return 0;
}
