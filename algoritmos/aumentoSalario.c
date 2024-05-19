#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int i, qtdFunc;

	printf("De quantos funcion�rios voc� deseja aumentar o sal�rio? ");
	scanf(" %d", &qtdFunc); // "qntFunc" recebe a quantidade digitada pelo usu�rio.

	// Definindo o tamanho do vetor "salario" com base na quantidade de funcion�rios.
	float salario[qtdFunc];
	
	// Estrutura for para contar os funcion�rios.
	for (i=0; i<qtdFunc; ++i) {
		printf("Digite o sal�rio do funcion�rio %d: ", i + 1);
		scanf(" %f", &salario[i]); // O sal�rio do funcion�rio atual recebe o valor digitado pelo usu�rio.
	}
	
	// Estrutura for para contar os funcion�rios.
	for (i=0; i<qtdFunc; ++i) {
		// Se o sal�rio for menor que 2000 reais, haver� um aumento de 30%. Sen�o, haver� um aumento de 10%.
		if (salario[i] <= 2000){
			salario[i] *= 1.30;
			printf("O sal�rio do funcionario %d aumentou para: R$%.2f \n", i + 1, salario[i]);
		} else{
			salario[i] *= 1.10;
			printf("O sal�rio do funcionario %d aumentou para: R$%.2f \n", i + 1, salario[i]);
		}
	}

	system("pause");
	
	return 0;
}