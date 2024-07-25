#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int repetir = 1;
char escolha;

// Perguntas para aves n�o voadoras.
void aveNaoVoadora() {
	repetir = 1;

	// Estrutura while para repetir as perguntas enquanto o valor de "repetir" for 1.
	while(repetir) {
		repetir = 0; // "repetir" recebe o valor 0.

		printf("\nEle vive em regi�es tropicais? (s/n) \n");
		scanf(" %c", &escolha); // "escolha" recebe o texto do jogador.
			
		if(escolha == 's' || escolha == 'S') {
			printf("\nVoc� pensou em um avestruz! \n");
            system("pause");
		}
		else if(escolha == 'n' || escolha == 'N') {
			printf("\nEle vive em regi�es polares? (s/n) \n");
			scanf(" %c", &escolha); // "escolha" recebe o texto do jogador.
			
			if(escolha == 's' || escolha == 'S') {
				printf("\nVoc� pensou em um pinguim! \n");
                system("pause");
			}
			else if(escolha == 'n' || escolha == 'N') {
				printf("\nN�o compreendi, responda novamente...\n");
				repetir = 1; // "repetir" recebe o valor 1.
			}
		}
	}	
}

// Perguntas para aves.
void ave() {
	repetir = 1;

	// Estrutura while para repetir as perguntas enquanto o valor de "repetir" for 1.
	while(repetir) {
		repetir = 0; // "repetir" recebe o valor 0.

		printf("\nEle voa? (s/n) \n");
		scanf(" %c", &escolha); // "escolha" recebe o texto do jogador.
			
		if(escolha == 'n' || escolha == 'N') {
			aveNaoVoadora();  // Chamando a fun��o "aveNaoVoadora()".
		}
		else if(escolha == 's' || escolha == 'S') {
			printf("\nEle nada? (s/n) \n");
			scanf(" %c", &escolha); // "escolha" recebe o texto do jogador.
		
			if(escolha == 's' || escolha == 'S') {
				printf("\nVoc� pensou em um pato! \n");
                system("pause");
			}
			else if(escolha == 'n' || escolha == 'N') {
				printf("\nEle � de rapina? (s/n) \n");
				scanf(" %c", &escolha); // "escolha" recebe o texto do jogador.
				
				if(escolha == 's' || escolha == 'S') {
					printf("\nVoc� pensou em uma �guia! \n");
                    system("pause");
				}
				else if(escolha == 'n' || escolha == 'N') {
					printf("\nN�o compreendi, responda novamente...\n");
					repetir = 1; // "repetir" recebe o valor 1.
				}
			}
		}
	}
}

// Perguntas para r�pteis.
void reptil() {
	repetir = 1;

	// Estrutura while para repetir as perguntas enquanto o valor de "repetir" for 1.
	while(repetir) {
		repetir = 0; // "repetir" recebe o valor 0.

		printf("\nEle tem casco? (s/n) \n");
		scanf(" %c", &escolha); // "escolha" recebe o texto do jogador.
	
		if(escolha == 's' || escolha == 'S') {
			printf("\nVoc� pensou em uma tartatuga! \n");
            system("pause");
		}		
		else if(escolha == 'n' || escolha == 'N') {
			printf("\nEle tem patas? (s/n) \n");
			scanf(" %c", &escolha); // "escolha" recebe o texto do jogador.
					
			if(escolha == 'n' || escolha == 'N') {
				printf("\nVoc� pensou em uma cobra! \n");
                system("pause");
			}
			else if(escolha == 's' || escolha == 'S') {
				printf("\nEle � carn�voro? (s/n) \n");
				scanf(" %c", &escolha); // "escolha" recebe o texto do jogador.
						
				if(escolha == 's' || escolha == 'S') {
					printf("\nVoc� pensou em um crocodilo! \n");
                    system("pause");
				}
				else if(escolha == 'n' || escolha == 'N') {
					printf("\nN�o compreendi, responda novamente...\n");
					repetir = 1; // "repetir" recebe o valor 1.
				}
			}
		}
	}
	
}

// Perguntas para quadr�pedes.
void quadrupede() {
	repetir = 1;

	// Estrutura while para repetir as perguntas enquanto o valor de "repetir" for 1.
	while(repetir) {
		repetir = 0; // "repetir" recebe o valor 0.

		printf("\nEle � carn�voro? (s/n) \n");
		scanf(" %c", &escolha); // "escolha" recebe o texto do jogador.
			
		if(escolha == 's' || escolha == 'S') {
			printf("\nVoc� pensou em um le�o! \n");
            system("pause");
		} 
		else if(escolha == 'n' || escolha == 'N') {
			printf("\nEle � herb�voro? (s/n) \n");
			scanf(" %c", &escolha); // "escolha" recebe o texto do jogador.
				
			if(escolha == 's' || escolha == 'S') {
				printf("\nVoc� pensou em um cavalo! \n");
                system("pause");
			} 
			else if(escolha == 'n' || escolha == 'N') {
				printf("\nN�o compreendi, responda novamente...\n");
				repetir = 1; // "repetir" recebe o valor 1.
			}
		}
	}
}

