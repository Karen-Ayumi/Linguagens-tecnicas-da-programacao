#include <stdio.h>
#include <stdlib.h>

int main( int argc, char * argv[]){

  //1
float altura, peso, IMC;

printf("Insira seu peso em kg: ");
scanf("%f",&peso);

printf("Insira sua altura em m: ");
scanf("%f", &altura);

IMC = peso / (altura * altura);

if (IMC <18.5){
    printf("Voce esta abaixo do peso");
}
else if(IMC < 25.0 ){
    printf("Voce esta com seu peso normal");
}
else if(IMC < 30.0){
    printf("Voce esta com sobrepeso");
}
else printf("Voce esta com obesidade");

  //












return 0;
}
