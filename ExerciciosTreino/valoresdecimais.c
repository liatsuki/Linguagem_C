/* Faça um programa que imprima os seguintes valores:
- Um número inteiro
- Um número decimal com 2 casas decimais
- Um número decimal com 5 casas decimais */

#include <stdio.h>

int main(){
	
	int x = 4;
	float y = 1.67;
	float z = 5.02424;
	
	printf("x: %d \ny: %.2f \nz: %.5f", x, y, z);
	
}