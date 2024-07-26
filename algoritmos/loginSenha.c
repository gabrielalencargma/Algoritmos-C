#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#include <string.h>
#include <unistd.h>

bool estaRodando = true;
int chances = 3, cmp, senhaLen;
char senha[9], senhaScan[9];

// Fun��o para bloquear o acesso temporariamente.
void loginBloqueio() {
	int minutos = 0, segundos = 0;
	
	printf("Voc� foi bloqueado por 1 minuto! Aguarde e tente novamente. \n\n");
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

// Fun��o para verificar as tentativas de login.
void loginTentativas() {
	// Se a �ltima chance de login for mal sucedida...
	if(chances == 1) {
		chances = 3; // "chances" recebe o valor 3.
		system("cls");
		loginBloqueio(); // Chamando a fun��o "loginBloqueio()".
	} else {
		chances--; // Diminuindo 1 no valor de "chances".
		printf("\nSenha incorreta! Chances restantes: %d \n\n", chances);
	}
	
	printf("Insira a sua senha: ");
}

// Fun��o para logar no sistema.
void login() {
	printf("Insira a sua senha: ");
	
	// Estrutura do-while para logar no sistema.
	do {
		scanf(" %s", &senhaScan); // "senhaScan" recebe o texto digitado pelo usu�rio.

		cmp = strcmp(senha, senhaScan); // "cmp" recebe o valor da compara��o das senhas.
		
		// Se o valor de "cmp" n�o for 0, quer dizer que a senha digitada � diferente da cadastrada.
		if(cmp != 0) {
			loginTentativas(); // Chamando a fun��o "loginTentativas()".
		}
	} while(cmp != 0); // Enquanto a senha for diferente, a estrutura repetir�.
	
	printf("\nVoc� entrou! \n\n");
	system("pause");
}

// Fun��o para cadastrar a senha.
void cadastro() {
	printf("Insira uma nova senha com 8 digitos: ");
	
	// Estrutura do-while para cadastrar a senha.
	do {
		scanf(" %s", &senhaScan); // "senhaScan" recebe o texto digitado pelo usu�rio.

		senhaLen = strlen(senhaScan); // "senhaLen" recebe o tamanho da senha digitada.

		if(senhaLen != 8) {
			printf("\nErro! \n\nInsira uma nova senha com 8 digitos: ");
		}
	} while (senhaLen != 8); // Enquanto o tamanho da senha n�o for de 8 caracteres, a estrutura repetir�.

	// A fun��o "strcpy()" copiar� o que foi inserido na "senhaScan" para a vari�vel "senha".
	strcpy(senha, senhaScan);

	printf("\nVoc� foi cadastrado! \n\n");
	system("pause");
	system("cls");
}

// Menu do programa.
void menu() {
	char escolha;

	// Estrutura while para repetir a escolha das op��es enquanto "estaRodando" for verdadeiro.
	while(estaRodando) {
		printf("O que voc� deseja? \n\n");
		printf("[1] Entrar \n");
		printf("[2] Cadastrar \n");
		printf("[3] Sair \n\n");

		scanf(" %c", &escolha); // "escolha" recebe o n�mero digitado pelo usu�rio.
		
		switch(escolha) {
			case '1':
				system("cls");
				login(); // Chamando a fun��o "login()".
				estaRodando = false; // "estaRodando" fica falso.
				break;
			case '2':
				system("cls");
				cadastro(); // Chamando a fun��o "cadastro()".
				break;
			case '3':
				estaRodando = false; // "estaRodando" fica falso.
				break;
			default:
				printf("\nErro! Digite uma op��o v�lida. \n\n");
				system("pause");
				system("cls");
				break;
		}
	}
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	menu(); // Chamando a fun��o "menu()".

	return 0;
}