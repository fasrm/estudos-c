/*
Questão 6
Considere um algoritmo que faz a leitura do texto de um arquivo .txt
usando a função fgetc().
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

	FILE* arquivo;
	char locaMemoria[81];
	int  i, ch;

	// Abrir o arquivo para ler a linha
	fopen_s(&arquivo, "teste.txt", "r");
	if (arquivo == NULL)
		exit(0);

	// Leia os priemiros 80 caracteres e coloque-os em "LocaMemoria"
	ch = fgetc(arquivo);

	/*feof verifica o indicador de fim de arquivo (EOF)
	do fluxo e retorna um valor diferente de zero se este indicador
	estiver setado. */
	for (i = 0; (i < 80) && (feof(arquivo) == 0); i++)
	{
		locaMemoria[i] = (char)ch;
		ch = fgetc(arquivo);
	}

	// Adicionar NULL ao final da String
	locaMemoria[i] = '\0';

	printf("%s\n\n\n", locaMemoria);
	fclose(arquivo);
	system("pause");
	return 0;
}
