#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num1;
	
	printf("Digite um número: ");
	scanf("%i", &num1);
	
	if(num1 > 10) {
		printf("O número é maior que 10. \n");
	} else if(num1 == 10) {
		printf("O número é igual a 10. \n");
	} else {
		printf("O número é menor que 10. \n");
	}
	
	system("pause");

	return 0;
}