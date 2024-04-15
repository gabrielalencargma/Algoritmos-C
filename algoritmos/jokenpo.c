#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

// Função do jogo.
void jogo() {
	int player, bot, i, playerPontos = 0, botPontos = 0;
	
	// Estrutura for para cada rodada.
	for(i = 1; i <= 3; i++){
		// Print do placar atual.
        printf("---------------------------\n");
		printf("   Player [%d] - [%d] Bot \n", playerPontos, botPontos);
		printf("---------------------------\n\n");

		printf("[1] - Pedra \n[2] - Papel \n[3] - Tesoura\n\n");
        printf("Faça sua jogada: ");
		// Definindo a escolha do jogador.
		scanf(" %d", &player);
		
		// Definindo a escolha da máquina, através do sorteio dos números 1 a 3.
		bot = (rand() % 3) + 1;
		
		// Verificação do resultado da rodada.
		if(player == bot) {
			printf("\nEmpate! \n");
		} else if((player == 1 && bot == 3) || (player == 2 && bot == 1) || (player == 3 && bot == 2)) {
			printf("\nVitória! \n");
			playerPontos += 1;
		} else {
			printf("\nDerrota! \n");
			botPontos += 1;
		}
		
		system("pause");
		system("cls");
	}
	
	// Verificação do resultado do jogo.
	if(playerPontos == botPontos) {
		printf("Foi quase, vocês empataram!");
	} else if(playerPontos > botPontos) {
		printf("Parabéns, você ganhou!");
	} else {
		printf("Infelizmente, você perdeu...");
	}
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	
	printf("Vamos jogar jokenpô? \n\n");
	printf("Serão 3 rodadas para definir o vencedor. \n");
	
	system("pause");

	system("cls");

	jogo();
}