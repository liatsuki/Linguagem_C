/* Determina se um número é par ou impar */

#include <stdio.h>

int main() {
	int numero;
	printf("Indique um numero: ");
	scanf("%d", &numero);
	
	if(numero%2==0)
		printf("par");
	else
		printf("impar");
}