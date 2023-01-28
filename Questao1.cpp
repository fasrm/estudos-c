/*
Questão 1
Considere um algoritmo que vai receber dois dados numéricos reais: as duas notas
que o aluno precisará para passar. Faça a média dos dois números e, se for maior ou igual a 7.0,
o algoritmo vai imprimir uma mensagem de aprovado; caso contrário, a mensagem que vai aparecer
será reprovado
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

	float nota1, nota2, media;
	
	printf("Digite a primera nota: ");
	scanf_s("%f", &nota1);

	printf("Digite a segunda nota: ");
	scanf_s("%f", &nota2);

	media = (nota1 + nota2) / 2;

	if (media >= 7) {
		printf("\nAPROVADO\n\n");
	}
	else {
		printf("\nREPROVADO\n\n");
	}

	printf("\nMedia = %.2f\n\n", media);

	system("pause");
	return 0;
}
