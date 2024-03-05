#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	
	if(num % 2 == 0) {
		printf("O n�mero %d � par!", num);
	} else {
		printf("O n�mero %d � impar!", num);
	}

	return 0;
}
