/* Escreva um programa em C que solicite um determinado número de segundos, e em seguida indique quantas horas, minutos e segundos esse valor representa. */

/* Neste programa o nº de horas é calculado através do quociente da divisão inteira entre o nº total de segundos e o nº de segundos que uma hora tem (3600).
O nº de minutos, é calculado através do quociente da divisão dos restantes segundos (os quais podem ser obtidos através do resto da divisão anterior) dividido pelo nº de segundos que tem um minuto (60). 
O nº de segundos é simplesmente obtido pelo resto da divisão entre o nº total de segundos e 60 (pois são apenas aqueles segundos que não cabem num minuto. */

#include <stdio.h>

int main() {
	
	int nseg, hora, minuto, segundo;
	
	printf("Introduza o nº de segundos:\n");
	scanf("%d", &nseg);
	
	hora = nseg / 3600;
	minuto = (nseg % 3600) / 60;
	segundo = nseg % 60;
	
	printf("Nº de segundos introduzido: %d\n", nseg);
	printf("Horas: %d\n", hora);
	printf("Minutos: %d\n", minuto);
	printf("Segundos: %d", segundo);
}