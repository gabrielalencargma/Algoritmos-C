#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int horas = 0, minutos = 0, segundos = 0;
    
	while(1) {
		system("cls");
		segundos++;
		if(segundos == 60) {
			segundos = 0;
			minutos++;
			if(minutos == 60) {
				minutos = 0;
				horas++;
			}
		}
		printf("%.2d : %.2d : %.2d", horas, minutos, segundos);
		sleep(1);
	}
	
	return 0;
}
