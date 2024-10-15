/* Escreva um programa em C que solicite ao utilizador dois inteiros e apresente o resultado da realização das operações aritméticas tradicionais. */

#include <stdio.h>

int main() {
	int a, b, soma, subtr, mult, divis;
	
	printf("Introduza o 1ºvalor:");
	scanf("%d", &a);
	
	printf("Introduza o 2ºvalor:");
	scanf("%d", &b);
	
	soma = a + b;
	subtr = a - b;
	mult = a * b;
	divis = a / b;
	
	printf("Operações Aritméticas com %d e %d\n", a, b);
	printf("%d + %d = %d\n", a, b, soma);
	printf("%d - %d = %d\n", a, b, subtr);
	printf("%d x b = %d\n", a, b, mult);
	printf("%d : %d = %d", a, b, divis);
}