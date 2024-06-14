#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int i, j, temp, quantidade, n[30];

// Função para printar os números na ordem normal.
void printNumeros() {
	for (i = 0; i < quantidade; ++i) {
    	if(i == quantidade - 1) {
            printf("%d \n", n[i]); 
        } else {
            printf("%d, ", n[i]); 
        }
	}
}

// Função para ordenar os números em ordem crescente.
void crescente() {
    printf("Números na ordem de inserção: ");
	printNumeros(); // Chamando a função "printNumeros()".

	for (i = 0; i < quantidade; ++i) {
	    for (j = i + 1; j < quantidade; ++j) {
			if (n[i] > n[j]) {
            	temp =  n[i];
            	n[i] = n[j];
            	n[j] = temp;
        	}
    	}
	}
	
	printf("\nNúmeros na ordem crescente: ");
	printNumeros();
}

// Função para ordenar os números em ordem decrescente.
void decrescente() {
    printf("Números na ordem de inserção: ");
	printNumeros(); // Chamando a função "printNumeros()".

	for (i = 0; i < quantidade; ++i) {
	    for (j = i + 1; j < quantidade; ++j) {
			if (n[i] < n[j]) {
            	temp =  n[i];
            	n[i] = n[j];
            	n[j] = temp;
        	}
    	}
	}
	
	printf("\nNúmeros na ordem decrescente: ");
	printNumeros();
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int escolha;
	
	printf("Digite quantos números serão inseridos: \n");
	scanf(" %d", &quantidade); // "quantidade" recebe a quantidade digitada pelo usuário.
	
	printf("\nDigite o(s) número(s): \n");
	// Estrutura for para contar os índices do vetor "n" até a quantidade informada pelo usuário.
	for (i = 0; i < quantidade; ++i){
		scanf(" %d", &n[i]); // Definindo o valor do índice atual.
	}
	
	printf("\nComo voce deseja ordená-los? \n[0] - Ordem crescente \n[1] - Ordem decrescente\n\n");
	scanf(" %d", &escolha); // "escolha" recebe o número digitado pelo usuário.
	
	system("cls");
	
	// Verificação do valor de "escolha" para definir qual ordenação dos números realizar.
	switch(escolha) {
		case 0:
			crescente(); // Chamando a função "crescente()".
			break;
		case 1:
			decrescente(); // Chamando a função "decrescente()".
			break;
		default:
			printf("Opção inválida! Finalizando programa...");
			break;
	}

    system("pause");

    return 0;
}