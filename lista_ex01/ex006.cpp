#include <stdio.h>

int main(){
	
	float raio, pi=3.14, area;
	
	printf("digite o raio do circulo: ");
	
	scanf("%f", &raio);
	
	area = pi*(raio*raio);
	
	printf("a area do circulo e: %.2f", area);
	
	return 0;
}