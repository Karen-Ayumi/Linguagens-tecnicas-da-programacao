#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define bandeira 9
#define bomba 0
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	srand (time(NULL));
	int campo[9][9];
	int casax, casay, i , j;

    // limpa a matriz e insere 9 em todas as posicoes
	for (i=0; i<9; i++){
		for (j=0; j<9; j++){
			campo[i][j] = 9;
		}
	}
	
	
	// preenche com bombas no jogo 
	for(i=0; i<9; i++){
		for (j=0; j<9; j++){
			if (rand()%10==0)
			campo[i][j]=0;
		}
	}
	printf("Campo Minado\n---------------------------------------------------------------------------------\n");
	for (i=0; i<9; i++){
		printf("\t \t \t");
		for (j=0; j<9; j++){
			if(campo[i][j]==0)printf("|9");
			else printf("|%d", campo[i][j]);
			printf("|%d", campo[i][j]);
		}
		printf("|\n");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	return 0;
}
