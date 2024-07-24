#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float total;

// Função para aplicar desconto de funcionário.
void desconto_funcionario(float valor) {
	float total = valor - (valor * 0.10); // "total" recebe os 10% de desconto aplicado em "valor".
	printf("\nValor do desconto: R$%.2f \n", valor*0.10);
	printf("Total à pagar: R$%.2f \n", total);
}

// Função para aplicar desconto de cliente vip.
void desconto_vip(float valor) {
	float total = valor - (valor * 0.05); // "total" recebe os 5% de desconto aplicado em "valor".
	printf("\nValor do desconto: R$%.2f \n", valor*0.05);
	printf("Total à pagar: R$%.2f \n", total);
}

// Menu do programa.
void menu() {
	int id;
	float valor;
	
	printf("Digite o valor da compra: ");
	scanf("%f", &valor); // "valor" recebe o valor digitado pelo usuário.
	
	printf("\nDigite o número de identificação: \n\n");
	printf("[1] - Cliente comum \n");
	printf("[2] - Funcionário \n");
	printf("[3] - Cliente VIP \n\n");
	
	scanf("%d", &id); // "id" recebe o número digitado pelo usuário.

	// Verificação do valor de "id" para escolher o desconto da compra.
	switch(id) {
		case 1:
			printf("\nSem desconto! \n"); // Não há desconto para cliente comum.
			printf("Total à pagar: R$%.2f \n", valor);
			break;
		case 2:
			desconto_funcionario(valor); // Chamando a função de desconto para funcionário, usando "valor" como argumento.
			break;
		case 3:
			desconto_vip(valor); // Chamando a função de desconto para cliente vip, usando "valor" como argumento.
			break;
		default:
			printf("\nNuméro de identificação inválido! \n");
			break;
	}
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	menu(); // Chamando a função de menu do programa.
	
	system("pause");

	return 0;
}
