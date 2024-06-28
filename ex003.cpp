#include <stdio.h>

int main(){
	
	float a, b, c, media;
	
	printf("digite tres numeros: ");
	
	scanf("%f %f %f", &a, &b, &c);
	
	media = (a+b+c)/3;
	
	printf("a media dos numeros e: %.2f", media);
	
	return 0;
}