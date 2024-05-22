#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    char resp;
    int qtdGastos = 0;
	float val, total = 0;

    printf("Digite o valor de cada transação realizada no dia. No fim, será mostrado o gasto total que você teve. \n");

	// Estrutura do-while para definir o total gasto.
	do {
		qtdGastos++;
		
		printf("\nQuanto foi o valor gasto? \n");
		scanf(" %f", &val); // "val" recebe o valor digitado pelo usuário.
		
		total += val; // O valor de "val" é incrementado ao "total".
		
		printf("\nVocê fez mais alguma trasação? (s/n)\n");
		scanf(" %c", &resp);
	} while(resp == 'S' || resp == 's'); // Enquanto houver mais transações, o processo repetirá.

	system("cls");
	
	printf("Transações realizadas: %d \n", qtdGastos);
	printf("Total gasto no dia: %.2f R$ \n", total);

    system("pause");
}