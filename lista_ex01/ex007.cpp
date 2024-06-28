#include <stdio.h>

int main(){
	
	int hr;
	float salMnm, valHora, salario, salBruto, imposto;
	
	printf("digite o numero de horas trabalhadas: ");
	scanf("%d", &hr);
	
	printf("digite o valor do salario minimo: ");
	scanf("%f", &salMnm);
	
	valHora = salMnm*0.02;
	
	salBruto = hr*valHora;
	
	imposto = salBruto*0.05;
	
	salario = salBruto - imposto;
	
	printf("salario a receber: RS%.2f", salario);
	
	return 0;
}