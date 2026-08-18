#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
//exercicio 1	
int primeiro, segundo, aux;
printf("Insira o primeiro valor");
scanf("%d", &primeiro);
printf("Insira o segundo valor");
scanf("%d", &segundo);

aux = primeiro;
primeiro = segundo;
segundo = aux;

printf ("%d \n %d", primeiro, segundo);

//exercicio 4
float salario, vendas, total;
printf("\nValor do salario:\n");
scanf("%f", &salario);
printf("Valor das vendas arrecadadas:\n");
scanf("%f", &vendas);
total = salario + (vendas*0.15);
printf("%f", total);




















	return 0;
}
