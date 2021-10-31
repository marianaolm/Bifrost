#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funcoes.h"
#include <windows.h>
#include <conio.h>
#include <MMsystem.h>

//retorna o numero de usuarios cadastrados no sistema

void linha1(void)
{
	printf("\t\t+=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=+");
}

void linha1menor(void)
{
	printf("\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+");
}

void linha2()
{
	printf("\t\t+---------------------------------------+");
}

void bifrost()
{
system("color ed");
printf("\n\t\t\t\t\t   SEJA BEM-VINDO A...\n\n");
printf("\t((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((\n");
printf("\t(           (((((   ((((           (((            ((((((          ((((((           ((              (\n");
printf("\t(   ((((((   ((((   ((((   (((((((((((   (((((((   (((   ((((((((   (((   (((((((   (((((((   ((((((\n");
printf("\t(   ((((((   ((((   ((((   (((((((((((   (((((((   ((   (((((((((   (((    ((((((((((((((((   ((((((\n");
printf("\t(           (((((   ((((          ((((           ((((   ((((((((((   (((((        (((((((((   ((((((\n");
printf("\t(   (((((((   (((   ((((   (((((((((((   ((((   (((((   (((((((((   ((((((((((((   ((((((((   ((((((\n");
printf("\t(   (((((((   (((   ((((   (((((((((((   ((((((   ((((   (((((((   (((   ((((((((   (((((((   ((((((\n");
printf("\t(           (((((   ((((   (((((((((((   (((((((   (((((          (((((            ((((((((   ((((((\n");
printf("\t((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((\n");
printf("\n\n\n\n");
}

void saida(void)
{
printf("\n\t________ $$$$ ________________________________");
printf("\n\t_______ $$$$$$$ _________________________ $$$ ");
printf("\n\t________ $$$$$$$ _______________________ $$$$ ");
printf("\n\t_________ $$$$$$$ ____ $$ _____ $$ ____ $$$$$ ");
printf("\n\t__________ $$$$$$$ _ $$$$$ _ $$$$$ __ $$$$$$$ ");
printf("\n\t___________ $$$$$$$_$$$$$$$_$$$$$$$_ $$$$$$$ _");
printf("\n\t____________ $$$$$$_$$$$$$$_$$$$$$$  $$$$$$ _");
printf("\n\t_____________$$$$$$_$$$$$$$_$$$$$$$_$$$$$$ _");
printf("\n\t_ $$$$$ ____ $$$$$$_$$$$$$$_$$$$$$$_$$$$$$  _");
printf("\n\t $$$$$$$$$  $$$$$$$_$$$$$$$_$$$$$$$_$$$$$ _");
printf("\n\t $$$$$$$$$$$$$$$$$$_$$$$$$$_$$$$$$$_$$$$$ _");
printf("\n\t___ $$$$$$$$$$$$$$$_$$$$$$$_$$$$$$_$$$$$$ _");
printf("\n\t______ $$$$$$$$$$$$$_$$$$$__$$_$$$$$$_$$ _");
printf("\n\t_______ $$$$$$$$$$$$____$$$$_____$$$$$ _");
printf("\n\t_________ $$$$$$$$$$$$$$$$$$$$$$$$$$$$$ _");
printf("\n\t__________ $$$$$$$$$$$$$$$$$$$$$$$$$$$ _");
printf("\n\t____________ $$$$$$$$$$$$$$$$$$$$$$$$ _");
printf("\n\t______________ $$$$$$$$$$$$$$$$$$$$ _");
printf("\n\n");
printf("Criado por Dantunes, GPC, Pesente, Olmygod e Piske.\n");
}

void menu(void)
{
printf("\n");
printf("    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((\n");
printf("    (     ((((((((((    ((((            ((    ((((((((  ((((   ((((((((   (\n");
printf("    (      ((((((((     ((((   (((((((((((      ((((((  ((((   ((((((((   (\n");
printf("    (   (   ((((((  (   ((((   (((((((((((   (   (((((  ((((   ((((((((   (\n");
printf("    (   ((   ((((  (    ((((          ((((   (((   (((  ((((   ((((((((   (\n");
printf("    (   (((   ((  (((   ((((   (((((((((((   (((((   (  ((((   ((((((((   (\n");
printf("    (   ((((     ((((   ((((   (((((((((((   ((((((     ((((   ((((((((  ((\n");
printf("    (   (((((   (((((   ((((            ((   ((((((((   ((((((          (((\n");
printf("    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((\n");
printf("\n\n");
linha1();
printf("\n\t\t|\t\t Opcoes:\t\t|\n");
linha1();
}

void sugestao(void)
{
	system("clear||cls");
	linha1menor();
	printf("\n\t|          MENU DE SUGESTAO\t\t|\n");
    linha1menor();
    printf("\n");
}

void cadastro(void)
{
	system("clear||cls");
	linha1menor();
	printf("\n\t|               CADASTRO   \t\t|\n");
    linha1menor();
    printf("\n");
}

void login(void)
{
	system("clear||cls");
	linha1menor();
	printf("\n\t|               LOGIN    \t\t|\n");
    linha1menor();
    printf("\n");
}

int num_usuarios(){
    
    FILE *informacoes;
    informacoes = fopen("banco/usuarios/informacoes.csv", "r");
    if(informacoes == NULL){
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }

    char linha_txt[1024];
    int linha = 0, coluna = 0, numusuarios; 

    while(fgets(linha_txt, 1024, informacoes) != NULL){ 
        char *coluna_txt; 
        coluna_txt = strtok(linha_txt, ";"); 
        while(coluna_txt != NULL){ 

            if(linha==0 && coluna==1){ //coluna do numero de usuarios
                numusuarios = atoi(coluna_txt);
                
                fclose(informacoes);
                
                return numusuarios;
            }
            
            coluna_txt = strtok(NULL, ";"); 
            coluna++;
        }
        coluna=0;
        linha++;
    }

}

//retorna o numero de projetos cadastrados no sistema
int num_projetos(){
    
    FILE *informacoes;
    informacoes = fopen("banco/projetos/informacoes.csv", "r");
    if(informacoes == NULL){
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }

    char linha_txt[1024];
    int linha = 0, coluna = 0, numprojetos; 

    while(fgets(linha_txt, 1024, informacoes) != NULL){ 
        char *coluna_txt; 
        coluna_txt = strtok(linha_txt, ";"); 
        while(coluna_txt != NULL){ 

            if(linha==0 && coluna==1){ //coluna do numero de projetos
                numprojetos = atoi(coluna_txt);
                
                fclose(informacoes);
                
                return numprojetos;
            }
            
            coluna_txt = strtok(NULL, ";"); 
            coluna++;
        }
        coluna=0;
        linha++;
    }

}

