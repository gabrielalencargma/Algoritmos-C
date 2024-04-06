#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int escolha;
float n1, n2, resultado;

// Fun��o para retornar a soma de "n1" e "n2".
float soma(float n1, float n2) {
	return n1 + n2;
}

// Fun��o para retornar a subtra��o de "n1" e "n2".
float subtracao(float n1, float n2) {
	return n1 - n2;
}

// Fun��o para retornar a multiplica��o de "n1" e "n2".
float multiplicacao(float n1, float n2) {
	return n1 * n2;
}

// Fun��o para retornar a divis�o de "n1" e "n2".
float divisao(float n1, float n2) {
	return n1 / n2;
}

// Fun��o para exibir o menu do programa.
void menu() {
	while(1) {
        printf("[1] - Soma \n");
        printf("[2] - Subtra��o \n");
        printf("[3] - Multiplica��o \n");
        printf("[4] - Divis�o \n\n");
        
        // Definindo o valor de "escolha".
        printf("Escolha uma op��o de c�lculo: ");
        scanf(" %d", &escolha);

        if(escolha < 1 || escolha > 4) {
            printf("\nOp��o inv�lida! Voc� precisa digitar corretamente uma das op��es informadas. \n");
        } else {
            // Definindo os valores de "n1" e "n2".
            printf("\nDigite o primeiro valor: ");
            scanf(" %f", &n1);
            printf("Digite o segundo valor: ");
            scanf(" %f", &n2);

            // Decidindo a opera��o aritm�tica com base no valor de "escolha".
            switch(escolha) {
            case 1:
                resultado = soma(n1, n2);
                printf("\nResultado: %.2f \n\n", resultado);
                break;
            case 2:
                resultado = subtracao(n1, n2);
                printf("\nResultado: %.2f \n\n", resultado);
                break;
            case 3:
                resultado = multiplicacao(n1, n2);
                printf("\nResultado: %.2f \n\n", resultado);
                break;
            case 4:
                resultado = divisao(n1, n2);
                printf("\nResultado: %.2f \n\n", resultado);
                break;
            }
        }

        system("pause");
        system("cls");
    }
	
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	menu();
	
	return 0;
}