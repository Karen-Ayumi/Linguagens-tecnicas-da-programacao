#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
int primeiro, segundo, aux;
printf("Insira o primeiro valor");
scanf("%d", &primeiro);
printf("Insira o segundo valor");
scanf("%d", &segundo);

aux = primeiro;
primeiro = segundo;
segundo = aux;

printf ("%d \n %d", primeiro, segundo);





float salario, vendas, total;
printf("\nValor do salario:\n");
scanf("%f", &salario);
printf("Valor das vendas arrecadadas:\n");
scanf("%f", &vendas);
total = salario + (vendas*0.15);
printf("%f", total);




















	return 0;
}
