/* Escreva um programa que calcule o perímetro e a área de uma circunferência. */

// Perímetro = 2 x Pi x raio
// Área = Pi x raio^2

#include <stdio.h>

int main() {
	
	float raio, perimetro;
	double pi = 3.14159;
	float area;
	
	printf("Introduza o raio da circunferência:");
	scanf("%f", &raio);
	
	area = pi * raio * raio;
	perimetro = 2 * pi * raio;
	
	printf("Raio: %.2f\n", raio);
	printf("Área: %.2f\n", area);
	printf("Perímetro: %.2f", perimetro);
}