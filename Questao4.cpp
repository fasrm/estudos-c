/*
Questão 4
Considere um algoritmo que faz a contagem crescente de 1 até 30,
de 3 em 3, e imprima na tela o resultado.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

	int num, cont;

	for (cont = 1; cont <= 30; cont += 3) {
		printf("%d\n", cont);
	}

	system("pause");
	return 0;
}
