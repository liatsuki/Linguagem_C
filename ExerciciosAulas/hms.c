/* Faça um programa que leia as horas, minutos e segundos, e calcule o número de segundos que passaram desde o início do dia. */

/* Execução de exemplo: 
C:\>hms
Calculo do numero de segundos desde o inicio do dia. 
Hora: 2
Minuto: 15
Segundos: 30
Numero de segundos desde o inicio do dia: 8130 */

#include <stdio.h>

int main() {
	int hora, minuto, segundo, totalseg;
	
	printf("Calculo do numero de segundos desde o inicio do dia.\n");
	
	printf("Hora: ");
	scanf("%d", &hora);
	
	printf("Minuto: ");
	scanf("%d", &minuto);
	
	printf("Segundos: ");
	scanf("%d", &segundo);
	
	totalseg = (hora * 3600) + (minuto * 60) + segundo;
	
	printf("Numero de segundos desde o inicio do dia: %d", totalseg);
}