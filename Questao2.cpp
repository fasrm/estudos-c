/*
Questão 2
Considere um algoritmo em que o usuário vai digitar a quantidade de repetições
e imprimir na tela o número de vezes em que foi executado o loop em doisalgoritmos - o
primeiro usando a estrutura de repetição While e o segundo usando a estrutura de repetição For.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

	int num, cont=1, contfor;

	printf("Quantas repeticoes: ");
	scanf_s("%d", &num);

	printf("\n");

	// Utilizando While
	/*
	while (cont <= num) {
		printf("Repetiu %d vez(es)\n", cont);
		cont++; // sem o cont ele repetirá eternamente
	}*/

	// Utilizando For
	for (contfor = 1; contfor <= num; contfor++) {
		printf("Repetiu %d vez(es)\n", contfor);
	}

	system("pause");
	return 0;
}
