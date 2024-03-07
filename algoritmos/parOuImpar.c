#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	// Se o resto da divisão for 0, o número informado é par.
	if(num % 2 == 0) {
		printf("O número %d é par!", num);
	} else {
		printf("O número %d é impar!", num);
	}

	return 0;
}
