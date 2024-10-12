/* Escreva um programa que exiba a seguinte sequência de números, todos na mesma linha: 1 2 3 4 5 */

#include <stdio.h>

int main() {
	
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;
	int e = 5;
	
	printf("%d %d %d %d %d", a, b, c, d, e);
}

/* Cada especificador de formato %d corresponde a uma variável que desejas imprimir. Portanto, se tens cinco variáveis inteiras, deves usar cinco %d no printf. */