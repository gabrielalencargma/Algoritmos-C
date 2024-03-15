#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    char resp;
    int qtdGastos = 0;
	float valor, total = 0;

    printf("Digite o valor de cada transação realizada no dia. No fim, será mostrado o gasto total que você teve. \n");

	do {
		qtdGastos++;
		
		printf("\nQuanto foi o valor gasto? \n");
		scanf(" %f", &valor);
		
		total += valor;
		
		printf("\nVocê fez mais alguma trasação? (s/n)\n");
		scanf(" %c", &resp);
	} while(resp == 'S' || resp == 's');

	system("cls");
	
	printf("Transações realizadas: %d \n", qtdGastos);
	printf("Total gasto no dia: %.2f R$ \n", total);

    system("pause");
}