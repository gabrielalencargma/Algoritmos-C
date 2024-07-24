#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, temp;
	
	printf("Digite o valor de n1: ");
	scanf("%i", &n1); // "n1" recebe o valor digitado pelo usuário.
	
	printf("Digite o valor de n2: ");
	scanf("%i", &n2); // "n2" recebe o valor digitado pelo usuário.
	
	temp = n1; // "temp" guarda o valor de "n1".
	n1 = n2; // "n1" recebe o valor de "n2".
	n2 = temp; // "n2" recebe o valor de "temp".
	
	// Print das váriaveis após a troca.
	printf("n1: %i \n", n1);
	printf("n2: %i \n", n2);
	
	system("pause");

	return 0;
}