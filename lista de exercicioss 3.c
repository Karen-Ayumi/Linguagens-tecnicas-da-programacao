#include <stdio.h>
#include <stdlib.h>


int multidigito(int dig, int valor){
	return dig * valor;
	
}

int main(int argc, char *argv[]) {
	

int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, soma, resto, restoII;
printf("Escreva o seu cpf: ");
scanf("%d %d %d . %d %d %d . %d %d %d - %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11);

soma = multidigito(n1,10)+multidigito(n2,9)+multidigito(n3,8)+
       multidigito(n4,7)+multidigito(n5,6)+multidigito(n6,5)+
	   multidigito(n7,4)+multidigito(n8,3)+multidigito(n9,2);

soma *=10;
resto = soma % 11;
if (resto == 10) resto = 0; 
printf("\n%d", resto);


soma = multidigito(n1,11)+multidigito(n2,10)+multidigito(n3,9)+
       multidigito(n4,8)+multidigito(n5,7)+multidigito(n6,6)+
	   multidigito(n7,5)+multidigito(n8,4)+multidigito(n9,3)+multidigito(n10,2);

soma *=10;
restoII = soma % 11;
if (restoII == 10) resto = 0; 
printf("\n%d", restoII);

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
