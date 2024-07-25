#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int horas = 0, minutos = 0, segundos = 0;
    
	// Estrutura while cronometrar o tempo.
	while(1) {
		system("cls");
		segundos++; // Incrementando 1 no valor de "segundos".
		// Se o valor de "segundos" chegar a 60...
		if(segundos == 60) {
			segundos = 0; // "segundos" recebe o valor 0.
			minutos++; // Incrementando 1 no valor de "minutos".
			// Se o valor de "minutos" chegar a 60..
			if(minutos == 60) {
				minutos = 0; // "minutos" recebe o valor 0.
				horas++; // Incrementando 1 no valor de "horas".
			}
		}
		printf("%.2d : %.2d : %.2d", horas, minutos, segundos);
		sleep(1); // Pausa de 1 segundo.
	}
	
	return 0;
}
