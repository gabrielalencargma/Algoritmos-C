#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int repetir = 1;
char escolha;

void aveNaoVoadora() {
	repetir = 1;

	while(repetir) {
		repetir = 0;

		printf("\nEle vive em regiões tropicais? (s/n) \n");
		scanf(" %c", &escolha);
			
		if(escolha == 's' || escolha == 'S') {
			printf("\nVocê pensou em um avestruz! \n");
            system("pause");
		}
		else if(escolha == 'n' || escolha == 'N') {
			printf("\nEle vive em regiões polares? (s/n) \n");
			scanf(" %c", &escolha);
			
			if(escolha == 's' || escolha == 'S') {
				printf("\nVocê pensou em um pinguim! \n");
                system("pause");
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
				printf("\nVocê pensou em um pato! \n");
                system("pause");
			}
			else if(escolha == 'n' || escolha == 'N') {
				printf("\nEle é de rapina? (s/n) \n");
				scanf(" %c", &escolha);
				
				if(escolha == 's' || escolha == 'S') {
					printf("\nVocê pensou em uma águia! \n");
                    system("pause");
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
			printf("\nVocê pensou em uma tartatuga! \n");
            system("pause");
		}		
		else if(escolha == 'n' || escolha == 'N') {
			printf("\nEle tem patas? (s/n) \n");
			scanf(" %c", &escolha);
					
			if(escolha == 'n' || escolha == 'N') {
				printf("\nVocê pensou em uma cobra! \n");
                system("pause");
			}
			else if(escolha == 's' || escolha == 'S') {
				printf("\nEle é carnívoro? (s/n) \n");
				scanf(" %c", &escolha);
						
				if(escolha == 's' || escolha == 'S') {
					printf("\nVocê pensou em um crocodilo! \n");
                    system("pause");
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
			printf("\nVocê pensou em um leão! \n");
            system("pause");
		} 
		else if(escolha == 'n' || escolha == 'N') {
			printf("\nEle é herbívoro? (s/n) \n");
			scanf(" %c", &escolha);
				
			if(escolha == 's' || escolha == 'S') {
				printf("\nVocê pensou em um cavalo! \n");
                system("pause");
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
			printf("\nVocê pensou em um homem! \n");
            system("pause");
		} 
		else if(escolha == 'n' || escolha == 'N') {
			printf("\nEle é herbívoro? (s/n) \n");
			scanf(" %c", &escolha);
			
			if(escolha == 's' || escolha == 'S') {
				printf("\nVocê pensou em um macaco! \n");
                system("pause");
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
					printf("\nVocê pensou em um morcego! \n");
                    system("pause");
				} 
				else if(escolha == 'n' || escolha == 'N') {
					printf("\nEle nada? (s/n) \n");
					scanf(" %c", &escolha);
				
					if(escolha == 's' || escolha == 'S') {
						printf("\nVocê pensou em uma baleia! \n");
                        system("pause");
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
	    printf("[1] - Iniciar \n");
	    printf("[0] - Sair \n\n");

        scanf(" %c", &escolha);

        switch(escolha) {
	        case '0':
	    	    break;
	        case '1':
                system("cls");
	    	    animal();	
                break;
            default:
                repetir = 1;
                printf("\nErro! Escolha uma das opções novamente. \n");
                system("pause");
                break;
	    } 

        system("cls"); 
    }
}