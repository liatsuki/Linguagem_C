/* Crie um programa para ler 3 notas e mostrar a média delas. */

#include <stdio.h>

int main() {
	
	float nota1, nota2, nota3, media;
	
	printf("Vamos calcular a média de 3 notas\n");
	printf("Escreva a sua 1ºnota:\n");
	scanf("%f", &nota1);
	printf("Escreva a sua 2ºnota:\n");
	scanf("%f", &nota2);
	printf("Escreva a sua 3ºnota:\n");
	scanf("%f", &nota3);
	
	media = (nota1 + nota2 + nota3) / 3;
	
	printf("1ºnota:%.1f \n2ºnota:%.1f \n3ºnota:%.1f \nMédia: %.1f", nota1, nota2, nota3, media);
}