#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int repetir;
char escolha;

void aveNaoVoadora() {
	repetir = 1;
	while(repetir) {
		repetir = 0;
		printf("\nEle vive em regi�es tropicais? (s/n) \n");
		scanf(" %c", &escolha);
			
		if(escolha == 's' || escolha == 'S') {
			printf("\nVoc� pensou em um avestruz!");
		}
		else if(escolha == 'n' || escolha == 'N') {
			printf("\nEle vive em regi�es polares? (s/n) \n");
			scanf(" %c", &escolha);
			
			if(escolha == 's' || escolha == 'S') {
				printf("\nVoc� pensou em um pinguim!");
			}
			else if(escolha == 'n' || escolha == 'N') {
				printf("\nN�o compreendi, responda novamente...\n");
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
				printf("\nVoc� pensou em um pato!");
			}
			else if(escolha == 'n' || escolha == 'N') {
				printf("\nEle � de rapina? (s/n) \n");
				scanf(" %c", &escolha);
				
				if(escolha == 's' || escolha == 'S') {
					printf("\nVoc� pensou em uma �guia!");
				}
				else if(escolha == 'n' || escolha == 'N') {
					printf("\nN�o compreendi, responda novamente...\n");
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
			printf("\nVoc� pensou em uma tartatuga!");
		}		
		else if(escolha == 'n' || escolha == 'N') {
			printf("\nEle tem patas? (s/n) \n");
			scanf(" %c", &escolha);
					
			if(escolha == 'n' || escolha == 'N') {
				printf("\nVoc� pensou em uma cobra!");
			}
			else if(escolha == 's' || escolha == 'S') {
				printf("\nEle � carn�voro? (s/n) \n");
				scanf(" %c", &escolha);
						
				if(escolha == 's' || escolha == 'S') {
					printf("\nVoc� pensou em um crocodilo!");
				}
				else if(escolha == 'n' || escolha == 'N') {
					printf("\nN�o compreendi, responda novamente...\n");
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
		printf("\nEle � carn�voro? (s/n) \n");
		scanf(" %c", &escolha);
			
		if(escolha == 's' || escolha == 'S') {
			printf("\nVoc� pensou em um le�o!");
		} 
		else if(escolha == 'n' || escolha == 'N') {
			printf("\nEle � herb�voro? (s/n) \n");
			scanf(" %c", &escolha);
				
			if(escolha == 's' || escolha == 'S') {
				printf("\nVoc� pensou em um cavalo!");
			} 
			else if(escolha == 'n' || escolha == 'N') {
				printf("\nN�o compreendi, responda novamente...\n");
				repetir = 1;
			}
		}
	}
}

void bipede() {
	repetir = 1;
	while(repetir) {
		repetir = 0;
		printf("\nEle � on�voro? (s/n) \n");
		scanf(" %c", &escolha);
			
		if(escolha == 's' || escolha == 'S') {
			printf("\nVoc� pensou em um homem!");
		} 
		else if(escolha == 'n' || escolha == 'N') {
			printf("\nEle � herb�voro? (s/n) \n");
			scanf(" %c", &escolha);
			
			if(escolha == 's' || escolha == 'S') {
				printf("\nVoc� pensou em um macaco!");
			}
			else if(escolha == 'n' || escolha == 'N') {
				printf("\nN�o compreendi, responda novamente...\n");
				repetir = 1;
			}
		}
	}
}

void mamifero() {
	repetir = 1;
	while(repetir) {
		repetir = 0;
		printf("\nEle � quadr�pede? (s/n) \n");
		scanf(" %c", &escolha);
		
		if(escolha == 's' || escolha == 'S') {
			quadrupede();
		} 
		else if(escolha == 'n' || escolha == 'N') {
			printf("\nEle � b�pede? (s/n) \n");
			scanf(" %c", &escolha);
			
			if(escolha == 's' || escolha == 'S') {
				bipede();
			}
			else if(escolha == 'n' || escolha == 'N') {
				printf("\nEle voa? (s/n) \n");
				scanf(" %c", &escolha);
			
				if(escolha == 's' || escolha == 'S') {
					printf("\nVoc� pensou em um morcego!");
				} 
				else if(escolha == 'n' || escolha == 'N') {
					printf("\nEle nada? (s/n) \n");
					scanf(" %c", &escolha);
				
					if(escolha == 's' || escolha == 'S') {
						printf("\nVoc� pensou em uma baleia!");
					}
					else if(escolha == 'n' || escolha == 'N') {
						printf("\nN�o compreendi, responda novamente...\n");
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
		printf("Seu animal � um mam�fero? (s/n) \n");
		scanf(" %c", &escolha);
		
		if(escolha == 's' || escolha == 'S') {
			mamifero();
		}
		else if(escolha == 'n' || escolha == 'N') {
			printf("\nSeu animal � uma ave? (s/n) \n");
			scanf(" %c", &escolha);
			
			if(escolha == 's' || escolha == 'S') {
				ave();
			}
			else if(escolha == 'n' || escolha == 'N') {
				printf("\nSeu animal � um r�ptil? (s/n) \n");
				scanf(" %c", &escolha);
				
				if(escolha == 's' || escolha == 'S') {
					reptil();
				}
				else if(escolha == 'n' || escolha == 'N') {
					printf("\nN�o compreendi, responda novamente...\n\n");
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

        printf("Jogo da Adivinha��o \n\n");
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
                printf("Erro! Escolha uma das op��es novamente. \n");
                system("pause");
                break;
	    } 

        system("cls"); 
    }
}