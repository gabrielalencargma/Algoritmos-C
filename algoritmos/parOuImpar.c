#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Digite um número: ");
	scanf("%d", &n); // "n" recebe o número digitado pelo usuário.
	
	// Se o resto da divisão for 0, "n" é par. Senão, "n" é impar.
	if(n % 2 == 0) {
		printf("O número %d é par! \n", n);
	} else {
		printf("O número %d é impar! \n", n);
	}

	system("pause");

	return 0;
}