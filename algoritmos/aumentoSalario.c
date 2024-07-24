#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int i, qtdFunc;

	printf("De quantos funcionários você deseja aumentar o salário? ");
	scanf(" %d", &qtdFunc); // "qntFunc" recebe a quantidade digitada pelo usuário.

	// Definindo o tamanho do vetor "salario" com base na quantidade de funcionários.
	float salario[qtdFunc];
	
	// Estrutura for para contar os funcionários.
	for (i=0; i<qtdFunc; ++i) {
		printf("Digite o salário do funcionário %d: ", i + 1);
		scanf(" %f", &salario[i]); // O salário do funcionário atual recebe o valor digitado pelo usuário.
	}
	
	// Estrutura for para contar os funcionários.
	for (i=0; i<qtdFunc; ++i) {
		if (salario[i] <= 2000){
			salario[i] *= 1.30; // Aumento de 30% se o salário for menor ou igual a 2000 reais.
			printf("O salário do funcionario %d aumentou para: R$%.2f \n", i + 1, salario[i]);
		} else{
			salario[i] *= 1.10; // Aumento de 10% se o salário não for menor ou igual 2000 reais.
			printf("O salário do funcionario %d aumentou para: R$%.2f \n", i + 1, salario[i]);
		}
	}

	system("pause");
	
	return 0;
}