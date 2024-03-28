#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int ops, i;
float scanAltura, altura[20];

void checkIndice() {
	if(altura[i] == 0) {
		printf("\naltura[%d] - Vazio", i);
	} else {
		printf("\naltura[%d] - %.2f", i, altura[i]);
	}
}

void checkAltura() {
	if(altura[i] == scanAltura) {
		printf("\naltura[%d] - %.2f", i, altura[i]);
	}
}

void procAltura() {
	printf("Como você deseja procurar? \n\n");
	printf("[1] - Procurar pelo índice \n[2] - Procurar pela altura \n[3] - Quero ver todas as alturas \n\n");
	scanf(" %d", &ops);
	
    system("cls");

	switch(ops) {
		case 1:
			printf("Selecione o índice para ver a altura armazenada (escolha de 0 a 19): \n");
			scanf(" %d", &i);
		
			checkIndice();
			break;
		case 2:
			printf("Digite a altura: \n");
			scanf(" %f", &scanAltura);
			
			for(i = 0; i < 20; i++) {
				checkAltura();
			}
			break;
		case 3:
			for(i = 0; i < 20; i++) {
				checkIndice();
			}
			break;
		default:
			break;
	}
}

void addAltura() {
	printf("Selecione o índice onde você deseja armazenar a altura (escolha de 0 a 19): \n");
	scanf(" %d", &i);
	
	printf("\nDigite a altura: \n");
	scanf(" %f", &altura[i]);
}

int main () {
	setlocale(LC_ALL, "portuguese");
	
	while(1){
		printf("O que você deseja? \n\n");
		printf("[1] - Adicionar uma altura \n[2] - Procurar uma altura \n\n");
		scanf(" %d", &ops);
		
        system("cls");

		switch(ops) {
			case 1:
				addAltura();
				break;
			case 2:
				procAltura();
				system("pause");
				break;
			default:
				exit(0);
				break;
		}
		
		system("cls");
	}

    return 0;
}