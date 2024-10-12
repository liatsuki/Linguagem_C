/* Escreva um programa que exiba um caractere, um número inteiro e um número decimal (float), todos na mesma linha. */

#include <stdio.h>

int main() {
	
	char a = 'a';
	int x = 1;
	float y = 1.2;

	printf("%c %d %.1f", a, x, y);
}