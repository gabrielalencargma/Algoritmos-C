#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

// Fun��o do jogo.
void jogo() {
	int player, bot, i, playerPontos = 0, botPontos = 0;
	
	// Estrutura for para cada rodada.
	for(i = 1; i <= 3; i++){
		// Print do placar atual.
        printf("---------------------------\n");
		printf("   Player [%d] - [%d] Bot \n", playerPontos, botPontos);
		printf("---------------------------\n\n");

		printf("[1] - Pedra \n[2] - Papel \n[3] - Tesoura\n\n");
        printf("Fa�a sua jogada: ");
		// Definindo a escolha do jogador.
		scanf(" %d", &player);
		
		// Definindo a escolha da m�quina, atrav�s do sorteio dos n�meros 1 a 3.
		bot = (rand() % 3) + 1;
		
		// Verifica��o do resultado da rodada.
		if(player == bot) {
			printf("\nEmpate! \n");
		} else if((player == 1 && bot == 3) || (player == 2 && bot == 1) || (player == 3 && bot == 2)) {
			printf("\nVit�ria! \n");
			playerPontos += 1;
		} else {
			printf("\nDerrota! \n");
			botPontos += 1;
		}
		
		system("pause");
		system("cls");
	}
	
	// Verifica��o do resultado do jogo.
	if(playerPontos == botPontos) {
		printf("Foi quase, voc�s empataram!");
	} else if(playerPontos > botPontos) {
		printf("Parab�ns, voc� ganhou!");
	} else {
		printf("Infelizmente, voc� perdeu...");
	}
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	
	printf("Vamos jogar jokenp�? \n\n");
	printf("Ser�o 3 rodadas para definir o vencedor. \n");
	
	system("pause");

	system("cls");

	jogo();
}