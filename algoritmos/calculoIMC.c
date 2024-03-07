#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float peso, altura, imc;

  	printf("Digite o peso (em quilos):\n");
  	scanf("%f", &peso);

  	printf("\nDigite a altura (em metros):\n");
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

	return 0;
}