#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int i, qtdFunc;

	printf("De quantos funcion�rios voc� deseja aumentar o sal�rio? ");
	// Definindo da quantidade de funcion�rios.
	scanf(" %d", &qtdFunc);

	// Definindo o tamanho do vetor salario pela quantidade de funcion�rios.
	float salario[qtdFunc];
	
	// Estrutura de repeti��o para definir o sal�rio de cada funcion�rio.
	for (i=0; i<qtdFunc; ++i) {
		printf("Digite o sal�rio do funcion�rio %d: ", i + 1);
		scanf(" %f", &salario[i]);
	}
	
	// Estrutura de repeti��o para aumentar o s�lario de cada funcion�rio
	for (i=0; i<qtdFunc; ++i) {
		// Se o sal�rio for menor que 2000 reais, hav�ra um aumento de 30%. Sen�o, haver� um aumento de 10%.
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