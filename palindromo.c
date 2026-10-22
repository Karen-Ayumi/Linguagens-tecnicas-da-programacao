#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, n, palindromo;
	char palavra [20];
	scanf("%s", &palavra);
	printf("Inserido %s", palavra);
	printf("\n");
	for (i = 0; i<20 && palavra[i]!= '\0'; i++);
	for( n=i-1, i=0; i<n; i++, n--){
	if (palavra[i] == palavra[n]) palindromo =1;
	else palindromo = 0;
	}
	if (palindromo) printf("e palindromo");
	else printf("nao e palindromo");
	
	


	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
