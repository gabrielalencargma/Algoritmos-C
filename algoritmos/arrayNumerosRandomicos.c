#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	srand(time(NULL));
	
	int array[5][5], i, j;
	
	// Estrutura for para contar as linhas.
	for(i = 0; i < 5; i++) {
		// Estrutura for para contar as colunas.
		for(j = 0; j < 5; j++) {
			// O índice atual de "array[][]" recebe um número randomico.
			array[i][j] = (rand() % 100);

			if(array[i][j] < 10) {
				printf("0%d ", array[i][j]); // Print do número com um 0 à esquerda, caso ele seja menor que 10.
			} else {
				printf("%d ", array[i][j]);
			}
		}
		printf("\n");
	}
}