/*
Crie um algoritmo com ponteiro e uma struct com três membros e imprima
as instâncias da struct com ponteiro.
*/

#include <stdio.h>
#include <stdlib.h>


int main() {

	struct aulaPratica
	{
		int x;
		int y;
		int z;
		int w;
	}; struct aulaPratica numero, * p_numero;

	p_numero = &numero;

	//*p_numero = &numero;

	//*p_numero.x = 890;

	/*
	(*p_numero).x = 890;
	(*p_numero).y = 4578;
	(*p_numero).z = 45;*/

	/*
	p_numero->x = 777;
	p_numero->y = 555;
	p_numero->z = 888;
	*/

	int numeroFora1;
	int numeroFora2;
	int numeroFora3;

	printf("Digite o primeiro numero inteiro: ");
	scanf_s("%d", &numero.x);

	printf("Digite o segundo numero inteiro: ");
	scanf_s("%d", &numero.y);

	printf("Digite o terceiro numero inteiro: ");
	scanf_s("%d", &numero.z);

	numero.w = (numero.x) - (numero.y) + (numero.z);

	numeroFora1 = (numero.w) * 2;
	numeroFora2 = (numeroFora1 + numero.y);

	printf("Dado de X = %i\n", numero.x);
	printf("Dado de Y = %i\n", numero.y);
	printf("Dado de Z = %i\n", numero.z);
	

	system("pause");
	return 0;
}
