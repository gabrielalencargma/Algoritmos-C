#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int i, j, temp, quantidade, n[30];

// Fun��o para printar os n�meros.
void printNumeros() {
	// Estrutura for para contar os �ndices de "n[]".
	for (i = 0; i < quantidade; ++i) {
    	if(i == quantidade - 1) {
            printf("%d \n", n[i]); 
        } else {
            printf("%d, ", n[i]); 
        }
	}
}

// Fun��o para ordenar os n�meros em ordem crescente.
void crescente() {
    printf("N�meros na ordem de inser��o: ");
	printNumeros(); // Chamando a fun��o "printNumeros()".
	
	// Estrutura for para contar os �ndices de "n[]" usando "i".
	for (i = 0; i < quantidade; ++i) {
		// Estrutura for para contar os �ndices de "n[]" usando "j".
	    for (j = i + 1; j < quantidade; ++j) {
			// Se o valor do �ndice atual de "i" for maior que o valor do �ndice atual de "j"...
			if (n[i] > n[j]) {
            	temp =  n[i]; // "temp" guarda o valor do �ndice "i".
            	n[i] = n[j]; // O �ndice "i" recebe o valor do �ndice "j".
            	n[j] = temp; // O �ndice "j" recebe o valor de "temp".
        	}
    	}
	}
	
	printf("\nN�meros na ordem crescente: ");
	printNumeros(); // Chamando a fun��o "printNumeros()".
}

// Fun��o para ordenar os n�meros em ordem decrescente.
void decrescente() {
    printf("N�meros na ordem de inser��o: ");
	printNumeros(); // Chamando a fun��o "printNumeros()".

	// Estrutura for para contar os �ndices de "n[]" usando "i".
	for (i = 0; i < quantidade; ++i) {
		// Estrutura for para contar os �ndices de "n[]" usando "j".
	    for (j = i + 1; j < quantidade; ++j) {
			// Se o valor do �ndice atual de "i" for menor que o valor do �ndice atual de "j"...
			if (n[i] < n[j]) {
            	temp =  n[i]; // "temp" guarda o valor do �ndice "i".
            	n[i] = n[j]; // O �ndice "i" recebe o valor do �ndice "j".
            	n[j] = temp; // O �ndice "j" recebe o valor de "temp".
        	}
    	}
	}
	
	printf("\nN�meros na ordem decrescente: ");
	printNumeros(); // Chamando a fun��o "printNumeros()".
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int escolha;
	
	printf("Digite quantos n�meros ser�o inseridos: \n");
	scanf(" %d", &quantidade); // "quantidade" recebe o valor digitado pelo usu�rio.
	
	printf("\nDigite o(s) n�mero(s): \n");
	// Estrutura for para contar os �ndices de "n[]".
	for (i = 0; i < quantidade; ++i){
		scanf(" %d", &n[i]); // O �ndice atual recebe o n�mero digitado pelo usu�rio.
	}
	
	printf("\nComo voce deseja orden�-los? \n[0] - Ordem crescente \n[1] - Ordem decrescente\n\n");
	scanf(" %d", &escolha); // "escolha" recebe o n�mero digitado pelo usu�rio.
	
	system("cls");
	
	// Verifica��o do valor de "escolha" para escolher a ordem.
	switch(escolha) {
		case 0:
			crescente(); // Chamando a fun��o "crescente()".
			break;
		case 1:
			decrescente(); // Chamando a fun��o "decrescente()".
			break;
		default:
			printf("Op��o inv�lida! Finalizando programa...");
			break;
	}

    system("pause");

    return 0;
}