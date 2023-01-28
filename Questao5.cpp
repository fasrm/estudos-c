/*
Questão 5
Considere um algoritmo que vai abrir um arquivo .txt e mostrar um erro caso o mesmo não exista
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

	FILE* arquivo;
	errno_t err;
	int numero;

	err = fopen_s(&arquivo, "teste.txt", "a"); // modo w ele cria o arquivo, r busca se existe, a faz append

	if (err == 0) {
		printf("Digite um numero inteiro: ");
		do {
			numero = getchar();
			fputc(numero, arquivo);
		} while (numero != '\n');
	}
	else {
		printf("ERRO!!! Arquivo NAO foi ABERTO!!!\n\n");
	}

	if (arquivo) {
		err = fclose(arquivo);
		if (err == 0) {
			printf("\nArquivo FECHADO!\n\n");
		}
		else {
			printf("Arquivo nao foi FECHADO!\n\n");
		}
	}

	system("pause");
	return 0;
}
