#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int i, j, temp, quantidade, n[30];

// Função para printar os números.
void printNumeros() {
	// Estrutura for para contar os índices de "n[]".
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
	
	// Estrutura for para contar os índices de "n[]" usando "i".
	for (i = 0; i < quantidade; ++i) {
		// Estrutura for para contar os índices de "n[]" usando "j".
	    for (j = i + 1; j < quantidade; ++j) {
			// Se o valor do índice atual de "i" for maior que o valor do índice atual de "j"...
			if (n[i] > n[j]) {
            	temp =  n[i]; // "temp" guarda o valor do índice "i".
            	n[i] = n[j]; // O índice "i" recebe o valor do índice "j".
            	n[j] = temp; // O índice "j" recebe o valor de "temp".
        	}
    	}
	}
	
	printf("\nNúmeros na ordem crescente: ");
	printNumeros(); // Chamando a função "printNumeros()".
}

// Função para ordenar os números em ordem decrescente.
void decrescente() {
    printf("Números na ordem de inserção: ");
	printNumeros(); // Chamando a função "printNumeros()".

	// Estrutura for para contar os índices de "n[]" usando "i".
	for (i = 0; i < quantidade; ++i) {
		// Estrutura for para contar os índices de "n[]" usando "j".
	    for (j = i + 1; j < quantidade; ++j) {
			// Se o valor do índice atual de "i" for menor que o valor do índice atual de "j"...
			if (n[i] < n[j]) {
            	temp =  n[i]; // "temp" guarda o valor do índice "i".
            	n[i] = n[j]; // O índice "i" recebe o valor do índice "j".
            	n[j] = temp; // O índice "j" recebe o valor de "temp".
        	}
    	}
	}
	
	printf("\nNúmeros na ordem decrescente: ");
	printNumeros(); // Chamando a função "printNumeros()".
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int escolha;
	
	printf("Digite quantos números serão inseridos: \n");
	scanf(" %d", &quantidade); // "quantidade" recebe o valor digitado pelo usuário.
	
	printf("\nDigite o(s) número(s): \n");
	// Estrutura for para contar os índices de "n[]".
	for (i = 0; i < quantidade; ++i){
		scanf(" %d", &n[i]); // O índice atual recebe o número digitado pelo usuário.
	}
	
	printf("\nComo voce deseja ordená-los? \n[0] - Ordem crescente \n[1] - Ordem decrescente\n\n");
	scanf(" %d", &escolha); // "escolha" recebe o número digitado pelo usuário.
	
	system("cls");
	
	// Verificação do valor de "escolha" para escolher a ordem.
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