/*
Questão 7
Crie um algoritmo que coloque os dias da semana em forma de identificadores
com a estrutura ENUM.
*/

#include <stdio.h>
#include <stdlib.h>

enum semana { domingo = 1, segunda, terca, quarta = 15, quinta, sexta, sabado };

int main() {

	enum semana a, b, c, d, e, f, h;

	a = domingo;
	b = segunda;
	c = terca;
	d = quarta;
	e = quinta;
	f = sexta;
	h = sabado;

	printf("DIAS DA SEMANA\n\n");

	printf("Identificador de domnigo = %d\n", a);
	printf("Identificador de segunda = %d\n", b);
	printf("Identificador de terca   = %d\n\n", c);
	printf("Identificador de quarta  = %d\n", d);
	printf("Identificador de quinta  = %d\n", e);
	printf("Identificador de sexta   = %d\n", f);
	printf("Identificador de sabado  = %d\n", h);
	

	system("pause");
	return 0;
}
