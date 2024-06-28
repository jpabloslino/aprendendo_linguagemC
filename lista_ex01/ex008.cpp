#include <stdio.h>

int main(){
	
	float larg, comp, area, potencia;
	
	printf("digite a largura e o comprimento do terreno em metros quadrados: ");
	scanf("%f %f", &larg, &comp);
	
	area = larg*comp;
	
	potencia = area * 18;
	
	printf("a potencia de iluminacao necessaria sera de: %.2f W", potencia);
	
	return 0;
}