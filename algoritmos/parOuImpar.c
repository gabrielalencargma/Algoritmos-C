#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Digite um n�mero: ");
	scanf("%d", &n); // "n" recebe o n�mero digitado pelo usu�rio.
	
	// Se o resto da divis�o for 0, "n" � par. Sen�o, "n" � impar.
	if(n % 2 == 0) {
		printf("O n�mero %d � par! \n", n);
	} else {
		printf("O n�mero %d � impar! \n", n);
	}

	system("pause");

	return 0;
}