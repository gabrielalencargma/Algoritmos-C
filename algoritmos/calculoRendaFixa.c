#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int prazo;
	float investimento, taxa_anual, taxa_mensal, inflacao, inflacao_mensal, rendBruto, rendLiquido, rentabilidade, p1, p2, p3, p4;
	
	printf("Digite o valor que deseja investir: ");
	scanf(" %f", &investimento);
	
	printf("Digite o prazo do investimento em meses: ");
	scanf(" %d", &prazo);
	
	printf("Digite a taxa de juros anual do investimento: ");
	scanf(" %f", &taxa_anual);
	
	printf("Digite a taxa de inflação anual: ");
	scanf(" %f", &inflacao);
	
	taxa_mensal = taxa_anual / 12;
	inflacao_mensal = inflacao / 12;
	
	p1 = (taxa_mensal/100) + 1;
	p2 = pow(p1, prazo);
	
	rendBruto = investimento * p2;
	
	rentabilidade = ((1 + (taxa_anual/100)) / (1 + inflacao/100) - 1) * 100;
	p3 = ((rentabilidade / 100) / 12) + 1;
	p4 = pow(p3, prazo);
	
	rendLiquido = investimento * p4;
	
	system("cls");
	
	printf("Valor investido: R$ %.2f \n", investimento);
	printf("Prazo do Investimento: %d meses \n", prazo);
	printf("------------------------------------- \n");
	printf("Taxa de Juros do Investimento (anual): %.1f %% \n", taxa_anual);
	printf("Taxa de Juros do Investimento (mensal): %.1f %% \n", taxa_mensal);
	printf("Inflacao (anual): %.1f %% \n", inflacao);
	printf("Inflacao (mensal): %.1f %% \n", inflacao_mensal);
	printf("------------------------------------- \n");
	printf("Redimento Bruto: R$ %.2f \n", rendBruto);
	printf("Redimento Líquido: R$ %.2f \n", rendLiquido);
	printf("Rentabilidade Real (Anual): %.1f%% \n", rentabilidade);
	printf("Rentabilidade Real (Mensal): %.1f%% \n", rentabilidade/12);

    system("pause");
}