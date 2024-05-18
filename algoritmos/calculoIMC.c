#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float peso, altura, imc;

  	printf("Digite o peso (em quilos): ");
  	scanf("%f", &peso); // "peso" recebe o valor digitado pelo usuário.

  	printf("Digite a altura (em metros): ");
  	scanf("%f", &altura); // "altura" recebe o valor digitado pelo usuário.

	// Cálculo para descobrir o IMC.
  	imc = peso / (altura * altura);
  	
	// Verificação do status do IMC.
  	if(imc <= 18.5) {
  		printf("Status: Abaixo do normal \n");
	} else if(imc <= 24.9) {
		printf("Status: Normal \n");
	} else if(imc <= 29.0) {
		printf("Status: Sobrepeso \n");
	} else if(imc <= 34.9) {
		printf("Status: Obesidade grau 1 \n");
	} else if(imc <= 39.9) {
		printf("Status: Obesidade grau 2 \n");
	} else if(imc >= 40.0) {
		printf("Status: Obesidade grau 3 \n");
	}

	system("pause");

	return 0;
}