#include <stdio.h>

int main(){
	
	float sal,novoSal;
	
	printf("digite o salario atual do funcionario: ");
	
	scanf("%f", &sal);
	
	novoSal = sal*0.15+sal;
	
	printf("o novo salario sera de: %.2f", novoSal);
	
	return 0;
}