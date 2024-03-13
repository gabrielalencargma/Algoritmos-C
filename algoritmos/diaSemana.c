#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int dia;

void escolha() {
    switch(dia) {
        case 1:
            printf("\nDomingo. \n");
            break;
        case 2:
            printf("\nSegunda-feira. \n");
            break;
        case 3:
            printf("\nTer�a-feira. \n");
            break;
        case 4:
            printf("\nQuarta-feira. \n");
            break;
        case 5:
            printf("\nQuinta-feira. \n");
            break;
        case 6:
            printf("\nSexta-feira. \n");
            break;
        case 7:
            printf("\nS�bado. \n");
            break;
        default:
            printf("\nN�mero inv�lido! Digite apenas um dos n�meros informados. \n");
            break;
    }
}

void menu() {
    while(1) {
        printf("[1] - Domingo \n");
        printf("[2] - Segunda-feira \n");
        printf("[3] - Ter�a-feira \n");
        printf("[4] - Quarta-feira \n");
        printf("[5] - Quinta-feira \n");
        printf("[6] - Sexta-feira \n");
        printf("[7] - S�bado \n\n");

        printf("Digite um dia da semana: ");
        scanf("%d", &dia);

        escolha();

        system("pause");
    }
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	menu();

    return 0;
}