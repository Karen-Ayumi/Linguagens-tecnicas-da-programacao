#include <stdio.h>
#include <stdlib.h>

/* %f=float d=int %c=char %lf=double*/

int main(int argc, char *argv[]) {
    int a,b,c;
	a = 8;
	b = 19;
	c = a+b;
	
	printf("A soma de %d + %d = %d", a,b,c); // %d=numero inteiro, ligando as posiçoes escritas de a,b,c
	
	return 0;
}
