#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num1;
	
	printf("Digite o primeiro n�mero: ");
	scanf("%i", &num1);
	
	if(num1 > 10) {
		printf("O n�mero � maior que 10");
	} else if(num1 == 10) {
		printf("O n�mero � igual a 10");
	} else {
		printf("O n�mero � menor que 10");
	}
	
	return 0;
}
