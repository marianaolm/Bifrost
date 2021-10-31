#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funcoes.h"
#include <windows.h>
#include <conio.h>
#include <MMsystem.h>

int main(){
	int opcao, i;
	int end=1;
	bifrost();
	PlaySound(TEXT("efeitos_sonoros/cyberpunk2.wav"),NULL,SND_SYNC);
while(end!=0)
{		
		system("clear||cls"); //limpa a tela do prompt de comando
		system("color de");
		menu();
  	 	printf("\n\t\t| 1 - Cadastro\t\t\t\t|");
  	  	printf("\n\t\t| 2 - Login\t\t\t\t|");
  	 	printf("\n\t\t| 3 - Sair\t\t\t\t|\n");
  		linha2();
  	  	printf("\n\t\t Selecione o que voce deseja fazer: ");;
  		PlaySound(TEXT("efeitos_sonoros/opcaosdomenu.wav"),NULL,SND_SYNC);
        scanf("%d", &opcao);
        while(opcao!=1 && opcao!=2 && opcao!=3){
            printf("Opcao invalida! Digite um ou 2: ");
            scanf("%d", &opcao);
        }

		if(opcao==3)
			{
				system("clear||cls");
				system("color 40");
				printf("\n\tVoce escolheu sair da Bifrost, volte sempre!\n\n\n");
				PlaySound(TEXT("efeitos_sonoros/creditos.wav"),NULL,SND_SYNC);
				saida();
				exit(0);
			}
			
        if(opcao==1){
        system("clear||cls");
    	printf("\nAguarde...");
    	PlaySound(TEXT("efeitos_sonoros/aguarde.wav"),NULL,SND_SYNC);
    	printf("\nCarregando...");
    	PlaySound(TEXT("efeitos_sonoros/cadastrar.wav"),NULL,SND_SYNC);
    	system("clear||cls");
    	system("color f5");
    	cadastro();
        cadastra_usuario();
        printf("\nAguarde...");
    	PlaySound(TEXT("efeitos_sonoros/concluido.wav"),NULL,SND_SYNC);
    	continue;
        }
        else if(opcao==2){
            
            char username[256], senha[256];
            int indice_usuario, opcao2;
            system("clear||cls");
    		printf("\nAguarde...\n");
    		PlaySound(TEXT("efeitos_sonoros/aguarde.wav"),NULL,SND_SYNC);
    		system("clear||cls");
    		login();
    		system("color f5");
    		printf("\n");
            printf(" Digite o seu username: ");
            PlaySound(TEXT("efeitos_sonoros/username.wav"),NULL,SND_SYNC);
            fflush(stdin);
            scanf("%[^\n]%*c", username);
            
            indice_usuario = verifica_existencia_username(username);
            while(indice_usuario==0){
                printf(" Username nao encontrado! Digite novamente: ");                
				PlaySound(TEXT("efeitos_sonoros/naocadastrado.wav"),NULL,SND_SYNC);
                fflush(stdin);
                scanf("%[^\n]%*c", username);   
				indice_usuario = verifica_existencia_username(username);     
            }

            printf(" Digite a sua senha: ");
            PlaySound(TEXT("efeitos_sonoros/informesenha.wav"),NULL,SND_SYNC);
            fflush(stdin);
            scanf("%[^\n]%*c", senha);
            while(valida_senha(username, senha)==0){
                printf(" Senha incorreta! Digite novamente: ");
                PlaySound(TEXT("efeitos_sonoros/senhaincorreta.wav"),NULL,SND_SYNC);
                fflush(stdin);
                scanf("%[^\n]%*c", senha);           
            }

            printf("\n Login feito com sucesso!\n");
       		PlaySound(TEXT("efeitos_sonoros/concluido.wav"),NULL,SND_SYNC);
       		
        	
			int contadormenu=0;
       		int sair=1;
            while(sair!=0)
            {

                //vetor da struct Sugestoes que guarda uma lista dos projetos a serem sugeridos para o usuario
                Sugestoes projetos[num_projetos()];

                //cria um ponteiro para dados_usuario para que seja possivel modificar os valores de suas variaveis atraveis de funcoes
                //contornando o problema do escopo
                Usuario *dados_usuario_ptr, dados_usuario;
                dados_usuario_ptr = &dados_usuario;
                salva_dados_usuario(indice_usuario, dados_usuario_ptr);

            
                system("clear||cls");
                system("color e5");
                sugestao();	
                
                printf("\t1 - Ver sugestoes de projetos relacionados aos seus interesses\n");
                printf("\t2 - Ver sugestoes de projetos mais populares\n");
                printf("\t3 - Ver meus projetos\n");
                printf("\t4 - Cadastrar um projeto\n");
                printf("\t5 - Alterar dados\n");
                printf("\t6 - Sair\n");
                printf("\tSelecione o que voce deseja fazer: ");
                if(contadormenu==0)
                {
                    PlaySound(TEXT("efeitos_sonoros/menudesugestao.wav"),NULL,SND_SYNC);
                    contadormenu++;
                }
                scanf("%d", &opcao2);
                while(opcao2<1 || opcao2>6){
                    printf("Opcao invalida! Digite um numero entre 1 e 6: ");
                    scanf("%d", &opcao2);
                }   
                system("clear||cls");
                switch (opcao2)
                {

                case 1:
                {
                    printf("Aguarde...");
                    PlaySound(TEXT("efeitos_sonoros/opcao1.wav"),NULL,SND_SYNC);
                    system("clear||cls");
                    
                    int tam_lista_sugestoes = cria_lista_sugestoes(indice_usuario, dados_usuario_ptr, projetos, "relevancia");
                    mostra_sugestoes(indice_usuario, tam_lista_sugestoes, projetos, "relevancia");

                    break;
                }
                    
                case 2:
                {
                    printf("Aguarde...");
                    PlaySound(TEXT("efeitos_sonoros/opcao2.wav"),NULL,SND_SYNC);
                    system("clear||cls");
                    int tam_lista_sugestoes = cria_lista_sugestoes(indice_usuario, dados_usuario_ptr, projetos, "popularidade");
                    mostra_sugestoes(indice_usuario, tam_lista_sugestoes, projetos, "popularidade");

                }
                    break;
                case 3:
                {
                    printf("Aguarde...");
                    PlaySound(TEXT("efeitos_sonoros/opcao3.wav"),NULL,SND_SYNC);
                    system("clear||cls");
                    ver_meus_projetos(dados_usuario_ptr);

                }
                    break;
                case 4:
                {
                    printf("Aguarde...");
                    PlaySound(TEXT("efeitos_sonoros/opcao4.wav"),NULL,SND_SYNC);
                    system("clear||cls");
                    cadastra_projeto(indice_usuario);

                }
                    break;
                case 5:
                {
                    printf("Aguarde...");
                    PlaySound(TEXT("efeitos_sonoros/opcao5.wav"),NULL,SND_SYNC);
                    system("clear||cls");
                    atualiza_dado(username);
                }
                    break;
                default:
                    sair = 0;
                    break;
                }
                
                PlaySound(TEXT("efeitos_sonoros/concluido.wav"),NULL,SND_SYNC);

                }
            }
        }
    return 0;
}
