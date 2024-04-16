#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

	int n, i;
	
	printf("Escolha um número: ");
	scanf(" %d", &n);
	
    system("cls");

    printf("Tabuada do %d\n\n", n);

	for(i = 0; i <= 10; i++)
	{
		printf("%d x %d = %d\n", n, i, n * i);
	}
	
	printf("\n");
	system("pause");
}