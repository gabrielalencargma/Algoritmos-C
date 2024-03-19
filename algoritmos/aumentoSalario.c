#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int i, qtdFunc;

	printf("De quantos funcionários você deseja aumentar o salário? ");
	scanf("%d", &qtdFunc);

	float salario[qtdFunc];
	
	for (i=0; i<qtdFunc; ++i) {
		printf("Digite o salário do funcionário %d: ", i + 1);
		scanf(" %d", &salario[i]);
	}
	
	for (i=0; i<qtdFunc; ++i) {
		if (salario[i] <= 2000){
			salario[i] *= 1.30;
			printf("O salário do funcionario %d aumentou para: R$%d \n", i + 1, salario[i]);
		} else{
			salario[i] *= 1.10;
			printf("O salário do funcionario %d aumentou para: R$%d \n", i + 1, salario[i]);
		}
	}

	system("pause");
	
	return 0;
}