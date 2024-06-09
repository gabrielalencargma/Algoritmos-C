#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int ops, i;
float scanAltura, altura[20];

// Fun��o para checar uma altura pelo �ndice no vetor.
void checkIndice() {
	// Se o valor no �ndice escolhido for 0, quer dizer que ele est� vazio. Sen�o, ser� feito o print da altura armazenada nele.  
	if(altura[i] == 0) {
		printf("\naltura[%d] - Vazio", i);
	} else {
		printf("\naltura[%d] - %.2f", i, altura[i]);
	}
}

// Fun��o para checar uma altura pelo seu valor armazenado no vetor.
void checkAltura() {
	// Se o valor no �ndice atual de "altura[]" for igual a altura que usu�rio digitou, ser� feito o print dela.
	if(altura[i] == scanAltura) {
		printf("\naltura[%d] - %.2f", i, altura[i]);
	}
}

// Fun��o para escolher como ser� procurada uma altura no vetor.
void procAltura() {
	printf("Como voc� deseja procurar? \n\n");
	printf("[1] - Procurar pelo �ndice \n[2] - Procurar pela altura \n[3] - Quero ver todas as alturas \n\n");
	scanf(" %d", &ops); // "ops" recebe o n�mero digitado pelo usu�rio.
	
    system("cls");

	// Verifica��o do valor de "ops" para definir o tipo de procura.
	switch(ops) {
		case 1:
			printf("Selecione o �ndice para ver a altura armazenada (escolha de 0 a 19): \n");
			scanf(" %d", &i); // Definindo o �ndice do vetor para procurar se h� alguma altura armazenada.
		
			checkIndice(); // Chamando a fun��o "checkIndice()".
			break;
		case 2:
			printf("Digite a altura: \n");
			scanf(" %f", &scanAltura); // "scanAltura" recebe a altura digitada pelo usu�rio.
			
			// Estrutura for para contar os 20 espa�os de altura.
			for(i = 0; i < 20; i++) {
				checkAltura(); // Chamando a fun��o "checkAltura()".
			}
			break;
		case 3:
			// Estrutura for para contar os 20 espa�os de altura.
			for(i = 0; i < 20; i++) {
				checkIndice(); // Chamando a fun��o "checkIndice()".
			}
			break;
		default:
			break;
	}
}

// Fun��o para adicionar uma altura no vetor.
void addAltura() {
	printf("Selecione o �ndice onde voc� deseja armazenar a altura (escolha de 0 a 19): \n");
	scanf(" %d", &i); // Definindo em qual �ndice do vetor ser� armazenada a altura.
	
	printf("\nDigite a altura: \n");
	scanf(" %f", &altura[i]); // Adicionando a altura digitada pelo usu�rio no �ndice escolhido anteriormente.
}

int main () {
	setlocale(LC_ALL, "portuguese");
	
	// estrutura while para repetir a escolha de op��es.
	while(1){
		printf("O que voc� deseja? \n\n");
		printf("[1] - Adicionar uma altura \n[2] - Procurar uma altura \n\n");
		scanf(" %d", &ops); // "ops" recebe o n�mero digitado pelo usu�rio.
		
        system("cls");

		// Verifica��o do valor de "ops" para definir qual op��o escolher.
		switch(ops) {
			case 1:
				addAltura(); //Chamando a fun��o "addAltura()".
				break;
			case 2:
				procAltura(); // Chamando a fun��o "procAltura()".
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