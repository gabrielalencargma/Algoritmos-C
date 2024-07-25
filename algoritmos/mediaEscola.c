#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int qtdAvs, i;
	float semestre1, semestre2, mediaFinal;
	
	printf("Quantas avaliações são realizadas por semestre? ");
	scanf("%d", &qtdAvs); // "qtdAvs" recebe o valor digitado pelo usuário.
	
	// Definindo o tamando do vetor "av[]" com base na quantidade de avaliações.
	float av[qtdAvs];
	
	// Cálculo da média do primeiro semestre.
	printf("\nPrimeiro semestre\n");
	// Estrutura for para contar as avaliações.
	for(i=0; i<qtdAvs; i++) {
		printf("Digite a nota da %dª avaliação: ", i + 1);
    	scanf("%f", &av[i]); // A nota da avaliação atual recebe o valor digitado pelo usuário.
    	semestre1 += av[i]; // Incrementando a nota da avaliação atual no valor de "semestre1".

		// Se for a última avaliação, será feito o cálculo da média de "semestre1".
    	if(i == (qtdAvs - 1)) {
			semestre1 /= qtdAvs;
    	}
	}
	
	// Cálculo da média do segundo semestre.
	printf("\nSegundo semestre\n");
	// Estrutura for para contar as avaliações.
	for(i=0; i<qtdAvs; i++) {
		printf("Digite a nota da %dª avaliação : ", i + 1);
    	scanf("%f", &av[i]); // A nota da avaliação atual recebe o valor digitado pelo usuário.
    	semestre2 += av[i]; // Incrementando a nota da avaliação atual no valor de "semestre2".
    		
		// Se for a última avaliação, será feito o cálculo da média de "semestre2".
    	if(i == (qtdAvs - 1)) {
			semestre2 /= qtdAvs;
    	}
	}
	
	// Cálculo da média final.
	mediaFinal = (semestre1 + semestre2) / 2;
	
	system("cls");
	
	// Verificação do status do aluno.
	if(mediaFinal > 5) {
		printf("Aprovado! \n\n");
	} else {
		printf("Reprovado! \n\n");
	}

	printf("Média do primeiro semestre: %.1f \n", semestre1);
	printf("Média do segundo semestre: %.1f \n", semestre2);
	printf("Média final: %.1f \n", mediaFinal);

	system("pause");

	return 0;
}