#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int qtdAvs, i;
	float semestre1, semestre2, mediaFinal;
	
	printf("Quantas avalia��es s�o realizadas por semestre? ");
	scanf("%d", &qtdAvs);
	
	float av[qtdAvs];
	
	// C�lculo da m�dia do primeiro semestre.
	printf("\nPrimeiro semestre\n");
	for(i=0; i<qtdAvs; i++) {
		printf("Digite a nota da %d� avalia��o: ", i + 1);
    		scanf("%f", &av[i]);
    		semestre1 += av[i];
    	
    		if(i == (qtdAvs - 1)) {
			semestre1 /= qtdAvs;
    		}
	}
	
	// C�lculo da m�dia do segundo semestre.
	printf("\nSegundo semestre\n");
	for(i=0; i<qtdAvs; i++) {
		printf("Digite a nota da %d� avalia��o : ", i + 1);
    		scanf("%f", &av[i]);
    		semestre2 += av[i];
    		
    		if(i == (qtdAvs - 1)) {
			semestre2 /= qtdAvs;
    		}
	}
	
	// C�lculo da m�dia final.
	mediaFinal = (semestre1 + semestre2) / 2;
	
	system("cls");
	
	// Print dos resultados.
	if(mediaFinal > 5) {
		printf("Aprovado! \n\n");
	} else {
		printf("Reprovado! \n\n");
	}

	printf("M�dia do primeiro semestre: %.1f \n", semestre1);
	printf("M�dia do segundo semestre: %.1f \n", semestre2);
	printf("M�dia final: %.1f \n", mediaFinal);

	system("pause");

	return 0;
}