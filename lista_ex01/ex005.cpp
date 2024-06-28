#include <stdio.h>

int main(){
	
	float sal, novoSal, aum;
	
	printf("digite o salario do funcionario: ");
	
	scanf("%f", &sal);
	
	printf("digite o percentual de aumento: ");
	
	scanf("%f", &aum);
	
	novoSal = sal/100*aum+sal;
	
	printf("o novo salario sera de: %.2f", novoSal);
	
	return 0;
}