#include <stdio.h>
#include <stdlib.h>


int multidigito(int dig, int valor){
	return dig * valor;
	
}

int main(int argc, char *argv[]) {
	
//1
int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, soma, resto, restoII;
printf("Escreva o seu cpf: ");
scanf("%d %d %d . %d %d %d . %d %d %d - %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11);

soma = multidigito(n1,10)+multidigito(n2,9)+multidigito(n3,8)+
       multidigito(n4,7)+multidigito(n5,6)+multidigito(n6,5)+
	   multidigito(n7,4)+multidigito(n8,3)+multidigito(n9,2);

soma *=10;
resto = soma % 11;
if (resto == 10) resto = 0; 



soma = multidigito(n1,11)+multidigito(n2,10)+multidigito(n3,9)+
       multidigito(n4,8)+multidigito(n5,7)+multidigito(n6,6)+
	   multidigito(n7,5)+multidigito(n8,4)+multidigito(n9,3)+multidigito(n10,2);

soma *=10;
restoII = soma % 11;
if (restoII == 10) resto = 0; 
	
	if (resto == n10 && restoII == n11){ 
    printf("Seu cpf e valido");
}
else {
    printf("Seu cpf nao e valido");
}

// 2
float C, F, valor;
char graus;
printf("\nColoque o valor em graus: ");
scanf("%f", &valor);

printf("Esse valor esta em Celsius(C) ou em Fahrenheit (F)?:");
scanf(" %c", &graus);

if (graus == 'C'){
    printf("A conversao de Celsius para Fahrenheit : %.2f", (valor * 9/5)+ 32);

}
else if (graus == 'F') {
    printf("A conversao de Fahrenheit para Celsius: %.2f", (valor - 32) * 5/9);
}

//3
	
char nome[30];
float nota1, nota2, nota3, media;

printf("Nome : ");
scanf("%s", nome);

printf("Insira o valor das 3 notas: ");
scanf("%f %f %f", &nota1, &nota2, &nota3);

media = (nota1 + nota2 + nota3) / 3;

if (media >= 7.0 && media <=10.0){
    printf("Sua media: %.2f\nVOCE FOI APROVADO", media);
}
else if(media >=4.0 && media <= 6.9){
    printf("Sua media: %.2f\nVOCE ESTA DE RECUPERACAO POR %f Pontos", media, (10.0 - media));
}
else printf("Sua media: %.2f\nVOCE ESTA REPROVADO", media);

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
