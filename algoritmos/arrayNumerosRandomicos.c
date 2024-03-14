#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	srand(time(NULL));
	
	int array[5][5], i, j;
	
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 5; j++) {
			array[i][j] = (rand() % 100);
			if(array[i][j] < 10) {
				printf("0%d ", array[i][j]);
			} else {
				printf("%d ", array[i][j]);
			}
		}
		printf("\n");
	}
}