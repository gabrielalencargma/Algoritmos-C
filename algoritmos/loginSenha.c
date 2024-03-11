#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#include <string.h>
#include <unistd.h>

bool isProgramRunning = true;
int chances = 3, cmp, senhaLen;
char senha[9], senhaScan[9];

void loginBloqueio() {
	int minutos = 0, segundos = 0;
	
	printf("Voc� foi bloqueado por 1 minuto! Aguarde e tente novamente. \n\n");
	system("pause");
    
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

void loginTentativas() {
	if(chances == 1) {
		chances = 3;
		system("cls");
		loginBloqueio();
	} else {
		chances--;
		printf("\nSenha incorreta! Chances restantes: %d \n\n", chances);
	}
	
	printf("Insira a sua senha: ");
}

void login() {
	printf("Insira a sua senha: ");
	
	do {
		scanf(" %s", &senhaScan);

		cmp = strcmp(senha, senhaScan);
		
		if(cmp != 0) {
			loginTentativas();
		}
	} while(cmp != 0);
	
	printf("\nVoc� entrou! \n\n");
	system("pause");
}

void cadastro() {
	printf("Insira uma nova senha com 8 digitos: ");
	
	do {
		scanf(" %s", &senhaScan);

		senhaLen = strlen(senhaScan);

		if(senhaLen != 8) {
			printf("\nErro! \n\nInsira uma nova senha com 8 digitos: ");
		}
	} while (senhaLen != 8);

	strcpy(senha, senhaScan);

	printf("\nVoc� foi cadastrado! \n\n");
	system("pause");
	system("cls");
}

void menu() {
	char escolha;

	while(isProgramRunning) {
		printf("O que voc� deseja? \n\n");
		printf("[1] Entrar \n");
		printf("[2] Cadastrar \n");
		printf("[3] Sair \n\n");

		scanf(" %c", &escolha);
		
		switch(escolha) {
			case '1':
				system("cls");
				login();
				isProgramRunning = false;
				break;
			case '2':
				system("cls");
				cadastro();
				break;
			case '3':
				isProgramRunning = false;
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