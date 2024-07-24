#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

// O cálculo de renda fixa será com base em juros compostos.

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int prazo;
	float investimento, rent_anual, rent_mensal, inflacao_anual, inflacao_mensal, rendBruto, rendLiquido, rent_real_anual, rent_real_mensal;
	
	printf("Digite o valor que deseja investir (apenas números): ");
	scanf(" %f", &investimento); // "investimento" recebe o valor digitado pelo usuário.
	
	printf("Digite o prazo do investimento em meses: ");
	scanf(" %d", &prazo); // "prazo" recebe o valor digitado pelo usuário.
	
	printf("Digite a porcentagem de rentabilidade anual do investimento (apenas números): ");
	scanf(" %f", &rent_anual); // "rent_anual" recebe o valor digitado pelo usuário.
	
	printf("Digite a porcentagem de inflação anual (apenas números): ");
	scanf(" %f", &inflacao_anual); // "inflacao_anual" recebe o valor digitado pelo usuário.
	
	rent_mensal = rent_anual / 12; // Cálculo para dividir o valor de "rent_anual" em meses.
	inflacao_mensal = inflacao_anual / 12; // Cálculo para dividir o valor de "inflacao_anual" em meses.
	
	/* Cálculo para descobrir a retabilidade real no ano, através da equação: (1 + rentabilidade) / (1 + inflação) - 1
	
	   O cálculo precisa utilizar valores decimais, então primeiro as váriaveis são convertidas para decimal, 
	   depois o resultado é convertido para porcentagem novamente.
	*/
	rent_real_anual = ((1 + (rent_anual/100)) / (1 + inflacao_anual/100) - 1) * 100;
	
	rent_real_mensal = rent_real_anual / 12; // Cálculo para dividir o valor de "rent_real_anual" em meses.

	/* Cálculo para descobrir o rendimento bruto, através da equação: investimento * (1 + rentabilidade) ^ prazo
	
	   "rent_mensal" precisa ser convertida de porcentagem para decimal.

	   pow() está fazendo a potência de "rent_mensal" elevado a "prazo".
	*/
	rendBruto = investimento * pow((rent_mensal/100) + 1, prazo);
	
	/* Cálculo para descobrir o rendimento liquido, através da equação: investimento * (1 + rentabilidade real) ^ prazo
	
	   "rent_real_mensal" precisa ser convertida de porcentagem para decimal.

	   pow() está fazendo a potência de "rent_real_mensal" elevado a "prazo".
	*/
	rendLiquido = investimento * pow((rent_real_mensal/100) + 1, prazo);
	
	system("cls");
	
	// Print dos dados sobre o investimento.
	printf("Valor investido: R$ %.2f \n", investimento);
	printf("Prazo do Investimento: %d meses \n", prazo);
	printf("------------------------------------- \n");
	printf("Taxa de Juros do Investimento (anual): %.1f %% \n", rent_anual);
	printf("Taxa de Juros do Investimento (mensal): %.1f %% \n", rent_mensal);
	printf("inflacao_anual (anual): %.1f %% \n", inflacao_anual);
	printf("inflacao_anual (mensal): %.1f %% \n", inflacao_mensal);
	printf("------------------------------------- \n");
	printf("Redimento Bruto: R$ %.2f \n", rendBruto);
	printf("Redimento Líquido: R$ %.2f \n", rendLiquido);
	printf("Rentabilidade Real (Anual): %.1f%% \n", rent_real_anual);
	printf("Rentabilidade Real (Mensal): %.1f%% \n", rent_real_mensal);

    system("pause");
}