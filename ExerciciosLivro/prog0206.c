/* Escreva um programa que solicite ao utilizador a idade, o montante a depositar e o nº de conta em que se quer realizar o depósito, declarando as variáveis como short, int e long. */

#include <stdio.h>

int main() {
	
	int idade;
	short valor;  // Número inteiro
	long conta;
	
	printf("Idade:\n");
	scanf("%d", &idade);
	
	printf("Montade a depositar:\n");
	scanf("%hd", &valor);
	
	printf("Nº de conta:\n");
	scanf("%ld", &conta); // Não está a funcionar
	
	printf("A sua idade é de %d anos e quer depositar %hd euros na conta %ld", idade, valor, conta);
}