/* Escreva um programa que leia um carácter e a seguir o escreva no ecrã */

#include <stdio.h>

int main() {
	char caracter;
	
	printf("Introduza um carácter:");
	scanf("%c", &caracter);
	
	printf("O carácter introduzido foi %c.", caracter);
}