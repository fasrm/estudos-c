/*
Crie uma struct de ponteiros com três membros e imprima o endereço
das variáveis com o ponteiro e com o operador &.
*/

#include <stdio.h>
#include <stdlib.h>

struct calendario {
	int *dia;
	int *mes;
	int *ano;
}; struct calendario atual;

int main() {

	int diaT = 24;
	int mesT = 12;
	int anoT = 2018;

	atual.dia = &diaT;
	atual.mes = &mesT;
	atual.ano = &anoT;

	printf("Endereco da variavel diaT = %p\n", &diaT);
	printf("Endereco da varial diaT com ponteiro = %p\n\n\n", atual.dia);
	printf("Endereco da variavel mesT = %p\n", &mesT);
	printf("Endereco da varial mesT com ponteiro = %p\n\n\n", atual.mes);
	printf("Endereco da variavel anoT = %p\n", &anoT);
	printf("Endereco da varial anoT com ponteiro = %p\n\n\n", atual.ano);

	printf("O dia, mes e ano\n");
	printf("Dia: %d\n", *atual.dia);
	printf("Mes: %d\n", *atual.mes);
	printf("Ano: %d\n", *atual.ano);

	system("pause");
	return 0;
}
