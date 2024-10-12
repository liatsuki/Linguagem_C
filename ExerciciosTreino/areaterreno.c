/* Pedir ao utilizador as dimensões de um terreno e calcule a área. */

#include <stdio.h>

int main() {
	
	double comp, larg, area;
	
	printf("Comprimento: \n");
	scanf("%lf", &comp);
	printf("Largura: \n");
	scanf("%lf", &larg);
	
	area = comp * larg;
	
	printf("O comprimento do terreno é: %.2lf metros\n", comp);
	printf("A largura do terreno é: %.2lf metros\n", larg);
	printf("A área do terreno é: %.2lf metros quadrados\n", area);
}