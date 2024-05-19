#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int qtdAvs, i;
	float semestre1, semestre2, mediaFinal;
	
	printf("Quantas avaliações são realizadas por semestre? ");
	scanf("%d", &qtdAvs); // "qtdAvs" recebe a quantidade digitada pelo usuário.
	
	// Definindo o tamando do vetor "av" pelo valor de "qtdAvs".
	float av[qtdAvs];
	
	// Cálculo da média do primeiro semestre.
	printf("\nPrimeiro semestre\n");
	// Estrutura for para contar as atividades.
	for(i=0; i<qtdAvs; i++) {
		printf("Digite a nota da %dª avaliação: ", i + 1);
    		scanf("%f", &av[i]); // A atividade atual recebe a nota digitado pelo usuário.
    		semestre1 += av[i]; // A nota da atividade atual é incrementada ao valor de "semestre1".

			// Quando a última atividade receber nota, será feito a média de "semestre1" pela quantidade total de atividades.
    		if(i == (qtdAvs - 1)) {
			semestre1 /= qtdAvs;
    		}
	}
	
	// Cálculo da média do segundo semestre.
	printf("\nSegundo semestre\n");
	// Estrutura for para contar as atividades.
	for(i=0; i<qtdAvs; i++) {
		printf("Digite a nota da %dª avaliação : ", i + 1);
    		scanf("%f", &av[i]); // A atividade atual recebe a nota digitado pelo usuário.
    		semestre2 += av[i]; // A nota da atividade atual é incrementada ao valor de "semestre2".
    		
			// Quando a última atividade receber nota, será feito a média de "semestre2" pela quantidade total de atividades.
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