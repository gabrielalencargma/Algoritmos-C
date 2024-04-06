#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int escolha;
float n1, n2, resultado;

// Função para retornar a soma de "n1" e "n2".
float soma(float n1, float n2) {
	return n1 + n2;
}

// Função para retornar a subtração de "n1" e "n2".
float subtracao(float n1, float n2) {
	return n1 - n2;
}

// Função para retornar a multiplicação de "n1" e "n2".
float multiplicacao(float n1, float n2) {
	return n1 * n2;
}

// Função para retornar a divisão de "n1" e "n2".
float divisao(float n1, float n2) {
	return n1 / n2;
}

// Função para exibir o menu do programa.
void menu() {
	while(1) {
        printf("[1] - Soma \n");
        printf("[2] - Subtração \n");
        printf("[3] - Multiplicação \n");
        printf("[4] - Divisão \n\n");
        
        // Definindo o valor de "escolha".
        printf("Escolha uma opção de cálculo: ");
        scanf(" %d", &escolha);

        if(escolha < 1 || escolha > 4) {
            printf("\nOpção inválida! Você precisa digitar corretamente uma das opções informadas. \n");
        } else {
            // Definindo os valores de "n1" e "n2".
            printf("\nDigite o primeiro valor: ");
            scanf(" %f", &n1);
            printf("Digite o segundo valor: ");
            scanf(" %f", &n2);

            // Decidindo a operação aritmética com base no valor de "escolha".
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