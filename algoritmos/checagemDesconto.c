#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float total;

// Fun��o para aplicar desconto de funcion�rio.
void desconto_funcionario(float valor) {
	float total = valor - (valor * 0.10); // "total" recebe os 10% de desconto aplicado em "valor".
	printf("\nValor do desconto: R$%.2f \n", valor*0.10);
	printf("Total � pagar: R$%.2f \n", total);
}

// Fun��o para aplicar desconto de cliente vip.
void desconto_vip(float valor) {
	float total = valor - (valor * 0.05); // "total" recebe os 5% de desconto aplicado em "valor".
	printf("\nValor do desconto: R$%.2f \n", valor*0.05);
	printf("Total � pagar: R$%.2f \n", total);
}

// Menu do programa.
void menu() {
	int id;
	float valor;
	
	printf("Digite o valor da compra: ");
	scanf("%f", &valor); // "valor" recebe o valor digitado pelo usu�rio.
	
	printf("\nDigite o n�mero de identifica��o: \n\n");
	printf("[1] - Cliente comum \n");
	printf("[2] - Funcion�rio \n");
	printf("[3] - Cliente VIP \n\n");
	
	scanf("%d", &id); // "id" recebe o n�mero digitado pelo usu�rio.

	// Verifica��o do valor de "id" para escolher o desconto da compra.
	switch(id) {
		case 1:
			printf("\nSem desconto! \n"); // N�o h� desconto para cliente comum.
			printf("Total � pagar: R$%.2f \n", valor);
			break;
		case 2:
			desconto_funcionario(valor); // Chamando a fun��o de desconto para funcion�rio, usando "valor" como argumento.
			break;
		case 3:
			desconto_vip(valor); // Chamando a fun��o de desconto para cliente vip, usando "valor" como argumento.
			break;
		default:
			printf("\nNum�ro de identifica��o inv�lido! \n");
			break;
	}
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	menu(); // Chamando a fun��o de menu do programa.
	
	system("pause");

	return 0;
}
