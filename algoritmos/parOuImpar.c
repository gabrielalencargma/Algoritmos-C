#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	
	// Se o resto da divis�o for 0, o n�mero informado � par.
	if(num % 2 == 0) {
		printf("O n�mero %d � par! \n", num);
	} else {
		printf("O n�mero %d � impar! \n", num);
	}

	system("pause");

	return 0;
}