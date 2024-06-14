#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int i, j, temp, quantidade, n[30];

// Fun��o para printar os n�meros na ordem normal.
void printNumeros() {
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

	for (i = 0; i < quantidade; ++i) {
	    for (j = i + 1; j < quantidade; ++j) {
			if (n[i] > n[j]) {
            	temp =  n[i];
            	n[i] = n[j];
            	n[j] = temp;
        	}
    	}
	}
	
	printf("\nN�meros na ordem crescente: ");
	printNumeros();
}

// Fun��o para ordenar os n�meros em ordem decrescente.
void decrescente() {
    printf("N�meros na ordem de inser��o: ");
	printNumeros(); // Chamando a fun��o "printNumeros()".

	for (i = 0; i < quantidade; ++i) {
	    for (j = i + 1; j < quantidade; ++j) {
			if (n[i] < n[j]) {
            	temp =  n[i];
            	n[i] = n[j];
            	n[j] = temp;
        	}
    	}
	}
	
	printf("\nN�meros na ordem decrescente: ");
	printNumeros();
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int escolha;
	
	printf("Digite quantos n�meros ser�o inseridos: \n");
	scanf(" %d", &quantidade); // "quantidade" recebe a quantidade digitada pelo usu�rio.
	
	printf("\nDigite o(s) n�mero(s): \n");
	// Estrutura for para contar os �ndices do vetor "n" at� a quantidade informada pelo usu�rio.
	for (i = 0; i < quantidade; ++i){
		scanf(" %d", &n[i]); // Definindo o valor do �ndice atual.
	}
	
	printf("\nComo voce deseja orden�-los? \n[0] - Ordem crescente \n[1] - Ordem decrescente\n\n");
	scanf(" %d", &escolha); // "escolha" recebe o n�mero digitado pelo usu�rio.
	
	system("cls");
	
	// Verifica��o do valor de "escolha" para definir qual ordena��o dos n�meros realizar.
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