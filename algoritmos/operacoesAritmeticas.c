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

// Menu do programa.
void menu() {
    // Estrutura while para repetir a escolha das op��es.
	while(1) {
        printf("[1] - Soma \n");
        printf("[2] - Subtra��o \n");
        printf("[3] - Multiplica��o \n");
        printf("[4] - Divis�o \n\n");
        
        printf("Escolha uma op��o de c�lculo: ");
        scanf(" %d", &escolha); // "escolha" recebe o n�mero digitado pelo usu�rio.

        if(escolha < 1 || escolha > 4) {
            printf("\nOp��o inv�lida! Voc� precisa digitar corretamente uma das op��es informadas. \n");
        } else {
            printf("\nDigite o primeiro valor: ");
            scanf(" %f", &n1); // "n1" recebe o valor digitado pelo usu�rio.
            printf("Digite o segundo valor: ");
            scanf(" %f", &n2); // "n2" recebe o valor digitado pelo usu�rio.

            // Verifica��o do valor de "escolha" para escolher a opera��o.
            switch(escolha) {
            case 1:
                resultado = soma(n1, n2); // "resultado" recebe o retorno da fun��o "soma()" com os atributos "n1" e "n2".
                printf("\nResultado: %.2f \n\n", resultado);
                break;
            case 2:
                resultado = subtracao(n1, n2); // "resultado" recebe o retorno da fun��o "subtracao()" com os atributos "n1" e "n2".
                printf("\nResultado: %.2f \n\n", resultado);
                break;
            case 3:
                resultado = multiplicacao(n1, n2); // "resultado" recebe o retorno da fun��o "multiplicacao()" com os atributos "n1" e "n2".
                printf("\nResultado: %.2f \n\n", resultado);
                break;
            case 4:
                resultado = divisao(n1, n2); // "resultado" recebe o retorno da fun��o "divisao()" com os atributos "n1" e "n2".
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
	
	menu(); // Chamando a fun��o de menu do programa.
	
	return 0;
}