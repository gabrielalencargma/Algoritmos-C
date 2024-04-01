#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float total;

// Fun��o para aplicar desconto de funcion�rio
void desconto_funcionario(float valor) {
	float total = valor - (valor * 0.10);
	printf("\nValor do desconto: R$%.2f \n", valor*0.10);
	printf("Total � pagar: R$%.2f \n", total);
}

// Fun��o para aplicar desconto de cliente vip
void desconto_vip(float valor) {
	float total = valor - (valor * 0.05);
	printf("\nValor do desconto: R$%.2f \n", valor*0.05);
	printf("Total � pagar: R$%.2f \n", total);
}

// Menu do programa
void menu() {
	int id;
	float valor;
	
	printf("Digite o valor da compra: ");
	scanf("%f", &valor);
	
	printf("\nDigite o n�mero de identifica��o: \n\n");
	printf("[1] - Cliente comum \n");
	printf("[2] - Funcion�rio \n");
	printf("[3] - Cliente VIP \n\n");
	
	scanf("%d", &id);

	// Verifica��o do n�mero digitado para decidir se haver� desconto e qual tipo ser� 
	switch(id) {
		case 1:
			printf("\nSem desconto! \n");
			printf("Total � pagar: R$%.2f \n", valor);
			break;
		case 2:
			desconto_funcionario(valor);
			break;
		case 3:
			desconto_vip(valor);
			break;
		default:
			printf("\nNum�ro de identifica��o inv�lido! \n");
			break;
	}
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	menu();
	
	system("pause");

	return 0;
}
