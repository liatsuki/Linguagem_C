/* Implemente um programa que indique se o inteiro lido é zero ou não */

#include <stdio.h>

int main() {
	int a;
	
	printf("Introduza um número: ");
	scanf("%d", &a);
	
	if(a != 0) // Operador diferente
		printf("%d não é zero", a);
	else
		printf("%d é zero", a);
}