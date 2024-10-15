/* Implemente um programa que indique se um número é positivo (>=0) ou negativo. */

#include <stdio.h>

int main() {
	
	int a;
	
	printf("Introduza um valor: ");
	scanf("%d", &a);
	
	if(a >= 0)
		printf("%d é um número positivo", a);
	else 
		printf("%d é um número negativo", a);
}