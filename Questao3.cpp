/*
Questão 3
Considere um algoritmo que vai receber dois números inteiros e, ao final,
mostre a soma, a subtração, a multiplicação e a divisão desses números.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

	int num1, num2, soma, subtracao, mult, divi;

	printf("Digite o primeiro numero: ");
	scanf_s("%d", &num1);

	printf("Digite o segundo numero: ");
	scanf_s("%d", &num2);

	printf("\n");

	soma = num1 + num2;
	subtracao = num1 - num2;
	mult = num1 * num2;
	divi = num1 / num2;

	printf("Soma..........: %d\n", soma);
	printf("Subtracao.....: %d\n", subtracao);
	printf("Multiplicacao.: %d\n", mult);
	printf("Divisao.......: %d\n", divi);

	system("pause");
	return 0;
}
