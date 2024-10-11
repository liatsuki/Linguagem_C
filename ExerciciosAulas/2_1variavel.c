/* Trocar o valor de duas variáveis */

#include <stdio.h>

int main()
{
	/* Declaração de três variáveis de valor inteiro */
	int x=3;
	int y=7;
	int aux;

	/* Trocar o valor de x com y */
	aux=x;
	x=y;
	y=aux;

	// Mostrar os valores em x e em y
	printf("x: %d, %d", x, y);
}