//funcao que cadastra usuario
void cadastra_usuario(){

    char nome[256], username[256], senha[256], opcao;
    int numtags = num_tags();
    int numcidades = num_cidades();
    int cidade, indice, cidades[numcidades], tag, tags[numtags], i, j, verifica_repeticao;

    FILE *usuario;
    indice = num_usuarios() + 1;
    char dir[256];
    sprintf(dir, "banco/usuarios/usuario%d.csv", indice); //copia o caminho do arquivo do novo usuario para a variavel dir

    usuario = fopen(dir, "w");
    if(usuario == NULL){
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }


    //formulario para cadastro do usuario:

    printf("Digite seu nome: ");
    fflush(stdin);
    scanf("%[^\n]%*c", nome);

    fprintf(usuario, "nome;%s;\n", nome);
    fprintf(usuario, "cidades;");

    //o vetor cidades armazena os numeros que representam as cidades ja escolhidas pelo usuario
    for(i=0; i<numcidades; i++){
        cidades[i]=0;
    }
        
    for(i=0; i<numcidades; i++){
        
        printf("Atualmente, as seguintes cidades estao cadastradas: \n");
        imprime_cidades();
        printf("Digite o numero correspondente a cidade onde voce quer atuar: ");
        scanf("%d", &cidade);
        while(cidade<1 || cidade>numcidades){
            printf("Opcao invalida! Digite um numero de 1 a %d: ", numcidades);
            scanf("%d", &cidade);
        }

        //verifica se o numero digitado pelo usuario representa uma cidade que ele ja cadastrou
        verifica_repeticao = 0;
        while(verifica_repeticao==0){
            verifica_repeticao = 1; //se essa variavel permanecer como 1 ate o final do loop, significa que a cidade digitada ainda nao foi cadastrada
            for(j=0; j<numcidades; j++){
                if(cidades[j]==cidade){
                    verifica_repeticao = 0;
                    break;
                }
            }

            if(verifica_repeticao==0){
                printf("Voce ja escolheu essa cidade! Digite outro numero: ");
                scanf("%d", &cidade);
                while(cidade<1 || cidade>numcidades){
                    printf("Opcao invalida! Digite um numero de 1 a %d: ", numcidades);
                    scanf("%d", &cidade);
                }
            }          
        }

        cidades[i] = cidade;

        salva_cidade(usuario, cidade);

        printf("Deseja cadastrar mais alguma cidade? [S\\N] ");
        fflush(stdin);
        scanf("%c", &opcao);
        while(tolower(opcao)!='s' && tolower(opcao)!='n'){
            printf("Opcao invalida! Digite 'S' ou 'N': ");
            fflush(stdin);
            scanf("%c", &opcao);
        }

        if(tolower(opcao)=='n') break;

    }

    printf("Cidades cadastradas!\n\n");

    printf("Digite o seu username: ");
    fflush(stdin);
    scanf("%[^\n]%*c", username);

    while(verifica_existencia_username(username)!=0){

        printf("Esse username ja existe. Digite outro: ");
        fflush(stdin);
        scanf("%[^\n]%*c", username);

    }

    fprintf(usuario, "\nusername;%s;\n", username);

    printf("Digite a sua senha: ");
    fflush(stdin);
    scanf("%[^\n]%*c", senha);
    fprintf(usuario, "senha;%s;\ntags;", senha);

    printf("\nAgora os assuntos relacionados ao projetos em que voce quer atuar: \n");

    //os 2 loops abaixo seguem a mesma logica descrita acima para as cidades
    for(i=0; i<numtags; i++){
        tags[i]=0;
    }
        
    for(i=0; i<numtags; i++){
        
        imprime_tags();
        printf("Digite o numero correspondente a tag: ");
        scanf("%d", &tag);
        while(tag<1 || tag>numtags){
            printf("Opcao invalida! Digite um numero de 1 a %d: ", numtags);
            scanf("%d", &tag);
        }
        
        verifica_repeticao=0;
        while(verifica_repeticao==0){
            verifica_repeticao=1;
            for(j=0; j<numtags; j++){
                if(tags[j]==tag){
                    verifica_repeticao = 0;
                    break;
                }
            }

            if(verifica_repeticao==0){
                printf("Voce ja escolheu essa tag! Digite outro numero: ");
                scanf("%d", &tag);
                while(tag<1 || tag>numtags){
                    printf("Opcao invalida! Digite um numero de 1 a %d: ", numtags);
                    scanf("%d", &tag);
                }
            }          
        }

        salva_tag(usuario, tag);

        tags[i] = tag;

        printf("Deseja cadastrar mais alguma tag? [S\\N] ");
        fflush(stdin);
        scanf("%c", &opcao);
        while(tolower(opcao)!='s' && tolower(opcao)!='n'){
            printf("Opcao invalida! Digite 'S' ou 'N': ");
            fflush(stdin);
            scanf("%c", &opcao);
        }

        if(tolower(opcao)=='n') break;

    }

    fprintf(usuario, "\nprojetos;");

    fclose(usuario);


    //como um novo usuario foi cadastrado, eh preciso atualizar a informacao do numero de usuarios cadastrados
    /*
    essa parte segue a seguinte logica: 
    - copia o arquivo informacoes.csv para o arquivo informacoes2.csv, alterando a informacao do numero de usuarios  
    - apaga o arquivo informacoes.csv
    - renomeia o arquivo informacoes2.csv para informacoes.csv
    */

    FILE *informacoes, *informacoes2;
    
    informacoes = fopen("banco/usuarios/informacoes.csv", "r");
    informacoes2 = fopen("banco/usuarios/informacoes2.csv", "w");
    if(informacoes == NULL || informacoes2 == NULL){
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }

    char linha_txt[1024];
    int linha = 0, coluna = 0, numusuarios; 

    while(fgets(linha_txt, 1024, informacoes) != NULL){ 
        char *coluna_txt; 
        coluna_txt = strtok(linha_txt, ";"); 
        while(coluna_txt != NULL){ 

            if(linha==0 && coluna==1){
                fprintf(informacoes2, ";%d", indice); //informacao atualizada do numero de usuarios
            }
            else{
                if(coluna==0){
                    fprintf(informacoes2, "%s", coluna_txt);
                }
                else{
                    fprintf(informacoes2, ";%s", coluna_txt);
                }
            
            }
            
            coluna_txt = strtok(NULL, ";"); 
            coluna++;
        }

        coluna=0;
        linha++;
    }

    fprintf(informacoes2, ";");
    
    fclose(informacoes2);
    fclose(informacoes);


    printf("Cadastro realizado com sucesso!\n\n");

    remove("banco/usuarios/informacoes.csv"); //apaga o arquivo informacoes.csv
    rename("banco/usuarios/informacoes2.csv", "banco/usuarios/informacoes.csv"); // renomeia informacoes2.csv para informacoes.csv

}

//imprime as cidades disponiveis para escolha do usuario
void imprime_cidades(){
    
    FILE *informacoes;
    
    informacoes = fopen("banco/projetos/informacoes.csv", "r");
    if(informacoes == NULL){
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }

    char linha_txt[1024], primeira_coluna[50];
    int linha = 0, coluna = 0; 

    while(fgets(linha_txt, 1024, informacoes) != NULL){ 
        char *coluna_txt; 
        coluna_txt = strtok(linha_txt, ";"); 
        while(coluna_txt != NULL){ 

            if(coluna==0){
                strcpy(primeira_coluna, coluna_txt);
            }

            if(strcmp(primeira_coluna, "cidades")==0 && coluna!=0){
                if(strcmp(coluna_txt, "\n")==0) break; //ignora o caractere de final de linha
                coluna_txt[0] = toupper(coluna_txt[0]); //imprime a cidade com a primeira letra maiuscula
                printf("%d - %s\n", coluna, coluna_txt);

            }

            coluna_txt = strtok(NULL, ";"); 
            coluna++;
        }

        coluna=0;
        linha++;
    }
    
    fclose(informacoes);
}

//imprime as tags disponiveis para escolha do usuario
void imprime_tags(){

    FILE *informacoes;
    
    informacoes = fopen("banco/projetos/informacoes.csv", "r");
    if(informacoes == NULL){
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }

    char linha_txt[1024], primeira_coluna[50];
    int linha = 0, coluna = 0; 

    while(fgets(linha_txt, 1024, informacoes) != NULL){ 
        char *coluna_txt; 
        coluna_txt = strtok(linha_txt, ";"); 
        while(coluna_txt != NULL){ 


            if(coluna==0){
                strcpy(primeira_coluna, coluna_txt);
            }

            if(strcmp(primeira_coluna, "tags")==0 && coluna!=0){
                if(strcmp(coluna_txt, "\n")==0) break; 
                coluna_txt[0] = toupper(coluna_txt[0]); //imprime a cidade com a primeira letra maiuscula
                printf("%d - %s\n", coluna, coluna_txt);

            }


            coluna_txt = strtok(NULL, ";");
            coluna++;
        }

        coluna=0;
        linha++;
    }
    
    fclose(informacoes);
 
}

//cadastra a cidade escolhida no arquivo csv do usuario
void salva_cidade(FILE *arquivo, int cidade){
    
    FILE *informacoes;
    
    informacoes = fopen("banco/projetos/informacoes.csv", "r");
    if(informacoes == NULL){
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }

    char linha_txt[1024], primeira_coluna[50];
    int linha = 0, coluna = 0; 

    while(fgets(linha_txt, 1024, informacoes) != NULL){ 
        char *coluna_txt; 
        coluna_txt = strtok(linha_txt, ";"); 
        while(coluna_txt != NULL){ 
            

            if(coluna==0){
                strcpy(primeira_coluna, coluna_txt);
            }

            if(strcmp(primeira_coluna, "cidades")==0 && coluna==cidade){
                //"cidade" corresponde a coluna do arquivo "informacoes" q representa a cidade escolhida
                fprintf(arquivo, "%s;", coluna_txt);
            }


            coluna_txt = strtok(NULL, ";"); 
            coluna++;

        }

        coluna=0;
        linha++;
    }

    fclose(informacoes);
}

//cadastra a tag escolhida no arquivo csv do usuario
void salva_tag(FILE *arquivo, int tag){
    
    FILE *informacoes;
    
    informacoes = fopen("banco/projetos/informacoes.csv", "r");
    if(informacoes == NULL){
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }

    char linha_txt[1024], primeira_coluna[50];
    int linha = 0, coluna = 0; 

    while(fgets(linha_txt, 1024, informacoes) != NULL){ 
        char *coluna_txt; 
        coluna_txt = strtok(linha_txt, ";"); 
        while(coluna_txt != NULL){ 
            

            if(coluna==0){
                strcpy(primeira_coluna, coluna_txt);
            }

            if(strcmp(primeira_coluna, "tags")==0 && coluna==tag){
                //"tag" corresponde a coluna do arquivo "informacoes" q representa a tag escolhida
                fprintf(arquivo, "%s;", coluna_txt);
            }


            coluna_txt = strtok(NULL, ";"); 
            coluna++;

        }

        coluna=0;
        linha++;
    }

    fclose(informacoes);

}

