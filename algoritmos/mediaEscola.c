#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	float av1, av2, semestre[1], media;
	
	for(i=0; i<=1; i++) {
		printf("Digite a nota da primeira avalia��o: ");
		scanf("%f", &av1);
		
		printf("Digite a nota da segunda avalia��o: ");
		scanf("%f", &av2);
		
		semestre[i] = (av1 + av2) / 2;
	}
	
	media = (semestre[0] + semestre[1]) / 2;
	
	system("cls");
	
	printf("M�dia do primeiro semestre: %.1f \n", semestre[0]);
	printf("M�dia do segundo semestre: %.1f \n", semestre[1]);
	printf("M�dia final: %.1f \n", media);
	printf("--------------------------------\n");
	
	if(media < 6) {
		printf("Voc� est� reprovado!");
	} else {
		printf("Voc� est� aprovado!");
	}

	return 0;
}
