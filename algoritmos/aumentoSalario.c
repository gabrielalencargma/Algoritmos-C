#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int i, qtdFunc;

	printf("De quantos funcion�rios voc� deseja aumentar o sal�rio? ");
	scanf("%d", &qtdFunc);

	float salario[qtdFunc];
	
	for (i=0; i<qtdFunc; ++i) {
		printf("Digite o sal�rio do funcion�rio %d: ", i + 1);
		scanf(" %d", &salario[i]);
	}
	
	for (i=0; i<qtdFunc; ++i) {
		if (salario[i] <= 2000){
			salario[i] *= 1.30;
			printf("O sal�rio do funcionario %d aumentou para: R$%d \n", i + 1, salario[i]);
		} else{
			salario[i] *= 1.10;
			printf("O sal�rio do funcionario %d aumentou para: R$%d \n", i + 1, salario[i]);
		}
	}

	system("pause");
	
	return 0;
}