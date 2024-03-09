#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, temp;
	
	printf("Digite o valor de n1: ");
	scanf("%i", &n1);
	
	printf("Digite o valor de n2: ");
	scanf("%i", &n2);
	
	// A váriavel temp guardará o valor de n1, para que n1 receba o valor de n2 e, em seguida, n2 receba o valor de temp.
	temp = n1;
	n1 = n2;
	n2 = temp;
	
	// Print das váriaveis após a troca.
	printf("n1: %i \n", n1);
	printf("n2: %i \n", n2);
	
	system("pause");

	return 0;
}