// Perguntas para b�pedes.
void bipede() {
	repetir = 1;

	// Estrutura while para repetir as perguntas enquanto o valor de "repetir" for 1.
	while(repetir) {
		repetir = 0; // "repetir" recebe o valor 0.

		printf("\nEle � on�voro? (s/n) \n");
		scanf(" %c", &escolha); // "escolha" recebe o texto do jogador.
			
		if(escolha == 's' || escolha == 'S') {
			printf("\nVoc� pensou em um homem! \n");
            system("pause");
		} 
		else if(escolha == 'n' || escolha == 'N') {
			printf("\nEle � herb�voro? (s/n) \n");
			scanf(" %c", &escolha); // "escolha" recebe o texto do jogador.
			
			if(escolha == 's' || escolha == 'S') {
				printf("\nVoc� pensou em um macaco! \n");
                system("pause");
			}
			else if(escolha == 'n' || escolha == 'N') {
				printf("\nN�o compreendi, responda novamente...\n");
				repetir = 1; // "repetir" recebe o valor 1.
			}
		}
	}
}

// Perguntas para mam�feros.
void mamifero() {
	repetir = 1;

	// Estrutura while para repetir as perguntas enquanto o valor de "repetir" for 1.
	while(repetir) {
		repetir = 0; // "repetir" recebe o valor 0.

		printf("\nEle � quadr�pede? (s/n) \n");
		scanf(" %c", &escolha); // "escolha" recebe o texto do jogador.
		
		if(escolha == 's' || escolha == 'S') {
			quadrupede(); // Chamando a fun��o "quadrupede()".
		} 
		else if(escolha == 'n' || escolha == 'N') {
			printf("\nEle � b�pede? (s/n) \n");
			scanf(" %c", &escolha); // "escolha" recebe o texto do jogador.
			
			if(escolha == 's' || escolha == 'S') {
				bipede(); // Chamando a fun��o "bipede()".
			}
			else if(escolha == 'n' || escolha == 'N') {
				printf("\nEle voa? (s/n) \n");
				scanf(" %c", &escolha); // "escolha" recebe o texto do jogador.
			
				if(escolha == 's' || escolha == 'S') {
					printf("\nVoc� pensou em um morcego! \n");
                    system("pause");
				} 
				else if(escolha == 'n' || escolha == 'N') {
					printf("\nEle nada? (s/n) \n");
					scanf(" %c", &escolha); // "escolha" recebe o texto do jogador.
				
					if(escolha == 's' || escolha == 'S') {
						printf("\nVoc� pensou em uma baleia! \n");
                        system("pause");
					}
					else if(escolha == 'n' || escolha == 'N') {
						printf("\nN�o compreendi, responda novamente...\n");
						repetir = 1; // "repetir" recebe o valor 1.
					}
				}
			}
		}
	}	
}

// Perguntas iniciais do animal.
void animal() {
	repetir = 1;

	// Estrutura while para repetir as perguntas enquanto o valor de "repetir" for 1.
	while(repetir) {
		repetir = 0; // "repetir" recebe o valor 0.

		printf("Seu animal � um mam�fero? (s/n) \n");
		scanf(" %c", &escolha); // "escolha" recebe o texto do jogador.
		
		if(escolha == 's' || escolha == 'S') {
			mamifero(); // Chamando a fun��o "mamifero()".
		}
		else if(escolha == 'n' || escolha == 'N') {
			printf("\nSeu animal � uma ave? (s/n) \n");
			scanf(" %c", &escolha); // "escolha" recebe o texto do jogador.
			
			if(escolha == 's' || escolha == 'S') {
				ave(); // Chamando a fun��o "ave()".
			}
			else if(escolha == 'n' || escolha == 'N') {
				printf("\nSeu animal � um r�ptil? (s/n) \n");
				scanf(" %c", &escolha); // "escolha" recebe o texto do jogador.
				
				if(escolha == 's' || escolha == 'S') {
					reptil(); // Chamando a fun��o "reptil()".
				}
				else if(escolha == 'n' || escolha == 'N') {
					printf("\nN�o compreendi, responda novamente...\n\n");
					repetir = 1; // "repetir" recebe o valor 1.
				}
			}
		}
	}
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	// Estrutura while para repetir a escolha das op��es enquanto o valor de "repetir" for 1.
    while(repetir) {
        repetir = 0; // "repetir" recebe o valor 0.

        printf("Jogo da Adivinha��o \n\n");
	    printf("[1] - Iniciar \n");
	    printf("[0] - Sair \n\n");

        scanf(" %c", &escolha); // "escolha" recebe o n�mero do jogador.

		// Verifica��o do valor de "escolha" para escolher a op��o.
        switch(escolha) {
	        case '0':
	    	    break;
	        case '1':
                system("cls");
	    	    animal(); // Chamando a fun��o "animal()".
                break;
            default:
                repetir = 1; // "repetir" recebe o valor 1.
                printf("\nErro! Escolha uma das op��es novamente. \n");
                system("pause");
                break;
	    } 

        system("cls"); 
    }
}