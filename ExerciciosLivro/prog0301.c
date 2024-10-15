/* Implemente um programa que solicite ao utilizador dois inteiros e, em seguida, aplique todos os operadores relacionais do C aos inteiros lidos. */

#include <stdio.h>

int main() {
	int n1, n2, igual, maior, maiorigual, menor, menorigual, diferente;
	
	printf("Verdadeiro (1) e Falso (0)\n");
	
	printf("Introduza um 1ºvalor:");
	scanf("%d", &n1);
	
	printf("Introduza um 2ºvalor:");
	scanf("%d", &n2);
	
	igual = n1 == n2;
	maior = n1 > n2;
	maiorigual = n1 >= n2;
	menor = n1 < n2;
	menorigual = n1 <= n2;
	diferente = n1 != n2;
	
	printf("%d == %d = %d\n", n1, n2, igual);
	printf("%d > %d = %d\n", n1, n2, maior);
	printf("%d >= %d = %d\n", n1, n2, maiorigual);
	printf("%d < %d = %d\n", n1, n2, menor);
	printf("%d <= %d = %d\n", n1, n2, menorigual);
	printf("%d != %d = %d", n1, n2, diferente);
}
