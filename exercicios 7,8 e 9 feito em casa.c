#include <stdio.h>
#include <stdlib.h>

float calc_Inss(float salarioB){
    if (salarioB <= 1412.00) return salarioB * 0.075;
    else if (salarioB <= 2666.68) return salarioB * 0.09;
    else if (salarioB <=  4000.03) return salarioB * 0.12;
    else return salarioB * 0.14;
}

float calc_Irpf(float salario_base ){
    if (salario_base <= 2259.20) return 0.0 ;
    else if (salario_base <= 2826.65) return (salario_base * 0.075) - 169.44;
    else if (salario_base <= 3751.05) return (salario_base * 0.15) - 381.44;
    else if (salario_base<= 4664.68) return (salario_base * 0.225) - 662.77;
    else return (salario_base * 0.275) - 896.00;
   
}


int main(int argc, char *argv[])
{
   
float salarioB, desconto1, salario_base, desconto2, horas, Vhoras, salario_liquido;



printf("Insira as horas trabalhadas: ");
scanf ("%f", &horas);
printf("\nE o valor das horas trabalhadas: ");
scanf("%f", &Vhoras);
salarioB = horas *Vhoras;
desconto1 = calc_Inss(salarioB);
salario_base = salarioB - desconto1 ;
desconto2 = calc_Irpf(salario_base);
salario_liquido = salario_base - desconto2;
printf( "============================================\n" 
        "RECIBO DE PAGAMENTO DE SALÁRIO (CONTRA-CHEQUE\n"
        "============================================\n"
        "Salário Bruto (Horas x Valor): R$ %f \n"
        "(-) Desconto INSS:             R$ %f \n"
        "(-) Desconto IRPF:             R$ %f \n"
        "--------------------------------------------\n"
        "LÍQUIDO A RECEBER:             R$ %f \n" 
        "============================================", salarioB, desconto1, desconto2, salario_liquido);   
