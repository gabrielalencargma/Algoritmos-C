#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#include <string.h>
#include <unistd.h>

bool estaRodando = true;
int chances = 3, cmp, senhaLen;
char senha[9], senhaScan[9];

// Fun��o para bloquear tempor�riamente o acesso do usu�rio.
void loginBloqueio() {
	int minutos = 0, segundos = 0;
	
	printf("Voc� foi bloqueado por 1 minuto! Aguarde e tente novamente. \n\n");
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

// Fun��o para contabilizar quantas vezes o usu�rio tentou se logar.
void loginTentativas() {
	// Se o n�mero de chances for igual a 1, o valor de sua vari�vel voltar� a 3, e o usu�rio ser� bloqueado tempor�riamente.
	if(chances == 1) {
		chances = 3;
		system("cls");
		loginBloqueio();
	} 
	// Sen�o, o n�mero de chances ser� diminuido por 1.
	else {
		chances--;
		printf("\nSenha incorreta! Chances restantes: %d \n\n", chances);
	}
	
	printf("Insira a sua senha: ");
}

// Fun��o para logar com a senha cadastrada
void login() {
	printf("Insira a sua senha: ");
	
	// Estrutura while que repetir� enquanto o valor de "cmp" for diferente de 0.
	do {
		scanf(" %s", &senhaScan);

		// A var�avel "cmp" armazena o valor que a fun��o "strcmp()" (compara��o de strings) ir� retornar.
		cmp = strcmp(senha, senhaScan);
		
		// Se o valor de "cmp" for diferente de 0, quer dizer que as strings s�o diferentes. Logo, ser� chamada a fun��o "loginTentativas()".
		if(cmp != 0) {
			loginTentativas();
		}
	} while(cmp != 0);
	
	printf("\nVoc� entrou! \n\n");
	system("pause");
}

// Fun��o para cadastrar uma senha no programa
void cadastro() {
	printf("Insira uma nova senha com 8 digitos: ");
	
	// Estrutura while que repetir� enquanto o tamanho da senha for diferente de 8.
	do {
		scanf(" %s", &senhaScan);

		// A vari�vel "senhaLen" armazena o tamanho da string, obtido pela fun��o "strlen()".
		senhaLen = strlen(senhaScan);

		// Se o tamanho da senha for diferente de 8, ser� pedido para que tente cadastrar a senha novamente.
		if(senhaLen != 8) {
			printf("\nErro! \n\nInsira uma nova senha com 8 digitos: ");
		}
	} while (senhaLen != 8);

	// A fun��o "strcpy()" copiar� o que foi inserido na "senhaScan" para a vari�vel "senha".
	strcpy(senha, senhaScan);

	printf("\nVoc� foi cadastrado! \n\n");
	system("pause");
	system("cls");
}

// Fun��o para exibir o menu do programa.
void menu() {
	char escolha;

	// Estrutura while do menu, que repetir� enquanto a vari�vel "estaRodando" for verdadeira.
	while(estaRodando) {
		printf("O que voc� deseja? \n\n");
		printf("[1] Entrar \n");
		printf("[2] Cadastrar \n");
		printf("[3] Sair \n\n");

		scanf(" %c", &escolha);
		
		switch(escolha) {
			case '1':
				system("cls");
				login();
				// Se o login for bem sucedido, o programa finalizar�.
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
				printf("\nErro! Digite uma op��o v�lida. \n\n");
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