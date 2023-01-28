Receber dois numeros
#include <stdio.h>
#include <stdlib.h>

int main(){

	int n1, n2;

	printf("Digite o primeiro numero: ");
	scanf_s("%d", &n1);

	printf("Digite o segundo numero: ");
	scanf_s("%d", &n2);

	//n1 = n1 + 2;
	//n2 = n2 + 3;

	if (n1 > n2) {
		printf("\n O numero %d eh maior que %d\n\n", n1, n2);
	}
	else {
		printf("\n O numero %d eh menor que %d\n\n", n1, n2);
	}



	printf("Os numeros digitados sao: %d e %d\n", n1, n2);

	system("pause");
	return 0;
}
