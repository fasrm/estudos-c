Ola_Mundo.cpp

#include <stdio.h>
#include <stdlib.h>

int main()
{

	/*
	declarações: todas as variáveis utilizadas precisam ser declaradas
	*/

	//int idade;

	/* programa */
	printf("Digite a sua idade: ");
	scanf_s("%d", &idade);

	printf("\n :-o %d Anos??? Achei que voce tinha uns %d anos!\n\n", idade, idade * 2);

	/* fim do programa */
	system("pause");
	return 0;

	/*
	printf("Ola Mundo!\n");
	printf("Esse eh o meu primeiro algoritmo!!!! \o/\o/\o/");

	system("pause");

	return 0;
	*/
	
}
