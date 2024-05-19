#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int qtdAvs, i;
	float semestre1, semestre2, mediaFinal;
	
	printf("Quantas avalia��es s�o realizadas por semestre? ");
	scanf("%d", &qtdAvs); // "qtdAvs" recebe a quantidade digitada pelo usu�rio.
	
	// Definindo o tamando do vetor "av" pelo valor de "qtdAvs".
	float av[qtdAvs];
	
	// C�lculo da m�dia do primeiro semestre.
	printf("\nPrimeiro semestre\n");
	// Estrutura for para contar as atividades.
	for(i=0; i<qtdAvs; i++) {
		printf("Digite a nota da %d� avalia��o: ", i + 1);
    		scanf("%f", &av[i]); // A atividade atual recebe a nota digitado pelo usu�rio.
    		semestre1 += av[i]; // A nota da atividade atual � incrementada ao valor de "semestre1".

			// Quando a �ltima atividade receber nota, ser� feito a m�dia de "semestre1" pela quantidade total de atividades.
    		if(i == (qtdAvs - 1)) {
			semestre1 /= qtdAvs;
    		}
	}
	
	// C�lculo da m�dia do segundo semestre.
	printf("\nSegundo semestre\n");
	// Estrutura for para contar as atividades.
	for(i=0; i<qtdAvs; i++) {
		printf("Digite a nota da %d� avalia��o : ", i + 1);
    		scanf("%f", &av[i]); // A atividade atual recebe a nota digitado pelo usu�rio.
    		semestre2 += av[i]; // A nota da atividade atual � incrementada ao valor de "semestre2".
    		
			// Quando a �ltima atividade receber nota, ser� feito a m�dia de "semestre2" pela quantidade total de atividades.
    		if(i == (qtdAvs - 1)) {
			semestre2 /= qtdAvs;
    		}
	}
	
	// C�lculo da m�dia final.
	mediaFinal = (semestre1 + semestre2) / 2;
	
	system("cls");
	
	// Verifica��o do status do aluno.
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