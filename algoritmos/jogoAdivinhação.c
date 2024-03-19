#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int repetir;
char escolha;

void aveNaoVoadora() {
	repetir = 1;
	while(repetir) {
		repetir = 0;
		printf("\nEle vive em regiões tropicais? (s/n) \n");
		scanf(" %c", &escolha);
			
		if(escolha == 's' || escolha == 'S') {
			printf("\nVocê pensou em um avestruz!");
		}
		else if(escolha == 'n' || escolha == 'N') {
			printf("\nEle vive em regiões polares? (s/n) \n");
			scanf(" %c", &escolha);
			
			if(escolha == 's' || escolha == 'S') {
				printf("\nVocê pensou em um pinguim!");
			}
			else if(escolha == 'n' || escolha == 'N') {
				printf("\nNão compreendi, responda novamente...\n");
				repetir = 1;
			}
		}
	}	
}

void ave() {
	repetir = 1;
	while(repetir) {
		repetir = 0;
		printf("\nEle voa? (s/n) \n");
		scanf(" %c", &escolha);
			
		if(escolha == 'n' || escolha == 'N') {
			aveNaoVoadora();
		}
		else if(escolha == 's' || escolha == 'S') {
			printf("\nEle nada? (s/n) \n");
			scanf(" %c", &escolha);
		
			if(escolha == 's' || escolha == 'S') {
				printf("\nVocê pensou em um pato!");
			}
			else if(escolha == 'n' || escolha == 'N') {
				printf("\nEle é de rapina? (s/n) \n");
				scanf(" %c", &escolha);
				
				if(escolha == 's' || escolha == 'S') {
					printf("\nVocê pensou em uma águia!");
				}
				else if(escolha == 'n' || escolha == 'N') {
					printf("\nNão compreendi, responda novamente...\n");
					repetir = 1;
				}
			}
		}
	}
}

void reptil() {
	repetir = 1;
	while(repetir) {
		repetir = 0;
		printf("\nEle tem casco? (s/n) \n");
		scanf(" %c", &escolha);
	
		if(escolha == 's' || escolha == 'S') {
			printf("\nVocê pensou em uma tartatuga!");
		}		
		else if(escolha == 'n' || escolha == 'N') {
			printf("\nEle tem patas? (s/n) \n");
			scanf(" %c", &escolha);
					
			if(escolha == 'n' || escolha == 'N') {
				printf("\nVocê pensou em uma cobra!");
			}
			else if(escolha == 's' || escolha == 'S') {
				printf("\nEle é carnívoro? (s/n) \n");
				scanf(" %c", &escolha);
						
				if(escolha == 's' || escolha == 'S') {
					printf("\nVocê pensou em um crocodilo!");
				}
				else if(escolha == 'n' || escolha == 'N') {
					printf("\nNão compreendi, responda novamente...\n");
					repetir = 1;
				}
			}
		}
	}
	
}

void quadrupede() {
	repetir = 1;
	while(repetir) {
		repetir = 0;
		printf("\nEle é carnívoro? (s/n) \n");
		scanf(" %c", &escolha);
			
		if(escolha == 's' || escolha == 'S') {
			printf("\nVocê pensou em um leão!");
		} 
		else if(escolha == 'n' || escolha == 'N') {
			printf("\nEle é herbívoro? (s/n) \n");
			scanf(" %c", &escolha);
				
			if(escolha == 's' || escolha == 'S') {
				printf("\nVocê pensou em um cavalo!");
			} 
			else if(escolha == 'n' || escolha == 'N') {
				printf("\nNão compreendi, responda novamente...\n");
				repetir = 1;
			}
		}
	}
}

void bipede() {
	repetir = 1;
	while(repetir) {
		repetir = 0;
		printf("\nEle é onívoro? (s/n) \n");
		scanf(" %c", &escolha);
			
		if(escolha == 's' || escolha == 'S') {
			printf("\nVocê pensou em um homem!");
		} 
		else if(escolha == 'n' || escolha == 'N') {
			printf("\nEle é herbívoro? (s/n) \n");
			scanf(" %c", &escolha);
			
			if(escolha == 's' || escolha == 'S') {
				printf("\nVocê pensou em um macaco!");
			}
			else if(escolha == 'n' || escolha == 'N') {
				printf("\nNão compreendi, responda novamente...\n");
				repetir = 1;
			}
		}
	}
}

void mamifero() {
	repetir = 1;
	while(repetir) {
		repetir = 0;
		printf("\nEle é quadrúpede? (s/n) \n");
		scanf(" %c", &escolha);
		
		if(escolha == 's' || escolha == 'S') {
			quadrupede();
		} 
		else if(escolha == 'n' || escolha == 'N') {
			printf("\nEle é bípede? (s/n) \n");
			scanf(" %c", &escolha);
			
			if(escolha == 's' || escolha == 'S') {
				bipede();
			}
			else if(escolha == 'n' || escolha == 'N') {
				printf("\nEle voa? (s/n) \n");
				scanf(" %c", &escolha);
			
				if(escolha == 's' || escolha == 'S') {
					printf("\nVocê pensou em um morcego!");
				} 
				else if(escolha == 'n' || escolha == 'N') {
					printf("\nEle nada? (s/n) \n");
					scanf(" %c", &escolha);
				
					if(escolha == 's' || escolha == 'S') {
						printf("\nVocê pensou em uma baleia!");
					}
					else if(escolha == 'n' || escolha == 'N') {
						printf("\nNão compreendi, responda novamente...\n");
						repetir = 1;
					}
				}
			}
		}
	}	
}

void animal() {
	system("cls");
	repetir = 1;
	while(repetir) {
		repetir = 0;
		printf("Seu animal é um mamífero? (s/n) \n");
		scanf(" %c", &escolha);
		
		if(escolha == 's' || escolha == 'S') {
			mamifero();
		}
		else if(escolha == 'n' || escolha == 'N') {
			printf("\nSeu animal é uma ave? (s/n) \n");
			scanf(" %c", &escolha);
			
			if(escolha == 's' || escolha == 'S') {
				ave();
			}
			else if(escolha == 'n' || escolha == 'N') {
				printf("\nSeu animal é um réptil? (s/n) \n");
				scanf(" %c", &escolha);
				
				if(escolha == 's' || escolha == 'S') {
					reptil();
				}
				else if(escolha == 'n' || escolha == 'N') {
					printf("\nNão compreendi, responda novamente...\n\n");
					repetir = 1;
				}
			}
		}
	}
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    while(repetir) {
        repetir = 0;

        printf("Jogo da Adivinhação \n\n");
	    printf("Iniciar - (1) \n");
	    printf("Sair - (0) \n\n");

        scanf(" %c", &escolha);

        switch(escolha) {
	        case '0':
	    	    break;
	        case '1':
	    	    animal();	
                break;
            default:
                repetir = 1;
                printf("Erro! Escolha uma das opções novamente. \n");
                system("pause");
                break;
	    } 

        system("cls"); 
    }
}