//retorna o numero de cidades disponiveis para a escolha do usuario
int num_cidades(){
    
    FILE *informacoes;
    
    informacoes = fopen("banco/projetos/informacoes.csv", "r");
    if(informacoes == NULL){
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }

    char linha_txt[1024], primeira_coluna[50];
    int linha = 0, coluna = 0, numcidades=0, final_contagem=0; 

    while(fgets(linha_txt, 1024, informacoes) != NULL){ 
        char *coluna_txt; 
        coluna_txt = strtok(linha_txt, ";"); 
        while(coluna_txt != NULL){ 


            if(coluna==0){
                strcpy(primeira_coluna, coluna_txt);
            }

            if(strcmp(primeira_coluna, "cidades")==0 && coluna!=0){
                if(strcmp(coluna_txt, "\n")==0) break; //ignora o caractere de final de linha
                final_contagem=1;
                numcidades++;
            }

            coluna_txt = strtok(NULL, ";"); 
            coluna++;
        }

        coluna=0;
        linha++;

        if(final_contagem==1){ //final_contagem==1 significa que a linha de cidades ja foi percorrida e todas as cidades foram contabilizadas
            fclose(informacoes);
            return numcidades;
        }
    }    

}

//retorna o numero de tags disponiveis para a escolha do usuario
int num_tags(){

    FILE *informacoes;
    
    informacoes = fopen("banco/projetos/informacoes.csv", "r");
    if(informacoes == NULL){
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }

    char linha_txt[1024], primeira_coluna[50];
    int linha = 0, coluna = 0, numtags=0, final_contagem=0; 

    while(fgets(linha_txt, 1024, informacoes) != NULL){ 
        char *coluna_txt; 
        coluna_txt = strtok(linha_txt, ";"); 
        while(coluna_txt != NULL){ 

            if(coluna==0){
                strcpy(primeira_coluna, coluna_txt);
            }

            if(strcmp(primeira_coluna, "tags")==0 && coluna!=0){
                if(strcmp(coluna_txt, "\n")==0) break; //ignora o caractere de final de linha
                final_contagem=1;
                numtags++;
            }

            coluna_txt = strtok(NULL, ";"); 
            coluna++;
        }

        coluna=0;
        linha++;

        if(final_contagem==1){//final_contagem==1 significa que a linha de tags ja foi percorrida e todas as tags foram contabilizadas
            fclose(informacoes);
            return numtags;
        }

    }    
}

//le o telefone do administrador do projeto e verifica se o formato e quantidade de digitos estao corretos
void le_telefone(FILE *projeto){

    char phone[15], numero[15]; 
    int telefoneok = 0;

    while(telefoneok==0)
	{
        printf("\nDigite seu numero de celular com DDD - apenas numeros: ");
        fflush(stdin);
        scanf("%[^\n]%*c", phone);

        if(phone[2]!='9'){
            printf("Numero invalido. O primeiro numero do telefone deve ser '9'.\n");
            continue;
        }
		
		strcpy(numero, phone);
		char ddd1[2];
		strncpy(ddd1, phone, 2);
		
		char espiritosanto[3] = {'2', '7'};
		char espiritosanto2[3] = {'2', '8'};
		int i, digitouletra=0;
		for(i=0;i<strlen(phone);i++)
  		{
      	//ASCII valores de 0 = 48, 9 = 57. Entao valores fora irao falhar.
      	if (!(phone[i] < 48 || phone[i] > 57))
      	{
		}
   		else
   		{
   			digitouletra = 1;
		}
		}
		if (digitouletra==1)
		{
			printf("\nPor favor, digite apenas numeros, tente novamente.");
			continue;
		}
		
		if(strlen(phone)==11)
		{
			telefoneok=1;
		}
		else
		{
			printf("\nO numero digitado nao possui 11 digitos, digite novamente.");
			continue;
		}
		
		
		printf("Seu numero de telefone eh: ");
		printf("(%c%c)", ddd1[0], ddd1[1]);
		printf(" %c%c%c%c%c-%c%c%c%c\n", numero[2], numero[3], numero[4], numero[5], numero[6], numero[7], numero[8], numero[9], numero[10]);
		

        fprintf(projeto, "telefone admin;%c%c%c%c%c%c%c%c%c%c%c;\ntags;", ddd1[0], ddd1[1], numero[2], numero[3], numero[4], numero[5], numero[6], numero[7], numero[8], numero[9], numero[10]);
    }

}

//verifica se o username digitado pertence a um usuario cadastrado no sistema
//se sim, retorna o indice do arquivo do usuario
//se nao, retorna 0
int verifica_existencia_username(char *username){
    
    int i;

    for(i=0; i<num_usuarios(); i++){
        char arq[256];
        sprintf(arq, "banco/usuarios/usuario%d.csv", i+1);

        FILE *usuario;

        usuario = fopen(arq, "r");
        if(usuario == NULL){
            printf("Erro na abertura do arquivo.\n");
            exit(1);
        }

        char linha_txt[1024], primeira_coluna[50];
        int linha = 0, coluna = 0; 

        while(fgets(linha_txt, 1024, usuario) != NULL){ 
            char *coluna_txt; 
            coluna_txt = strtok(linha_txt, ";"); 
            while(coluna_txt != NULL){ 

                if(coluna==0){
                    strcpy(primeira_coluna, coluna_txt);
                }

                if(strcmp(primeira_coluna, "username")==0 && coluna==1){ //compara o username digitado com o username do arquivo usuario(i+1).csv

                    if(strcmp(coluna_txt, "\n")==0) break; //ignora o caractere de final de linha
                    if(strcmp(username, coluna_txt)==0){
                        fclose(usuario);
                        return i+1;
                    }             

                }
                coluna_txt = strtok(NULL, ";"); 
                coluna++;
            }
            coluna=0;
            linha++;
        }
        fclose(usuario);
    }

    return 0;
}


//verifica se ja existe um projeto com o nome digitado pelo usuario
//se sim, retorna o indice do arquivo do projeto
//se nao, retorna 0
int verifica_existencia_projeto(char *nome_projeto){
    
    int i;

    for(i=0; i<num_projetos(); i++){
        char arq[256];
        sprintf(arq, "banco/projetos/projeto%d.csv", i+1);

        FILE *projeto;

        projeto = fopen(arq, "r");
        if(projeto == NULL){
            printf("Erro na abertura do arquivo.\n");
            exit(1);
        }

        char linha_txt[1024], primeira_coluna[50];
        int linha = 0, coluna = 0; 

        while(fgets(linha_txt, 1024, projeto) != NULL){ 
            char *coluna_txt; 
            coluna_txt = strtok(linha_txt, ";"); 
            while(coluna_txt != NULL){ 

                if(coluna==0){
                    strcpy(primeira_coluna, coluna_txt);
                }

                if(strcmp(primeira_coluna, "nome")==0 && coluna==1){

                    if(strcmp(coluna_txt, "\n")==0) break; //ignora o caractere de final de linha
                    if(strcmp(nome_projeto, coluna_txt)==0){ //compara o nome digitado com o nome do arquivo projeto(i+1).csv
                        fclose(projeto);
                        return i+i;
                    }             

                }
                coluna_txt = strtok(NULL, ";"); 
                coluna++;
            }
            coluna=0;
            linha++;
        }
        fclose(projeto);
    }

    return 0;
}

