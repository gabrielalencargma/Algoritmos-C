#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

	int n, i;
	
	printf("Escolha um n�mero: ");
	scanf(" %d", &n); // "n" recebe o n�mero digitado pelo usu�rio.
	
    system("cls");

    printf("Tabuada do %d\n\n", n);

	// Estrutura for para contar de 0 a 10.
	for(i = 0; i <= 10; i++)
	{
		printf("%d x %d = %d\n", n, i, n * i); // Print do valor atual de "i" multiplicado por "n".
	}
	
	printf("\n");
	system("pause");
}