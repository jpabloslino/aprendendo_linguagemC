#include <stdio.h>

int main(){
	
	float real, dolar=5.57, euro=5.98, libra=7.08;
	
	printf("digite a quantidade em reais: ");
	
	scanf("%f", &real);
	
	printf("voce tera:\n");
	printf("%.2f dolares\n", real/dolar);
	printf("%.2f euros\n", real/euro);
	printf("%.2f libras", real/libra);
	
	return 0;
}