//verifica se a senha digitada corresponde a senha cadatrada no arquivo do usuario
//se sim, retorna 1
//se nao, retorna 0
int valida_senha(char*username, char *senha){
    
    int indice_arquivo = verifica_existencia_username(username);
    char arq[256];
    sprintf(arq, "banco/usuarios/usuario%d.csv", indice_arquivo);

    FILE *usuario;

    usuario = fopen(arq, "r");
    if(usuario == NULL){
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    char linha_txt[1024], primeira_coluna[50];
    int linha = 0, coluna = 0; 

    while(fgets(linha_txt, 1024, usuario) != NULL){ 
        char *coluna_txt; 
        coluna_txt = strtok(linha_txt, ";"); 
        while(coluna_txt != NULL){ 
            
                if(coluna==0){
                    strcpy(primeira_coluna, coluna_txt);
                }

                if(strcmp(primeira_coluna, "senha")==0 && coluna==1){

                    if(strcmp(coluna_txt, "\n")==0) break; //ignora o caractere de final de linha
                    if(strcmp(senha, coluna_txt)==0){
                        fclose(usuario);
                        return 1;
                    }             
                }
                
            coluna_txt = strtok(NULL, ";"); 
            coluna++;
        }

        coluna=0;
        linha++;
    }
    fclose(usuario);
    return 0;
 }

//altera algum dado do usuario, de acordo com sua escolha
void atualiza_dado(char *username){
    
    int opcao;
    int indice_arquivo = verifica_existencia_username(username);
    char arq[256];
    sprintf(arq, "banco/usuarios/usuario%d.csv", indice_arquivo);

    printf("Dados para alterar: \n");
    printf("1 - Nome\n");
    printf("2 - Cidades de atuacao\n");
    printf("3 - Username\n");
    printf("4 - Senha\n");
    printf("5 - Tags\n");
    printf("Digite o que voce deseja alterar: ");
    scanf("%d", &opcao);
    while(opcao<1 || opcao>5){
        printf("Opcao invalida! Digite um numero de 1 a 5: ");
        scanf("%d", &opcao);
    }

    switch (opcao)
    {
    case 1:
    {
        char novo_nome[256];
                
        printf("Digite seu novo nome: ");
        fflush(stdin);
        scanf("%[^\n]%*c", novo_nome);
        
        /*
        essa parte segue a seguinte logica: 
        - copia o arquivo usuario(indice_arquivo).csv para usuario_atualizado.csv, alterando o nome  
        - apaga o arquivo usuario(indice_arquivo).csv
        - renomeia o arquivo usuario_atualizado.csv para usuario(indice_arquivo).csv
        */
        FILE *usuario, *usuario_atualizado;
        
        usuario = fopen(arq, "r");
        usuario_atualizado = fopen("banco/usuarios/usuario_atualizado.csv", "w");
        if(usuario == NULL || usuario_atualizado == NULL){
            printf("Erro na abertura do arquivo.\n");
            exit(1);
        }

        char linha_txt[1024], primeira_coluna[50];
        int linha = 0, coluna = 0, numusuarios; 

        while(fgets(linha_txt, 1024, usuario) != NULL){ 
            char *coluna_txt; 
            coluna_txt = strtok(linha_txt, ";"); 
            while(coluna_txt != NULL){ 
                
                    if(coluna==0){
                        strcpy(primeira_coluna, coluna_txt);
                    }

                    if(strcmp(primeira_coluna, "nome")==0 && coluna==1){
                        fprintf(usuario_atualizado, ";%s", novo_nome);
                    }
                    else{
                        if(coluna==0){
                            fprintf(usuario_atualizado, "%s", coluna_txt);
                        }
                        else{
                            fprintf(usuario_atualizado, ";%s", coluna_txt);
                        }
                        
                    }
                    

                coluna_txt = strtok(NULL, ";"); 
                coluna++;
            }

            coluna=0;
            linha++;
        }

        fprintf(usuario_atualizado, ";");

        fclose(usuario_atualizado);
        fclose(usuario);

        remove(arq);
        rename("banco/usuarios/usuario_atualizado.csv", arq);
        
        printf("Alteracao concluida com sucesso!\n");

    }
        break;
    case 2:
    {
        int numcidades = num_cidades();
        int cidade, cidades[numcidades], i, j, verifica_repeticao;
    
        /*
        essa parte segue a seguinte logica: 
        - copia o arquivo usuario(indice_arquivo).csv para usuario_atualizado.csv, ate chegar na linha de cidades  
        - ao chegar na linha de cidades, faz um novo cadastro de cidades
        - copia o restante do arquivo
        - apaga o arquivo(indice_arquivo).csv
        - renomeia o arquivo usuario_atualizado.csv para usuario(indice_arquivo).csv
        */

        //copia o arquivo usuario ate chegar em cidades

        FILE *usuario, *usuario_atualizado;
        
        usuario = fopen(arq, "r");
        usuario_atualizado = fopen("banco/usuarios/usuario_atualizado.csv", "w");
        if(usuario == NULL || usuario_atualizado == NULL){
            printf("Erro na abertura do arquivo.\n");
            exit(1);
        }

        char linha_txt[1024], primeira_coluna[50];
        int linha = 0, coluna = 0, primeira_copia=0; 

        while(fgets(linha_txt, 1024, usuario) != NULL){ 
            char *coluna_txt; 
            coluna_txt = strtok(linha_txt, ";"); 
            while(coluna_txt != NULL){
                
                    if(coluna==0){
                        strcpy(primeira_coluna, coluna_txt);
                    }

                    if(strcmp(primeira_coluna, "cidades")==0){
                        if(strcmp(coluna_txt, "\n")==0) break;
                        fprintf(usuario_atualizado, "%s", coluna_txt);
                        primeira_copia=1;
                        break;
                        
                    }
                    else{
                        if(coluna==0){
                            fprintf(usuario_atualizado, "%s", coluna_txt);
                        }
                        else{
                            fprintf(usuario_atualizado, ";%s", coluna_txt);
                        }
                        
                    }
                    

                coluna_txt = strtok(NULL, ";"); 
                coluna++;
            }
            if(primeira_copia==1) break;
            coluna=0;
            linha++;
        }
        fprintf(usuario_atualizado, ";");

        fclose(usuario);
        fclose(usuario_atualizado);
        
        usuario_atualizado = fopen("banco/usuarios/usuario_atualizado.csv", "a");
        if(usuario_atualizado == NULL){
            printf("Erro na abertura do arquivo.\n");
            exit(1);
        }


        //cadastra novamente as cidades

        for(i=0; i<numcidades; i++){
            cidades[i]=0;
        }
            
        for(i=0; i<numcidades; i++){
            printf("Atualmente, as seguintes cidades estao cadastradas: \n");
            imprime_cidades();
            printf("Digite o numero correspondente a cidade onde voce quer atuar: ");
            scanf("%d", &cidade);
            while(cidade<1 || cidade>numcidades){
                printf("Opcao invalida! Digite um numero de 1 a %d: ", numcidades);
                scanf("%d", &cidade);
            }
            verifica_repeticao = 0;
            while(verifica_repeticao==0){
                verifica_repeticao = 1;
                for(j=0; j<numcidades; j++){
                    if(cidades[j]==cidade){
                        verifica_repeticao = 0;
                        break;
                    }
                }

                if(verifica_repeticao==0){
                    printf("Voce ja escolheu essa cidade! Digite outro numero: ");
                    scanf("%d", &cidade);
                    while(cidade<1 || cidade>numcidades){
                        printf("Opcao invalida! Digite um numero de 1 a %d: ", numcidades);
                        scanf("%d", &cidade);
                    }
                }          
            }

            cidades[i] = cidade;

            salva_cidade(usuario_atualizado, cidade);

            printf("Deseja cadastrar mais alguma cidade? [S\\N] ");
            fflush(stdin);
            scanf("%c", &opcao);
            while(tolower(opcao)!='s' && tolower(opcao)!='n'){
                printf("Opcao invalida! Digite 'S' ou 'N': ");
                fflush(stdin);
                scanf("%c", &opcao);
            }

            if(tolower(opcao)=='n') break;

        }

        printf("Cidades cadastradas!\n\n");

        fclose(usuario_atualizado);

        //copia o resto do arquivo

        linha = 0, coluna = 0;
  
        usuario = fopen(arq, "r");
        usuario_atualizado = fopen("banco/usuarios/usuario_atualizado.csv", "a");
        if(usuario == NULL || usuario_atualizado == NULL){
            printf("Erro na abertura do arquivo.\n");
            exit(1);
        }

        fprintf(usuario_atualizado, "\n");

        while(fgets(linha_txt, 1024, usuario) != NULL){ 
            char *coluna_txt; 
            coluna_txt = strtok(linha_txt, ";"); 
            while(coluna_txt != NULL){
                if(linha>=2){
                    
                    if(coluna==0){
                        fprintf(usuario_atualizado, "%s", coluna_txt);
                    }
                    else{
                        fprintf(usuario_atualizado, ";%s", coluna_txt);
                    }
                }

                coluna_txt = strtok(NULL, ";"); 
                coluna++;
            }
            coluna=0;
            linha++;
        }
        fprintf(usuario_atualizado, ";");

        fclose(usuario);
        fclose(usuario_atualizado);
        remove(arq);
        rename("banco/usuarios/usuario_atualizado.csv", arq);

        printf("Alteracao concluida com sucesso!\n");

    }
        break;
    case 3:
    {
        char novo_username[256];
                
        printf("Digite seu novo username: ");
        fflush(stdin);
        scanf("%[^\n]%*c", novo_username);
        while(verifica_existencia_username(novo_username)!=0){
            printf("Esse username ja existe. Digite outro: ");
            fflush(stdin);
            scanf("%[^\n]%*c", novo_username);

        }

        //segue a mesma logica da alteracao do nome

        FILE *usuario, *usuario_atualizado;
        
        usuario = fopen(arq, "r");
        usuario_atualizado = fopen("banco/usuarios/usuario_atualizado.csv", "w");
        if(usuario == NULL || usuario_atualizado == NULL){
            printf("Erro na abertura do arquivo.\n");
            exit(1);
        }

        char linha_txt[1024], primeira_coluna[50];
        int linha = 0, coluna = 0; 

        while(fgets(linha_txt, 1024, usuario) != NULL){ 
            char *coluna_txt; 
            coluna_txt = strtok(linha_txt, ";"); 
            while(coluna_txt != NULL){ 
                
                    if(coluna==0){
                        strcpy(primeira_coluna, coluna_txt);
                    }

                    if(strcmp(primeira_coluna, "username")==0 && coluna==1){
                        fprintf(usuario_atualizado, ";%s", novo_username);
                    }
                    else{
                        if(coluna==0){
                            fprintf(usuario_atualizado, "%s", coluna_txt);
                        }
                        else{
                            fprintf(usuario_atualizado, ";%s", coluna_txt);
                        }
                        
                    }
                    

                coluna_txt = strtok(NULL, ";"); 
                coluna++;
            }

            coluna=0;
            linha++;
        }

        fprintf(usuario_atualizado, ";");

        fclose(usuario_atualizado);
        fclose(usuario);

        remove(arq);
        rename("banco/usuarios/usuario_atualizado.csv", arq);

        printf("Alteracao concluida com sucesso!\n");

    }
        break;
    case 4:
    {
        char nova_senha[256];
                
        printf("Digite sua nova senha: ");
        fflush(stdin);
        scanf("%[^\n]%*c", nova_senha);
        
        //segue a mesma logica da alteracao do nome

        FILE *usuario, *usuario_atualizado;
        
        usuario = fopen(arq, "r");
        usuario_atualizado = fopen("banco/usuarios/usuario_atualizado.csv", "w");
        if(usuario == NULL || usuario_atualizado == NULL){
            printf("Erro na abertura do arquivo.\n");
            exit(1);
        }

        char linha_txt[1024], primeira_coluna[50];
        int linha = 0, coluna = 0; 

        while(fgets(linha_txt, 1024, usuario) != NULL){ 
            char *coluna_txt; 
            coluna_txt = strtok(linha_txt, ";"); 
            while(coluna_txt != NULL){ 
                
                    if(coluna==0){
                        strcpy(primeira_coluna, coluna_txt);
                    }

                    if(strcmp(primeira_coluna, "senha")==0 && coluna==1){
                        fprintf(usuario_atualizado, ";%s", nova_senha);
                    }
                    else{
                        if(coluna==0){
                            fprintf(usuario_atualizado, "%s", coluna_txt);
                        }
                        else{
                            fprintf(usuario_atualizado, ";%s", coluna_txt);
                        }
                        
                    }
                    

                coluna_txt = strtok(NULL, ";"); 
                coluna++;
            }

            coluna=0;
            linha++;
        }

        fprintf(usuario_atualizado, ";");

        fclose(usuario_atualizado);
        fclose(usuario);

        remove(arq);
        rename("banco/usuarios/usuario_atualizado.csv", arq);

        printf("Alteracao concluida com sucesso!\n");

    }
        break;
    case 5:
    {
        int numtags = num_tags();
        int tag, tags[numtags], i, j, verifica_repeticao;

        /*
        essa parte segue a seguinte logica: 
        - copia o arquivo usuario(indice_arquivo).csv para usuario_atualizado.csv, ate chegar na linha de tags  
        - ao chegar na linha de tags, faz um novo cadastro de cidades
        - copia o restante do arquivo
        - apaga o arquivo(indice_arquivo).csv
        - renomeia o arquivo usuario_atualizado.csv para usuario(indice_arquivo).csv
        */

        //copia o arquivo usuario ate chegar em tags

        FILE *usuario, *usuario_atualizado;
        
        usuario = fopen(arq, "r");
        usuario_atualizado = fopen("banco/usuarios/usuario_atualizado.csv", "w");
        if(usuario == NULL || usuario_atualizado == NULL){
            printf("Erro na abertura do arquivo.\n");
            exit(1);
        }

        char linha_txt[1024], primeira_coluna[50];
        int linha = 0, coluna = 0, primeira_copia=0; 

        while(fgets(linha_txt, 1024, usuario) != NULL){ 
            char *coluna_txt; 
            coluna_txt = strtok(linha_txt, ";"); 
            while(coluna_txt != NULL){
                
                    if(coluna==0){
                        strcpy(primeira_coluna, coluna_txt);
                    }

                    if(strcmp(primeira_coluna, "tags")==0){
                        if(strcmp(coluna_txt, "\n")==0) break;
                        fprintf(usuario_atualizado, "%s", coluna_txt);
                        primeira_copia=1;
                        break;
                        
                    }
                    else{
                        if(coluna==0){
                            fprintf(usuario_atualizado, "%s", coluna_txt);
                        }
                        else{
                            fprintf(usuario_atualizado, ";%s", coluna_txt);
                        }
                        
                    }
                    

                coluna_txt = strtok(NULL, ";"); 
                coluna++;
            }
            if(primeira_copia==1) break;
            coluna=0;
            linha++;
        }
        fprintf(usuario_atualizado, ";");

        fclose(usuario);
        fclose(usuario_atualizado);
        
        usuario_atualizado = fopen("banco/usuarios/usuario_atualizado.csv", "a");
        if(usuario_atualizado == NULL){
            printf("Erro na abertura do arquivo.\n");
            exit(1);
        }


        //cadastra novamente as tags

        for(i=0; i<numtags; i++){
            tags[i]=0;
        }
            
        for(i=0; i<numtags; i++){
            
            imprime_tags();
            printf("Digite o numero correspondente a tag: ");
            scanf("%d", &tag);
            while(tag<1 || tag>numtags){
                printf("Opcao invalida! Digite um numero de 1 a %d: ", numtags);
                scanf("%d", &tag);
            }
            verifica_repeticao=0;
            while(verifica_repeticao==0){
                verifica_repeticao=1;
                for(j=0; j<numtags; j++){
                    if(tags[j]==tag){
                        verifica_repeticao = 0;
                        break;
                    }
                }

                if(verifica_repeticao==0){
                    printf("Voce ja escolheu essa tag! Digite outro numero: ");
                    scanf("%d", &tag);
                    while(tag<1 || tag>numtags){
                        printf("Opcao invalida! Digite um numero de 1 a %d: ", numtags);
                        scanf("%d", &tag);
                    }
                }          
            }

            salva_tag(usuario_atualizado, tag);

            tags[i] = tag;

            printf("Deseja cadastrar mais alguma tag? [S\\N]");
            fflush(stdin);
            scanf("%c", &opcao);
            while(tolower(opcao)!='s' && tolower(opcao)!='n'){
                printf("Opcao invalida! Digite 'S' ou 'N': ");
                fflush(stdin);
                scanf("%c", &opcao);
            }

            if(tolower(opcao)=='n') break;

        }

        fclose(usuario_atualizado);

        //copia o resto do arquivo

        linha = 0, coluna = 0;
  
        usuario = fopen(arq, "r");
        usuario_atualizado = fopen("banco/usuarios/usuario_atualizado.csv", "a");
        if(usuario == NULL || usuario_atualizado == NULL){
            printf("Erro na abertura do arquivo.\n");
            exit(1);
        }

        while(fgets(linha_txt, 1024, usuario) != NULL){ 
            char *coluna_txt; 
            coluna_txt = strtok(linha_txt, ";"); 
            while(coluna_txt != NULL){
                if(strlen(coluna_txt)<4) break;
                if(linha>=5){
                    fprintf(usuario_atualizado, "\n");
                    if(coluna==0){
                        fprintf(usuario_atualizado, "%s", coluna_txt);
                    }
                    else{
                        fprintf(usuario_atualizado, ";%s", coluna_txt);
                    }
                }

                coluna_txt = strtok(NULL, ";"); 
                coluna++;
            }
            coluna=0;
            linha++;
        }

        fclose(usuario);
        fclose(usuario_atualizado);
        remove(arq);
        rename("banco/usuarios/usuario_atualizado.csv", arq);

        printf("Alteracao concluida com sucesso!\n");

    }
        break;
    default:
        break;
    }

}

//salva dados do usuario logado na struct Usuario dados_usuario para facilitar o uso em outras funcoes
void salva_dados_usuario(int indice_usuario, Usuario *dados_usuario_ptr){
    
    FILE *usuario;

    char arq[256];
    sprintf(arq, "banco/usuarios/usuario%d.csv", indice_usuario);

    usuario = fopen(arq, "r");
    if(usuario == NULL){
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }

    char linha_txt[1024], primeira_coluna[50];
    int linha = 0, coluna = 0; 

    dados_usuario_ptr->num_cidades_usuario = 0;
    dados_usuario_ptr->num_tags_usuario = 0;
    dados_usuario_ptr->num_projetos_usuario = 0;

    while(fgets(linha_txt, 1024, usuario) != NULL){ 
        char *coluna_txt; 
        coluna_txt = strtok(linha_txt, ";"); 
        while(coluna_txt != NULL){ 

            if(coluna==0){
                strcpy(primeira_coluna, coluna_txt);
            }

            if(strcmp(primeira_coluna, "cidades")==0 && coluna!=0){

                if(strcmp(coluna_txt, "\n")==0) break; 
                strcpy(dados_usuario_ptr->cidades[coluna-1], coluna_txt);
                dados_usuario_ptr->num_cidades_usuario++;

            }
            else if(strcmp(primeira_coluna, "tags")==0 && coluna!=0){
                if(strcmp(coluna_txt, "\n")==0) break;
                strcpy(dados_usuario_ptr->tags[coluna-1], coluna_txt);
                dados_usuario_ptr->num_tags_usuario++;

            }
            else if(strcmp(primeira_coluna, "projetos")==0 && coluna!=0){
                if(strcmp(coluna_txt, "\n")==0) break;
                strcpy(dados_usuario_ptr->projetos[coluna-1], coluna_txt);
                dados_usuario_ptr->num_projetos_usuario++; 
            }
            coluna_txt = strtok(NULL, ";"); 
            coluna++;
        }
        coluna=0;
        linha++;
    }

    fclose(usuario);
}

//cria uma lista de projetos para serem sugeridos para o usuario
int cria_lista_sugestoes(int indice_usuario, Usuario *dados_usuario_ptr, Sugestoes *projetos, char *tipo_de_lista){

    int i, j, aux=0, aux2=0;
    FILE *projeto;

    char arq[256];

    int encontrou_cidade;
    int encontrou_projeto, indice_projetos_nao_cadastrados[num_projetos()];

    //o loop abaixo separa os projetos dos quais o usuario ainda nao faz parte para serem classificados na criacao da lista de sugestoes
    //e armazena seus indices no vetor indice_projetos_nao_cadastrados
    for(i=0; i<num_projetos(); i++){

        sprintf(arq, "banco/projetos/projeto%d.csv", i+1);
        encontrou_projeto=0;

        for(j=0; j<dados_usuario_ptr->num_projetos_usuario; j++){
        
            projeto = fopen(arq, "r");
            if(projeto == NULL){
                printf("Erro na abertura do arquivo.\n");
                exit(1);
            }
            
            char linha_txt[1024], primeira_coluna[50];
            int linha = 0, coluna = 0; 

            while(fgets(linha_txt, 1024, projeto) != NULL){ 
                char *coluna_txt; 
                coluna_txt = strtok(linha_txt, ";"); 
                while(coluna_txt != NULL){ 

                    if(coluna==0){
                        strcpy(primeira_coluna, coluna_txt);
                    }

                    if(strcmp(primeira_coluna, "nome")==0 && coluna==1 && encontrou_projeto==0){
                        if(strcmp(coluna_txt, "\n")==0) break; 
                        if(strcmp(dados_usuario_ptr->projetos[j], coluna_txt)==0){
                            encontrou_projeto=1;
                            break;
                        }

                    }

                    coluna_txt = strtok(NULL, ";"); 
                    coluna++;
                }
                if(encontrou_projeto==1) break;
                coluna=0;
                linha++;
            }
        
            fclose(projeto);
            if(encontrou_projeto==1) break;
        }
        
        if(encontrou_projeto==0){
            indice_projetos_nao_cadastrados[aux2] = i+1;
            aux2++;
        }
    
    }

    //o loop abaixo separa os projetos que possuem ao menos uma cidade em comum com o usuario
    //e armazena seus indices no vetor projetos
    for(i=0; i<aux2; i++){

        sprintf(arq, "banco/projetos/projeto%d.csv", indice_projetos_nao_cadastrados[i]);

        encontrou_cidade = 0;
        for(j=0; j<dados_usuario_ptr->num_cidades_usuario; j++){
        
            projeto = fopen(arq, "r");
            if(projeto == NULL){
                printf("Erro na abertura do arquivo.\n");
                exit(1);
            }

            
            char linha_txt[1024], primeira_coluna[50];
            int linha = 0, coluna = 0; 

            while(fgets(linha_txt, 1024, projeto) != NULL){ 
                char *coluna_txt; 
                coluna_txt = strtok(linha_txt, ";"); 
                while(coluna_txt != NULL){ 

                    if(coluna==0){
                        strcpy(primeira_coluna, coluna_txt);
                    }

                    if(strcmp(primeira_coluna, "cidades")==0 && coluna!=0 && encontrou_cidade==0){
                        if(strcmp(coluna_txt, "\n")==0) break; 
                        if(strcmp(dados_usuario_ptr->cidades[j], coluna_txt)==0){
                            projetos[aux].indice_arquivo_projeto = indice_projetos_nao_cadastrados[i];
                            aux++;
                            encontrou_cidade=1;
                            break;
                        }

                    }

                    coluna_txt = strtok(NULL, ";"); 
                    coluna++;
                }
                if(encontrou_cidade==1) break;
                coluna=0;
                linha++;
            }
        
        fclose(projeto);
        if(encontrou_cidade==1) break;
        } 
    
    }

    //armazena quantas tags em comum os projetos do vetor projetos tem com o usuario
    for(i=0; i<aux; i++){
        projetos[i].tags_em_comum=0;
        sprintf(arq, "banco/projetos/projeto%d.csv", projetos[i].indice_arquivo_projeto);

        projetos[i].num_membros_projeto = num_membros_projeto(projetos[i].indice_arquivo_projeto);

        for(j=0; j<dados_usuario_ptr->num_tags_usuario; j++){

            projeto = fopen(arq, "r");
            if(projeto == NULL){
                printf("Erro na abertura do arquivo.\n");
                exit(1);
            }

            char linha_txt[1024], primeira_coluna[50];
            int linha = 0, coluna = 0; 

            while(fgets(linha_txt, 1024, projeto) != NULL){ 
                char *coluna_txt; 
                coluna_txt = strtok(linha_txt, ";"); 
                while(coluna_txt != NULL){ 

                    if(coluna==0){
                        strcpy(primeira_coluna, coluna_txt);
                    }

                    if(strcmp(primeira_coluna, "tags")==0 && coluna!=0){
                        if(strcmp(coluna_txt, "\n")==0) break;
                        if(strcmp(dados_usuario_ptr->tags[j], coluna_txt)==0){
                            projetos[i].tags_em_comum++;
                        }
                    }

                    coluna_txt = strtok(NULL, ";"); 
                    coluna++;
                }
                coluna=0;
                linha++;
            }

            fclose(projeto);
        } 

    }


    //nesse laco, sera criada uma lista descrescente de projetos usando o criterio de quantidade de tags em comum com o usuario
    //ou seja, do projeto mais relevante para o menos relevante
    if(strcmp(tipo_de_lista, "relevancia")==0){

        int desordem;
        Sugestoes aux3;

        do{
            desordem = 0;
            for(i=0; i<aux-1; i++){
                if(projetos[i].tags_em_comum < projetos[i+1].tags_em_comum){
                    aux3 = projetos[i];
                    projetos[i] = projetos[i+1];
                    projetos[i+1] = aux3;
                    desordem = 1;
                }
            }
        }while(desordem==1);


    }

    //nesse laco, sera criada uma lista descrescente de projetos usando o criterio de quantidade de membros do projeto
    //ou seja, do projeto mais popular para o menos popular
    else if(strcmp(tipo_de_lista, "popularidade")==0){

        int desordem;
        Sugestoes aux3;

        do{
            desordem = 0;
            for(i=0; i<aux-1; i++){
                if(projetos[i].num_membros_projeto < projetos[i+1].num_membros_projeto){
                    aux3 = projetos[i];
                    projetos[i] = projetos[i+1];
                    projetos[i+1] = aux3;
                    desordem = 1;
                }
            }
        }while(desordem==1);

    }

    return aux;
}

//cadastra o projeto escolhido no arquivo csv do usuario
void salva_projeto(int indice_usuario, int indice_projeto, char *nome_projeto, int alterar_num_membros){
    
    //alterar_num_membros==0 no caso de cadastro de projeto pois nao eh necessario incremetar a quantidade de membros do projeto
    //porque ao criar um projeto automaticamente a quantidade de membros eh cadastrada como 1

    if(alterar_num_membros==1 || alterar_num_membros==0){
        FILE *usuario;

        char arq_usuario[256];

        sprintf(arq_usuario, "banco/usuarios/usuario%d.csv", indice_usuario);

        usuario = fopen(arq_usuario, "a");
        if(usuario == NULL){
            printf("Erro na abertura do arquivo.\n");
            exit(1);
        }

        fprintf(usuario, "%s;", nome_projeto);
        fclose(usuario);

        //incrementa o numero de membros do projeto:
        if(alterar_num_membros==1){
            FILE *projeto, *projeto_atualizado;

            char arq_projeto[256];

            sprintf(arq_projeto, "banco/projetos/projeto%d.csv", indice_projeto);
            
            projeto = fopen(arq_projeto, "r");
            projeto_atualizado = fopen("banco/projetos/projeto_atualizado.csv", "w");
            if(projeto == NULL || projeto_atualizado == NULL){
                printf("Erro na abertura do arquivo.\n");
                exit(1);
            }

            char linha_txt[1024], primeira_coluna[50];
            int linha = 0, coluna = 0; 

            while(fgets(linha_txt, 1024, projeto) != NULL){ 
                char *coluna_txt; 
                coluna_txt = strtok(linha_txt, ";"); 
                while(coluna_txt != NULL){ 
                    
                        if(coluna==0){
                            strcpy(primeira_coluna, coluna_txt);
                        }
        
                        if(strcmp(primeira_coluna, "quantidade de membros")==0 && coluna==1){
                            fprintf(projeto_atualizado, ";%d", atoi(coluna_txt)+1);
                        }
                        else{
                            if(coluna==0){
                                fprintf(projeto_atualizado, "%s", coluna_txt);
                            }
                            else{
                                fprintf(projeto_atualizado, ";%s", coluna_txt);
                            }
                            
                        }
                        

                    coluna_txt = strtok(NULL, ";"); 
                    coluna++;
                }

                coluna=0;
                linha++;
            }

            fprintf(projeto_atualizado, ";");

            fclose(projeto_atualizado);
            fclose(projeto);

            remove(arq_projeto);
            rename("banco/projetos/projeto_atualizado.csv", arq_projeto);

        }

    }
    else{
        printf("\n\nFATAL ERROR: Parametro 'alterar_num_membros' incorreto na funcao 'salva_projeto'. Passe 1 ou 0 como parametro\n\n");
        exit(1);
    }



}

//salva dados do projeto na struct Projeto dados_projeto para facilitar o uso em outras funcoes
void salva_dados_projeto(int indice_projeto, Projeto *dados_projeto_ptr){
    FILE *projeto;

    char arq[256];
    sprintf(arq, "banco/projetos/projeto%d.csv", indice_projeto);

    projeto = fopen(arq, "r");
    if(projeto == NULL){
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }

    char linha_txt[1024], primeira_coluna[50];
    int linha = 0, coluna = 0; 

    while(fgets(linha_txt, 1024, projeto) != NULL){ 
        char *coluna_txt; 
        coluna_txt = strtok(linha_txt, ";"); 
        while(coluna_txt != NULL){ 

            if(coluna==0){
                strcpy(primeira_coluna, coluna_txt);
            }

            if(strcmp(primeira_coluna, "nome")==0 && coluna==1){
                if(strcmp(coluna_txt, "\n")==0) break; 
                strcpy(dados_projeto_ptr->nome, coluna_txt);
            }
            else if(strcmp(primeira_coluna, "telefone admin")==0 && coluna==1){
                if(strcmp(coluna_txt, "\n")==0) break;
                strcpy(dados_projeto_ptr->telefone, coluna_txt);

            }          
            coluna_txt = strtok(NULL, ";"); 
            coluna++;
        }
        coluna=0;
        linha++;
    }

    fclose(projeto);
}

//retorna o numero de membros do projeto cujo indice eh indice_projeto
int num_membros_projeto(int indice_projeto){
    
    FILE *projeto;

    char arq[256];
    sprintf(arq, "banco/projetos/projeto%d.csv", indice_projeto);

    projeto = fopen(arq, "r");
    if(projeto == NULL){
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }

    char linha_txt[1024], primeira_coluna[50];
    int linha = 0, coluna = 0; 

    while(fgets(linha_txt, 1024, projeto) != NULL){ 
        char *coluna_txt; 
        coluna_txt = strtok(linha_txt, ";"); 
        while(coluna_txt != NULL){ 

            if(coluna==0){
                strcpy(primeira_coluna, coluna_txt);
            }

            if(strcmp(primeira_coluna, "quantidade de membros")==0 && coluna==1){
                if(strcmp(coluna_txt, "\n")==0) break; 
                fclose(projeto);
                return atoi(coluna_txt);
            }      
            coluna_txt = strtok(NULL, ";"); 
            coluna++;
        }
        coluna=0;
        linha++;
    }
    fclose(projeto);

}

//imprime para o usuario as sugestoes de projetos armazenados no vetor projetos
//podendo ser por ordem de relevancia ou popularidade
void mostra_sugestoes(int indice_usuario, int tam_lista_sugestoes, Sugestoes *projetos, char *tipo_de_lista){
    
    int i; 

    if(strcmp(tipo_de_lista, "popularidade")==0){
        
        for (i=0; i < tam_lista_sugestoes; i++) {
            system("clear||cls");      

            char arq_projeto[256];
            sprintf(arq_projeto,"banco/projetos/projeto%d.csv", projetos[i].indice_arquivo_projeto);
            
            Projeto *dados_projeto_ptr, dados_projeto;
            dados_projeto_ptr = &dados_projeto;
            salva_dados_projeto(projetos[i].indice_arquivo_projeto, dados_projeto_ptr);

            FILE *projeto;
            
            projeto = fopen(arq_projeto, "r");
            if (projeto == NULL) {
                printf("Erro na abertura do arquivo.\n");
                exit(1);
            }
            
            char linha_txt_projeto[1024];
            int linha = 0, coluna = 0;
            
            while(fgets(linha_txt_projeto, 1024, projeto) != NULL){ 
                char *coluna_txt_projeto; 
                coluna_txt_projeto = strtok(linha_txt_projeto, ";"); 
                while(coluna_txt_projeto != NULL) {
                    if(linha == 0 && coluna == 1) {
                        printf("\n%s\n", coluna_txt_projeto);
                    }
                    if (linha == 5 && coluna == 1) {
                        printf("\n%s\n", coluna_txt_projeto);
                    }
                    coluna_txt_projeto = strtok(NULL, ";"); 
                    coluna++;
                }
                coluna = 0;
                linha++;
            }
            fclose(projeto);
            
            char escolher_participar;
            printf("\nDeseja participar deste projeto? [S//N] ");
            fflush(stdin);
            scanf("%c", &escolher_participar);
            
            while(tolower(escolher_participar)!= 's' && tolower(escolher_participar)!= 'n'){
                printf("Opcao invalida! Digite 'S' ou 'N': ");
                fflush(stdin);
                scanf("%c", &escolher_participar);
            }
            
            if(tolower(escolher_participar)=='s'){
                salva_dados_projeto(projetos[i].indice_arquivo_projeto, dados_projeto_ptr);
                salva_projeto(indice_usuario, projetos[i].indice_arquivo_projeto, dados_projeto.nome, 1);
                printf("\nVoce escolheu participar do projeto %s!\n", dados_projeto.nome);
                printf("Numero de telefone para entrar em contato com o administrador: %s\n", dados_projeto.telefone);
            }
            if(tolower(escolher_participar)=='n'){
                printf("\nVoce escolheu nao participar desse projeto.\n\n"); 
            }

            char prosseguir;
            printf("Digite 'p' para prosseguir ou 'v' para voltar ao menu de sugestoes: ");
            fflush(stdin);
            scanf("%c", &prosseguir);
            while(tolower(prosseguir)!= 'p' && tolower(prosseguir)!= 'v'){
                printf("Opcao invalida! Digite 'p' ou 'v': ");
                fflush(stdin);
                scanf("%c", &prosseguir);
            }
            
            if(tolower(prosseguir)=='p'){
                if(i==tam_lista_sugestoes-1){
                    printf("\nNao ha mais sugestoes :( voltando ao menu principal...\n");
                    return;
                }
                continue;
            }
            if(tolower(prosseguir)=='v'){
                return; //sai da funcao e continua no programa principal
            }
    
        }

    }

    else if(strcmp(tipo_de_lista, "relevancia")==0){
        int fim_interesses_em_comum=0;
        for (i = 0; i < tam_lista_sugestoes; i++) {
            system("clear||cls");
            char arq_projeto[256];
            sprintf(arq_projeto,"banco/projetos/projeto%d.csv", projetos[i].indice_arquivo_projeto);
            
            Projeto *dados_projeto_ptr, dados_projeto;
            dados_projeto_ptr = &dados_projeto;
            salva_dados_projeto(projetos[i].indice_arquivo_projeto, dados_projeto_ptr);

            if(projetos[i].tags_em_comum==0 && fim_interesses_em_comum==0){
                fim_interesses_em_comum++;
                if(fim_interesses_em_comum==1){
                    char continuar;
                    printf("Nas suas cidades de atuacao nao ha mais projetos relacionados aos seus interesses :(\n");
                    printf("Deseja continuar vendo outros projetos nas suas cidades de atuacao? [S\\N]: ");
                    fflush(stdin);
                    scanf("%c", &continuar);
                
                    while(tolower(continuar)!= 's' && tolower(continuar)!= 'n'){
                        printf("Opcao invalida! Digite 'S' ou 'N': ");
                        fflush(stdin);
                        scanf("%c", &continuar);
                    }
                    
                    if(tolower(continuar)=='n'){
                        break;
                    }
            
                }
            }

            FILE *projeto;
            
            projeto = fopen(arq_projeto, "r");
            if (projeto == NULL) {
                printf("Erro na abertura do arquivo.\n");
                exit(1);
            }
            
            char linha_txt_projeto[1024];
            int linha = 0, coluna = 0;
            
            while(fgets(linha_txt_projeto, 1024, projeto) != NULL){ 
                char *coluna_txt_projeto; 
                coluna_txt_projeto = strtok(linha_txt_projeto, ";"); 
                while(coluna_txt_projeto != NULL) {
                    if(linha == 0 && coluna == 1) {
                        printf("\n%s\n", coluna_txt_projeto);
                    }
                    if (linha == 5 && coluna == 1) {
                        printf("\n%s\n", coluna_txt_projeto);
                    }
                    coluna_txt_projeto = strtok(NULL, ";"); 
                    coluna++;
                }
                coluna = 0;
                linha++;
            }
            fclose(projeto);
            char escolher_participar;
            
            printf("\nDeseja participar deste projeto? [S//N] ");
            fflush(stdin);
            scanf("%c", &escolher_participar);
            
            while(tolower(escolher_participar)!= 's' && tolower(escolher_participar)!= 'n'){
                printf("Opcao invalida! Digite 'S' ou 'N': ");
                fflush(stdin);
                scanf("%c", &escolher_participar);
            }
            
            if(tolower(escolher_participar)=='s'){
                salva_dados_projeto(projetos[i].indice_arquivo_projeto, dados_projeto_ptr);
                salva_projeto(indice_usuario, projetos[i].indice_arquivo_projeto, dados_projeto.nome, 1);
                printf("\nVoce escolheu participar do projeto %s!\n", dados_projeto.nome);
                printf("Numero de telefone para entrar em contato com o administrador: %s\n", dados_projeto.telefone);
            }
            if(tolower(escolher_participar)=='n'){
                printf("\nVoce escolheu nao participar desse projeto.\n\n"); 
            }

            char prosseguir;
            printf("Digite 'p' para prosseguir ou 'v' para voltar ao menu de sugestoes: ");
            fflush(stdin);
            scanf("%c", &prosseguir);
            while(tolower(prosseguir)!= 'p' && tolower(prosseguir)!= 'v'){
                printf("Opcao invalida! Digite 'p' ou 'v': ");
                fflush(stdin);
                scanf("%c", &prosseguir);
            }
            
            if(tolower(prosseguir)=='p'){
                if(i==tam_lista_sugestoes-1){
                    printf("\nNao ha mais sugestoes :( voltando ao menu principal...\n");
                    return;
                }
                continue;
            }
            if(tolower(prosseguir)=='v'){
                return; //sai da funcao e continua no programa principal
            }

        }

    }

}

//funcao que permite ao usuario representado por indice_usuario cadastrar um projeto
void cadastra_projeto(int indice_usuario){
    char nome[256], instagram[256], senha[256], telefone[12], opcao, descricao[3072]; //3072 = 1024*3
    int numcidades = num_cidades();
    int numtags = num_tags();
    int cidade, indice, cidades[numcidades], tag, tags[numtags], i, j, verifica_repeticao;
    
    FILE *projeto;
    indice = num_projetos() + 1;
    char dir[256];
    sprintf(dir, "banco/projetos/projeto%d.csv", indice);

    projeto = fopen(dir, "w");
    if(projeto == NULL){
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }

    //formulario para cadastro das informacoes do projeto:

    printf("Digite o nome do projeto: ");
    fflush(stdin);
    scanf("%[^\n]%*c", nome);

    while(verifica_existencia_projeto(nome)!=0){
        printf("Ja existe um projeto com esse nome. Digite outro: ");
        fflush(stdin);
        scanf("%[^\n]%*c", nome);
    }
    

    fprintf(projeto, "nome;%s;\n", nome);
    fprintf(projeto, "cidades;");


    for(i=0; i<numcidades; i++){
        cidades[i]=0;
    }
        
    for(i=0; i<numcidades; i++){
        printf("Atualmente, as seguintes cidades estao cadastradas: \n");
        imprime_cidades();
        printf("Digite o numero correspondente a cidade de atuacao do projeto: ");
        scanf("%d", &cidade);
        while(cidade<1 || cidade>numcidades){
            printf("Opcao invalida! Digite um numero de 1 a %d: ", numcidades);
            scanf("%d", &cidade);
        }
        verifica_repeticao = 0;
        while(verifica_repeticao==0){
            verifica_repeticao = 1;
            for(j=0; j<numcidades; j++){
                if(cidades[j]==cidade){
                    verifica_repeticao = 0;
                    break;
                }
            }

            if(verifica_repeticao==0){
                printf("Voce ja escolheu essa cidade! Digite outro numero: ");
                scanf("%d", &cidade);
                while(cidade<1 || cidade>numcidades){
                    printf("Opcao invalida! Digite um numero de 1 a %d: ", numcidades);
                    scanf("%d", &cidade);
                }
            }          
        }

        salva_cidade(projeto, cidade);

        cidades[i] = cidade;

        printf("Deseja cadastrar mais alguma cidade? [S\\N] ");
        fflush(stdin);
        scanf("%c", &opcao);
        while(tolower(opcao)!='s' && tolower(opcao)!='n'){
            printf("Opcao invalida! Digite 'S' ou 'N': ");
            fflush(stdin);
            scanf("%c", &opcao);
        }

        if(tolower(opcao)=='n') break;

    }

    printf("Cidades cadastradas!\n\n");

    printf("Digite o @ do instagram do projeto: @");
    fflush(stdin);
    scanf("%[^\n]%*c", instagram);
    fprintf(projeto, "\ninstagram;%s;\n", instagram);


    le_telefone(projeto);

    printf("\nAgora os assuntos relacionados ao seu projeto: \n");

    for(i=0; i<numtags; i++){
        tags[i]=0;
    }
        
    for(i=0; i<numtags; i++){
        imprime_tags();
        printf("Digite o numero correspondente a tag: ");
        scanf("%d", &tag);
        while(tag<1 || tag>numtags){
            printf("Opcao invalida! Digite um numero de 1 a %d: ", numtags);
            scanf("%d", &tag);
        }
        verifica_repeticao=0;
        while(verifica_repeticao==0){
            verifica_repeticao=1;
            for(j=0; j<numtags; j++){
                if(tags[j]==tag){
                    verifica_repeticao = 0;
                    break;
                }
            }

            if(verifica_repeticao==0){
                printf("Voce ja escolheu essa tag! Digite outro numero: ");
                scanf("%d", &tag);
                while(tag<1 || tag>numtags){
                    printf("Opcao invalida! Digite um numero de 1 a %d: ", numtags);
                    scanf("%d", &tag);
                }
            }          
        }

        salva_tag(projeto, tag);

        tags[i] = tag;

        printf("Deseja cadastrar mais alguma tag? [S\\N] ");
        fflush(stdin);
        scanf("%c", &opcao);
        while(tolower(opcao)!='s' && tolower(opcao)!='n'){
            printf("Opcao invalida! Digite 'S' ou 'N': ");
            fflush(stdin);
            scanf("%c", &opcao);
        }

        if(tolower(opcao)=='n') break;

    }


    printf("Digite uma descricao para o seu projeto: ");
    fflush(stdin);
    scanf("%[^\n]%*c", descricao);
    fprintf(projeto, "\ndescricao;%s;", descricao);
    

    fprintf(projeto, "\nquantidade de membros;1;");

    fclose(projeto);

    //como um novo projeto foi cadastrado, eh preciso atualizar a informacao do numero de projetos cadastrados
    /*
    essa parte segue a seguinte logica: 
    - copia o arquivo informacoes.csv para o arquivo informacoes2.csv, alterando a informacao do numero de projetos  
    - apaga o arquivo informacoes.csv
    - renomeia o arquivo informacoes2.csv para informacoes.csv
    */

    FILE *informacoes, *informacoes2;
    
    informacoes = fopen("banco/projetos/informacoes.csv", "r");
    informacoes2 = fopen("banco/projetos/informacoes2.csv", "w");
    if(informacoes == NULL || informacoes2 == NULL){
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }

    char linha_txt[1024];
    int linha = 0, coluna = 0, numprojetos; 

    while(fgets(linha_txt, 1024, informacoes) != NULL){ 
        char *coluna_txt; 
        coluna_txt = strtok(linha_txt, ";"); 
        while(coluna_txt != NULL){ 

            
            if(linha==0 && coluna==1){
                fprintf(informacoes2, ";%d", indice);
            }
            else{
                if(coluna==0){
                    fprintf(informacoes2, "%s", coluna_txt);
                }
                else{
                    fprintf(informacoes2, ";%s", coluna_txt);
                }
            
            }

            coluna_txt = strtok(NULL, ";"); 
            coluna++;
        }

        

        coluna=0;
        linha++;
    }

    fprintf(informacoes2, ";");

    fclose(informacoes2);
    fclose(informacoes);

    printf("Cadastro realizado com sucesso!\n\n");

    remove("banco/projetos/informacoes.csv");
    rename("banco/projetos/informacoes2.csv", "banco/projetos/informacoes.csv");

    salva_projeto(indice_usuario, indice, nome, 0);

}

//imprime os projetos nos quais o usuario esta cadastrado
void ver_meus_projetos(Usuario *dados_usuario_ptr){

    int i, j, aux=1;

    printf("\nProjetos que voce esta cadastrado:\n");
    
    for (i = 0; i < num_projetos(); i++) { 
        char arq_projeto[256];
        sprintf(arq_projeto,"banco/projetos/projeto%d.csv", i+1);
        
        Projeto *dados_projeto_ptr, dados_projeto;
        dados_projeto_ptr = &dados_projeto;
        salva_dados_projeto(i+1, dados_projeto_ptr);

        //verifica se algum projeto da matriz dados_usuario.projetos corresponde ao projeto do arquivo em questao
        for(j=0; j<dados_usuario_ptr->num_projetos_usuario; j++){
            if(strcmp(dados_usuario_ptr->projetos[j], dados_projeto_ptr->nome)==0){
                printf("%d - %s. Telefone admin: %s\n", aux, dados_projeto_ptr->nome, dados_projeto_ptr->telefone);
                aux++;
            }
        }
        
    }

    if(dados_usuario_ptr->num_projetos_usuario==0){
        printf("\nVoce ainda nao faz parte de nenhum projeto :(\n\n");
    }

    printf("\n");

}