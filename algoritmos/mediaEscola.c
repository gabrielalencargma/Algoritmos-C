#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int qtdAvs, i;
	float semestre1, semestre2, mediaFinal;
	
	printf("Quantas avaliações são realizadas por semestre? ");
	scanf("%d", &qtdAvs);
	
	float av[qtdAvs];
	
	// Cálculo da média do primeiro semestre
	printf("\nPrimeiro semestre\n");
	for(i=0; i<qtdAvs; i++) {
		printf("Digite a nota da %dª avaliação: ", i + 1);
    		scanf("%f", &av[i]);
    		semestre1 += av[i];
    	
    		if(i == (qtdAvs - 1)) {
			semestre1 /= qtdAvs;
    		}
	}
	
	// Cálculo da média do segundo semestre
	printf("\nSegundo semestre\n");
	for(i=0; i<qtdAvs; i++) {
		printf("Digite a nota da %dª avaliação : ", i + 1);
    		scanf("%f", &av[i]);
    		semestre2 += av[i];
    		
    		if(i == (qtdAvs - 1)) {
			semestre2 /= qtdAvs;
    		}
	}
	
	// Cálculo da média final
	mediaFinal = (semestre1 + semestre2) / 2;
	
	system("clear");
	
	// Print dos resultados
	printf("Média do primeiro semestre: %.1f \n", semestre1);
	printf("Média do segundo semestre: %.1f \n", semestre2);
	printf("Média final: %.1f \n\n", mediaFinal);
	
	if(mediaFinal < 6) {
		printf("Você está reprovado!");
	} else {
		printf("Você está aprovado!");
	}

	return 0;
}
