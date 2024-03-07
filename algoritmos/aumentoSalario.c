#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float salario, novoSalario;
	
	printf("Digite o salário do funcionário: ");
	scanf("%f", &salario);
	
	if (salario <= 2000) {
		novoSalario = salario * 1.30;
	} else {
		novoSalario = salario * 1.10;
	}
	
	printf("O salário aumentou de %.2f reais para %.2f reais.", salario, novoSalario);
	
	return 0;
}