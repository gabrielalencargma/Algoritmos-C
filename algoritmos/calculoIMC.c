#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calculo_imc() {
	float peso, altura, imc;

  	printf("Digite seu peso (em kgs):\n");
  	scanf("%f", &peso);

  	printf("\nDigite sua altura (em metros):\n");
  	scanf("%f", &altura);

  	imc = peso / (altura * altura);
  	
  	if(imc <= 18.5) {
  		printf("\nStatus: Abaixo do normal");
	} else if(imc <= 24.9) {
		printf("\nStatus: Normal");
	} else if(imc <= 29.0) {
		printf("\nStatus: Sobrepeso");
	} else if(imc <= 34.9) {
		printf("\nStatus: Obesidade grau 1");
	} else if(imc <= 39.9) {
		printf("\nStatus: Obesidade grau 2");
	} else if(imc >= 40.0) {
		printf("\nStatus: Obesidade grau 3");
	}
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	printf("Bem-vindo ao calculador de IMC!\n\n");
	
	calculo_imc();

	return 0;
}
