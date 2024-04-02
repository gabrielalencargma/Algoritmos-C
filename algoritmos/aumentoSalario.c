#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int i, qtdFunc;

	printf("De quantos funcionários você deseja aumentar o salário? ");
	// Definindo da quantidade de funcionários.
	scanf(" %d", &qtdFunc);

	// Definindo o tamanho do vetor salario pela quantidade de funcionários.
	float salario[qtdFunc];
	
	// Estrutura de repetição para definir o salário de cada funcionário.
	for (i=0; i<qtdFunc; ++i) {
		printf("Digite o salário do funcionário %d: ", i + 1);
		scanf(" %f", &salario[i]);
	}
	
	// Estrutura de repetição para aumentar o sálario de cada funcionário
	for (i=0; i<qtdFunc; ++i) {
		// Se o salário for menor que 2000 reais, havéra um aumento de 30%. Senão, haverá um aumento de 10%.
		if (salario[i] <= 2000){
			salario[i] *= 1.30;
			printf("O salário do funcionario %d aumentou para: R$%.2f \n", i + 1, salario[i]);
		} else{
			salario[i] *= 1.10;
			printf("O salário do funcionario %d aumentou para: R$%.2f \n", i + 1, salario[i]);
		}
	}

	system("pause");
	
	return 0;
}