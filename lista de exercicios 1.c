#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
	
//2
double numero;
printf("Coloque o numero: ");
scanf("%lf", &numero);
printf("notacao: %e", numero);
	
//3
int numeroN, bin1, bin2, bin3, bin4, bin5, bin6;
  
printf("Escreva seu número: ");
scanf("%d", &numeroN);
        
bin1 = numeroN % 2;
bin2 = (numeroN/2) % 2;
bin3 = (numeroN/4) % 2;
bin4 = (numeroN/8) % 2;
bin5 = (numeroN/16) % 2;
bin6 = (numeroN/32) % 2;
	
printf("\n%d%d%d%d%d%d",bin6,bin5,bin4,bin3,bin2,bin1);

//exercicio 4
float salario, vendas, total;
printf("\nValor do salario:\n");
scanf("%f", &salario);
printf("Valor das vendas arrecadadas:\n");
scanf("%f", &vendas);
total = salario + (vendas*0.15);
printf("%.2f", total);

//exercicio 5
float n1, n2, n3, n4, median, prod, totaln;
printf("Escolha o valor para 4 números: ");
scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
  
totaln = n1 + n2 + n3 + n4;
median = totaln / 4;
prod = n1 * n2 * n3 * n4;
	
printf("Soma: %f |Média: %f |Produtório: %f", totaln, median, prod);

//6	
int idade, mes, ano, dias;
printf("Quantos anos voce tem?: ");
scanf("%d", &idade);

ano = idade / 365;
mes = (idade % 365) / 30;
dias = (idade % 365) % 30;

printf("Anos: %d \nMeses: %d\nDias: %d", ano, mes, dias);
	
//7
float raio, volume, pi2;
printf("De o valor de um raio: ");
scanf("%f", &raio);
pi2 = 3.14159;
volume = (4.0/3) * pi2 * raio * raio * raio;
printf("%f", volume);

//8
float res, x1, x2, y1, y2;

printf("Digite os 4 valores: ");
scanf("%f %f %f %f", &x1, &x2, &y1, &y2);

res = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

printf("%f\n", res);
















	return 0;
}
