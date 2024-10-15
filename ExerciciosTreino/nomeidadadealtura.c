/* Faça um programa que exiba o nome, idade e altura de uma pessoa em linhas separadas. Fazer com valores fixos ou pedir ao utilizador. */

#include <stdio.h>

int main(){
	char* n = "Alice";
	int i = 30;
	double a = 1.68;
	
	printf("Nome: %s\nIdade: %d\nAltura: %.2f", n, i, a);
}

// %s é usado para strings, %d para inteiros, e %.2f para floats com duas casas decimais