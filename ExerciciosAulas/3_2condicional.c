/* Determina se um ano é normal ou bissexto */

#include <stdio.h>

int main() {
	int ano;
	printf("Indique ano: ");
	scanf("%d", &ano);
	
	/* Teste de ano bissexto */
	if(ano%4==0 && ano%100!=0 || ano%400==0)
		printf("Bissexto");
	else
		printf("Normal");
}