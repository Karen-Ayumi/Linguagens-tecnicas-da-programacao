#include <stdio.h>
#include <stdlib.h>

 /*
 tipo nome (Lista de parametros){
     comandos
     comandos...
  }
 */
 
 void exerc3 (){
    float reais, dolares, cotacao;
    printf("\nInsira o valor em reais: ");
    scanf("%f", &reais);
    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cotacao);
      dolares = reais / cotacao;
    printf("Valor em dolares: %.2f\n", dolares);
 }

  void exerc4 (){
  	float C, F;
printf("Coloque o valor em celsius: ");
scanf("%f", &C);
F = C * (9.0/5.0) + 32.0;
printf("%f", F);
  }
  
  void exerc8 (){
  int horas, minutos, segundos, restominutos;
printf("Coloque os segundos: ");
scanf("%d", &segundos);
horas = segundos / 3600;
restominutos = segundos % 3600;
minutos = restominutos /60;
segundos = restominutos % 60;
printf("%d:%d:%d", horas, minutos, segundos);
  }

int main(int argc, char *argv[]) {
	
	int op;
	printf ("Insira qual exercicio quer resolver: [3|4|8]\n");
	scanf ("%d", &op);
	
	switch(op){

   case 3:
         exerc3();
    break;

    case 4:
        exerc4();
      break;

	case 8:
         exerc8();
     break;
    
    }
 
  return 0;
}
