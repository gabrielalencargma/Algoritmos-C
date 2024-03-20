#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int i, j, temp, quantidade, n[30];

void printNumeros() {
	for (i = 0; i < quantidade; ++i) {
    	if(i == quantidade - 1) {
            printf("%d \n", n[i]); 
        } else {
            printf("%d, ", n[i]); 
        }
	}
}

void crescente() {
    printf("N�meros na ordem de inser��o: ");
	printNumeros();

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

void decrescente() {
    printf("N�meros na ordem de inser��o: ");
	printNumeros();

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
	scanf(" %d", &quantidade);
	
	printf("\nDigite o(s) n�mero(s): \n");
	for (i = 0; i < quantidade; ++i){
		scanf(" %d", &n[i]);
	}
	
	printf("\nComo voce deseja orden�-los? \n[0] - Ordem crescente \n[1] - Ordem decrescente\n\n");
	scanf(" %d", &escolha);
	
	system("cls");
	
	switch(escolha) {
		case 0:
			crescente();
			break;
		case 1:
			decrescente();
			break;
		default:
			printf("Op��o inv�lida! Finalizando programa...");
			break;
	}

    system("pause");

    return 0;
}