#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int N, i, j;
	int linha [20];
	
	printf ("Insira o numero de linhas: ");
	scanf ("%d", &N);
	
	for (i = 0; i<N ; i++){
		linha[i] = 1;
		for (j = i-1; j>0; j--){
			linha[j] = linha[j] + linha[j-1];
		}
		for (j =0; j<=i; j++){
			printf("%d", linha[j]);
		}
		printf("\n");
	}
	
	// fazer um PG onde ele de N, razao e A1
	
	int R, A1, N1;
	int pg[100];
	
	printf("\nInsira um valor de termos: ");
	scanf("%d", &N1);
	
	printf("Escolha o primeiro numero: ");
	scanf("%d", &A1);
	
	printf("Escolha a razao: ");
	scanf("%d", &R);
	

	pg[0] = A1;
	for (i = 1; i<N1 ; i++){
		pg[i] = pg[ i -1] * R;
	}
	
	printf("Termos da PG: \n");
	for (i=0;i<N1;i++){
		printf("%d ", pg[i]);
	}
	
	// PA

	int pa[100];
	
	printf("\nInsira um valor de termos: ");
	scanf("%d", &N1);
	
	printf("Escolha o primeiro numero: ");
	scanf("%d", &A1);
	
	printf("Escolha a razao: ");
	scanf("%d", &R);
	

	pa[0] = A1;
	for (i = 1; i<N1 ; i++){
		pa[i] = pa[ i -1] + R;
	}
	
	printf("Termos da PA: \n");
	for (i=0;i<N1;i++){
		printf("%d ", pa[i]);
	}	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
