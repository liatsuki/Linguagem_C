/* Escreve um programa que:
- Leia o valor do salário médio em Portugal (ex 1350€).
- Leia o valor do salário de uma pessoa.
- Calcule a percentagem que o salário dessa pessoa representa em relação ao salário médio.
- Imprima o resultado da percentagem. */

#include <stdio.h>

int main() {
	
	int salariomedio = 1350;
	int salariouser, perc;
	
	printf("Escreva o seu salário: \n");
	scanf("%d, &salariouser");
	
	perc = salariouser * salariomedio / 100;
	
	printf("O seu salário representa %d%% do salário médio em Portugal.", perc);
}