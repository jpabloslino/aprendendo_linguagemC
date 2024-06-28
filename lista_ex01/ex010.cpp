#include <stdio.h>

int main(){
	
	int hora, min, sec, mins;
	
	printf("Digite a quantidade de horas: ");
	scanf("%d", &hora);
	
	printf("Digite a quantidade de minutos: ");
	scanf("%d", &min);
	
	mins = hora*60;
	min = mins+min;
	sec = min*60;
		
	printf("As horas em minutos sao: %d\n", mins);
	printf("A quantidade total de minutos e: %d\n", min);
	printf("O total de segundo e: %d", sec);
	
	return 0;
}