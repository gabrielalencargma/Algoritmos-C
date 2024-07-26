#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#include <string.h>
#include <unistd.h>

bool estaRodando = true;
int chances = 3, cmp, senhaLen;
char senha[9], senhaScan[9];

// Função para bloquear o acesso temporariamente.
void loginBloqueio() {
	int minutos = 0, segundos = 0;
	
	printf("Você foi bloqueado por 1 minuto! Aguarde e tente novamente. \n\n");
	system("pause");
    
	// Estrutura while para cronometrar o tempo de bloqueio.
    while(minutos < 1) {
    	system("cls");
		segundos++; // Incrementando 1 no valor de "segundos".
		if(segundos == 60) {
		    segundos = 0; // "segundos" recebe o valor 0.
		    minutos++; // Incrementando 1 no valor de "minutos".
		}
		printf("%.2d : %.2d \n", minutos, segundos); // Print do tempo.
		sleep(1); // pausa de 1 segundo.
	}
	
	system("cls");
}

// Função para verificar as tentativas de login.
void loginTentativas() {
	// Se a última chance de login for mal sucedida...
	if(chances == 1) {
		chances = 3; // "chances" recebe o valor 3.
		system("cls");
		loginBloqueio(); // Chamando a função "loginBloqueio()".
	} else {
		chances--; // Diminuindo 1 no valor de "chances".
		printf("\nSenha incorreta! Chances restantes: %d \n\n", chances);
	}
	
	printf("Insira a sua senha: ");
}

// Função para logar no sistema.
void login() {
	printf("Insira a sua senha: ");
	
	// Estrutura do-while para logar no sistema.
	do {
		scanf(" %s", &senhaScan); // "senhaScan" recebe o texto digitado pelo usuário.

		cmp = strcmp(senha, senhaScan); // "cmp" recebe o valor da comparação das senhas.
		
		// Se o valor de "cmp" não for 0, quer dizer que a senha digitada é diferente da cadastrada.
		if(cmp != 0) {
			loginTentativas(); // Chamando a função "loginTentativas()".
		}
	} while(cmp != 0); // Enquanto a senha for diferente, a estrutura repetirá.
	
	printf("\nVocê entrou! \n\n");
	system("pause");
}

// Função para cadastrar a senha.
void cadastro() {
	printf("Insira uma nova senha com 8 digitos: ");
	
	// Estrutura do-while para cadastrar a senha.
	do {
		scanf(" %s", &senhaScan); // "senhaScan" recebe o texto digitado pelo usuário.

		senhaLen = strlen(senhaScan); // "senhaLen" recebe o tamanho da senha digitada.

		if(senhaLen != 8) {
			printf("\nErro! \n\nInsira uma nova senha com 8 digitos: ");
		}
	} while (senhaLen != 8); // Enquanto o tamanho da senha não for de 8 caracteres, a estrutura repetirá.

	// A função "strcpy()" copiará o que foi inserido na "senhaScan" para a variável "senha".
	strcpy(senha, senhaScan);

	printf("\nVocê foi cadastrado! \n\n");
	system("pause");
	system("cls");
}

// Menu do programa.
void menu() {
	char escolha;

	// Estrutura while para repetir a escolha das opções enquanto "estaRodando" for verdadeiro.
	while(estaRodando) {
		printf("O que você deseja? \n\n");
		printf("[1] Entrar \n");
		printf("[2] Cadastrar \n");
		printf("[3] Sair \n\n");

		scanf(" %c", &escolha); // "escolha" recebe o número digitado pelo usuário.
		
		switch(escolha) {
			case '1':
				system("cls");
				login(); // Chamando a função "login()".
				estaRodando = false; // "estaRodando" fica falso.
				break;
			case '2':
				system("cls");
				cadastro(); // Chamando a função "cadastro()".
				break;
			case '3':
				estaRodando = false; // "estaRodando" fica falso.
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
	
	menu(); // Chamando a função "menu()".

	return 0;
}