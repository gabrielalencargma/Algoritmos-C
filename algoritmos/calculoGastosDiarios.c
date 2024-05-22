#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    char resp;
    int qtdGastos = 0;
	float val, total = 0;

    printf("Digite o valor de cada transa��o realizada no dia. No fim, ser� mostrado o gasto total que voc� teve. \n");

	// Estrutura do-while para definir o total gasto.
	do {
		qtdGastos++;
		
		printf("\nQuanto foi o valor gasto? \n");
		scanf(" %f", &val); // "val" recebe o valor digitado pelo usu�rio.
		
		total += val; // O valor de "val" � incrementado ao "total".
		
		printf("\nVoc� fez mais alguma trasa��o? (s/n)\n");
		scanf(" %c", &resp);
	} while(resp == 'S' || resp == 's'); // Enquanto houver mais transa��es, o processo repetir�.

	system("cls");
	
	printf("Transa��es realizadas: %d \n", qtdGastos);
	printf("Total gasto no dia: %.2f R$ \n", total);

    system("pause");
}