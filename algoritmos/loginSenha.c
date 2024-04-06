#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#include <string.h>
#include <unistd.h>

bool estaRodando = true;
int chances = 3, cmp, senhaLen;
char senha[9], senhaScan[9];

// Função para bloquear temporáriamente o acesso do usuário.
void loginBloqueio() {
	int minutos = 0, segundos = 0;
	
	printf("Você foi bloqueado por 1 minuto! Aguarde e tente novamente. \n\n");
	system("pause");
    
	// Estrutura while para cronometrar o tempo de bloqueio.
    while(minutos < 1) {
    	system("cls");
		segundos++;
		if(segundos == 60) {
		    segundos = 0;
		    minutos++;
		}
		printf("%.2d : %.2d \n", minutos, segundos);
		sleep(1);
	}
	
	system("cls");
}

// Função para contabilizar quantas vezes o usuário tentou se logar.
void loginTentativas() {
	// Se o número de chances for igual a 1, o valor de sua variável voltará a 3, e o usuário será bloqueado temporáriamente.
	if(chances == 1) {
		chances = 3;
		system("cls");
		loginBloqueio();
	} 
	// Senão, o número de chances será diminuido por 1.
	else {
		chances--;
		printf("\nSenha incorreta! Chances restantes: %d \n\n", chances);
	}
	
	printf("Insira a sua senha: ");
}

// Função para logar com a senha cadastrada
void login() {
	printf("Insira a sua senha: ");
	
	// Estrutura while que repetirá enquanto o valor de "cmp" for diferente de 0.
	do {
		scanf(" %s", &senhaScan);

		// A varíavel "cmp" armazena o valor que a função "strcmp()" (comparação de strings) irá retornar.
		cmp = strcmp(senha, senhaScan);
		
		// Se o valor de "cmp" for diferente de 0, quer dizer que as strings são diferentes. Logo, será chamada a função "loginTentativas()".
		if(cmp != 0) {
			loginTentativas();
		}
	} while(cmp != 0);
	
	printf("\nVocê entrou! \n\n");
	system("pause");
}

// Função para cadastrar uma senha no programa
void cadastro() {
	printf("Insira uma nova senha com 8 digitos: ");
	
	// Estrutura while que repetirá enquanto o tamanho da senha for diferente de 8.
	do {
		scanf(" %s", &senhaScan);

		// A variável "senhaLen" armazena o tamanho da string, obtido pela função "strlen()".
		senhaLen = strlen(senhaScan);

		// Se o tamanho da senha for diferente de 8, será pedido para que tente cadastrar a senha novamente.
		if(senhaLen != 8) {
			printf("\nErro! \n\nInsira uma nova senha com 8 digitos: ");
		}
	} while (senhaLen != 8);

	// A função "strcpy()" copiará o que foi inserido na "senhaScan" para a variável "senha".
	strcpy(senha, senhaScan);

	printf("\nVocê foi cadastrado! \n\n");
	system("pause");
	system("cls");
}

// Função para exibir o menu do programa.
void menu() {
	char escolha;

	// Estrutura while do menu, que repetirá enquanto a variável "estaRodando" for verdadeira.
	while(estaRodando) {
		printf("O que você deseja? \n\n");
		printf("[1] Entrar \n");
		printf("[2] Cadastrar \n");
		printf("[3] Sair \n\n");

		scanf(" %c", &escolha);
		
		switch(escolha) {
			case '1':
				system("cls");
				login();
				// Se o login for bem sucedido, o programa finalizará.
				estaRodando = false;
				break;
			case '2':
				system("cls");
				cadastro();
				break;
			case '3':
				estaRodando = false;
				break;
			default:
				printf("\nErro! Digite uma opção válida. \n\n");
				system("pause");
				system("cls");
				break;
		}
	}
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	menu();

	return 0;
}