#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float salario, novoSalario;
	
	printf("Digite o sal�rio do funcion�rio: ");
	scanf("%f", &salario);
	
	if (salario <= 2000) {
		novoSalario = salario * 1.30;
	} else {
		novoSalario = salario * 1.10;
	}
	
	printf("O sal�rio aumentou de R$%.2f para R$%.2f. \n", salario, novoSalario);

	system("pause");
	
	return 0;
}