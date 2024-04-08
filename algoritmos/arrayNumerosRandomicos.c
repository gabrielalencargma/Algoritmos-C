#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	srand(time(NULL));
	
	int array[5][5], i, j;
	
	// Estrutura for utilizando "i" para escrever linha por linha.
	for(i = 0; i < 5; i++) {
		// Estrutura for utilizando "j" para escrever nas colunas de cada linha.
		for(j = 0; j < 5; j++) {
			// Definindo um número randomico para o indice da coluna e linha atual.
			array[i][j] = (rand() % 100);

			// Print do número, e caso ele seja menor que 10, será adicionado um zero à esquerda.
			if(array[i][j] < 10) {
				printf("0%d ", array[i][j]);
			} else {
				printf("%d ", array[i][j]);
			}
		}
		printf("\n");
	}
}