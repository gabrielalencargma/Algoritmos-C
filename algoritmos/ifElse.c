#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num1;
	
	printf("Digite um n�mero: ");
	scanf("%i", &num1);
	
	if(num1 > 10) {
		printf("O n�mero � maior que 10. \n");
	} else if(num1 == 10) {
		printf("O n�mero � igual a 10. \n");
	} else {
		printf("O n�mero � menor que 10. \n");
	}
	
	system("pause");

	return 0;
}