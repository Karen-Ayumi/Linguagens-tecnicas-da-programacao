#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv [])
{ 

int n1, n2, n3, n4, aux;
 printf("Insira os valores para A, B, C, D respectivamente: ");
 scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

 aux = n1;
 n1 = n3;
 n3 = n4;
 n4 = n2;
 n2 = aux;

 printf("Os valores permutados na ordem C, A, D, B sao: %d %d %d %d", n1, n2, n3, n4);

//2
float preco, VP, VPA, totalVPA, totalPVP;

printf("Insira o valor patrimornial da empresa em R$: ");
scanf("%f", &VP);

printf("Insira o numero total de acoes: ");
scanf("%f", &VPA);

printf("Insira o preco por cada acao: ");
scanf("%f", &preco);

totalVPA = VP / VPA;
totalPVP = preco / totalVPA;

if (totalPVP < 0.0){
    printf("PESSIMA");
}
else if (totalPVP < 0.8 ){
    printf ("OTIMA");
}
else if (totalPVP <= 1.2){
    printf("INDIFERENTE");
}
else if (totalPVP <= 2.0) {
    printf("BOA");
}
else printf("RUIM");


return 0;
}
