/* Faça um programa que coloque Olá Mundo! numa linha e em bom português (com acentos), e que indique o tamanho em bytes (operador sizeof) dos seguintes tipos de dados: char; short; int; long; long long; float; double; long double. Coloque um valor em cada linha. */

/* Execução do programa:
Olá Mundo!
sizeof(char): xx
sizeof(short): xx
sizeof(int): xx
sizeof(long): xx
sizeof(long long): xx
sizeof(float): xx
sizeof(double): xx
sizeof(long double): xx */

#include <stdio.h>

int main() {

	printf("Olá Mundo!");
	
	printf("\nsizeof(char): %d", sizeof(char));
	printf("\nsizeof(short): %d", sizeof(short));
	printf("\nsizeof(int): %d", sizeof(int));
	printf("\nsizeof(long): %ld", sizeof(long));
	printf("\nsizeof(long long): %lld", sizeof(long long));
	printf("\nsizeof(float): %d", sizeof(float));
	printf("\nsizeof(double): %d", sizeof(double));
	printf("\nsizeof(long double): %d", sizeof(long double));
}

