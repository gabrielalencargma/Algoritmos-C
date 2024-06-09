#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int ops, i;
float scanAltura, altura[20];

// Função para checar uma altura pelo índice no vetor.
void checkIndice() {
	// Se o valor no índice escolhido for 0, quer dizer que ele está vazio. Senão, será feito o print da altura armazenada nele.  
	if(altura[i] == 0) {
		printf("\naltura[%d] - Vazio", i);
	} else {
		printf("\naltura[%d] - %.2f", i, altura[i]);
	}
}

// Função para checar uma altura pelo seu valor armazenado no vetor.
void checkAltura() {
	// Se o valor no índice atual de "altura[]" for igual a altura que usuário digitou, será feito o print dela.
	if(altura[i] == scanAltura) {
		printf("\naltura[%d] - %.2f", i, altura[i]);
	}
}

// Função para escolher como será procurada uma altura no vetor.
void procAltura() {
	printf("Como você deseja procurar? \n\n");
	printf("[1] - Procurar pelo índice \n[2] - Procurar pela altura \n[3] - Quero ver todas as alturas \n\n");
	scanf(" %d", &ops); // "ops" recebe o número digitado pelo usuário.
	
    system("cls");

	// Verificação do valor de "ops" para definir o tipo de procura.
	switch(ops) {
		case 1:
			printf("Selecione o índice para ver a altura armazenada (escolha de 0 a 19): \n");
			scanf(" %d", &i); // Definindo o índice do vetor para procurar se há alguma altura armazenada.
		
			checkIndice(); // Chamando a função "checkIndice()".
			break;
		case 2:
			printf("Digite a altura: \n");
			scanf(" %f", &scanAltura); // "scanAltura" recebe a altura digitada pelo usuário.
			
			// Estrutura for para contar os 20 espaços de altura.
			for(i = 0; i < 20; i++) {
				checkAltura(); // Chamando a função "checkAltura()".
			}
			break;
		case 3:
			// Estrutura for para contar os 20 espaços de altura.
			for(i = 0; i < 20; i++) {
				checkIndice(); // Chamando a função "checkIndice()".
			}
			break;
		default:
			break;
	}
}

// Função para adicionar uma altura no vetor.
void addAltura() {
	printf("Selecione o índice onde você deseja armazenar a altura (escolha de 0 a 19): \n");
	scanf(" %d", &i); // Definindo em qual índice do vetor será armazenada a altura.
	
	printf("\nDigite a altura: \n");
	scanf(" %f", &altura[i]); // Adicionando a altura digitada pelo usuário no índice escolhido anteriormente.
}

int main () {
	setlocale(LC_ALL, "portuguese");
	
	// estrutura while para repetir a escolha de opções.
	while(1){
		printf("O que você deseja? \n\n");
		printf("[1] - Adicionar uma altura \n[2] - Procurar uma altura \n\n");
		scanf(" %d", &ops); // "ops" recebe o número digitado pelo usuário.
		
        system("cls");

		// Verificação do valor de "ops" para definir qual opção escolher.
		switch(ops) {
			case 1:
				addAltura(); //Chamando a função "addAltura()".
				break;
			case 2:
				procAltura(); // Chamando a função "procAltura()".
				system("pause");
				break;
			default:
				exit(0); // Saindo da estrutura while e finalizando o programa.
				break;
		}
		
		system("cls");
	}

    return 0;
}