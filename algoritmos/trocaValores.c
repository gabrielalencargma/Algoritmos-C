#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, temp;
	
	printf("Digite o primeiro número: ");
	scanf("%i", &n1);
	
	printf("Digite o segundo número: ");
	scanf("%i", &n2);
	
	printf("---------------------------\n");
	printf("Primeiro valor: %d \n", n1);
	printf("Segundo valor: %d \n", n2);
	printf("\n");
	
	temp = n1;
	n1 = n2;
	n2 = temp;
	
	printf("Primeiro valor trocado: %i \n", n1);
	printf("Segundo valor trocado: %i", n2);
	
	return 0;
}
