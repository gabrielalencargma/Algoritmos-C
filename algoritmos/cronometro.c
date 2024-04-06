#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int horas = 0, minutos = 0, segundos = 0;
    
	// Estrutura while para fazer a cronometragem em segundos.
	while(1) {
		system("cls");
		segundos++;
		// Quando a varíavel "segundos" chegar a 60, seu valor será zerado, e a varíavel "minutos" aumentará em 1.
		if(segundos == 60) {
			segundos = 0;
			minutos++;
			// Quando a varíavel "minutos" chegar a 60, seu valor será zerado, e a varíavel "horas" aumentará em 1.
			if(minutos == 60) {
				minutos = 0;
				horas++;
			}
		}
		printf("%.2d : %.2d : %.2d", horas, minutos, segundos);
		// Intervalo de 1 segundo antes da repetição do processo.
		sleep(1);
	}
	
	return 0;
}
