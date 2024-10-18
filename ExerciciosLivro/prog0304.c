/* Implemente um programa que adicione 1000€ ao salário de um individuo, caso este seja inferior a 100 000€ */

#include <stdio.h>

int main() {
	int salario;
	
	printf("Salário: ");
	scanf("%d", &salario);
	
	if(salario < 100000) {
		salario = salario + 1000;
		printf("Foi adicionado 1000 euros no seu salário.\n");
	} else {
		printf("Não merece os 1000 euros a mais.\n");
	}
	
	printf("Salário Final: %d euros.", salario);
}