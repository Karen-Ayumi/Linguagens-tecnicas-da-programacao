#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
    int numero[100], i, j, aux;

    
    for (i = 0; i < 100; i++) {
        scanf("%d", &numero[i]);
    }

    
    printf("Ordem inversa:\n");
    for (i = 99; i >= 0; i--) {
        printf("%d ", numero[i]);
    }

   //porcaria de (Bubble Sort)
    for (i = 0; i < 99; i++) {
        for (j = 0; j < 99 - i; j++) {
          
		    if (numero[j] < numero[j + 1]) {
                aux = numero[j];
                numero[j] = numero[j + 1];
                numero[j + 1] = aux;
            }
        }
    }

    printf("\nOrdenados do maior para o menor:\n");
    for (i = 0; i < 100; i++) {
        printf("%d ", numero[i]);
    }
	
	//
	
	
	
	
	
	
	return 0;
}
