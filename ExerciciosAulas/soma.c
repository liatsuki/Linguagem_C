/* Complete o programa que soma os primeiros N números inteiros, sendo N definido pelo utilizador. */

/* Calculo da soma dos primeiros N numeros.
Indique N:10
 
  adicionar 1, parcial 1
  adicionar 2, parcial 3
  adicionar 3, parcial 6
  adicionar 4, parcial 10
  adicionar 5, parcial 15
  adicionar 6, parcial 21
  adicionar 7, parcial 28
  adicionar 8, parcial 36
  adicionar 9, parcial 45
  adicionar 10, parcial 55
Total: 55 */

/* Se o utilizador disser que N = 10, o programa vai somar os números de 1 até 10 e parar.
Se N = 100, vai somar de 1 até 100 e depois mostrar o resultado. */

#include <stdio.h>

int main() {
    int n, i, soma;

    printf("Calculo da soma dos primeiros N numeros.\nIndique N:");
    scanf("%d", &n);

    soma = 0;  // Inicializa a soma com 0
    i = 1;     // Começa a contar a partir de 1

    // Usar um ciclo while para somar
    while (i <= n) {
        soma += i;  // Adiciona i à soma atual
        printf(" adicionar %d, parcial %d\n", i, soma);  // Imprime o valor atual e a soma parcial
        i++;  // Incrementa i para o próximo número
    }

    printf("Total: %d\n", soma);  // Imprime o resultado final

    return 0;  // Termina o programa
}
