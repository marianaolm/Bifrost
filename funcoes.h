typedef struct Sugestoes{
   int indice_arquivo_projeto;
   int tags_em_comum;
   int num_membros_projeto;
}Sugestoes;

typedef struct Usuario{
    char cidades[50][256];
    int num_cidades_usuario;
    char tags[50][256];
    int num_tags_usuario;
    char projetos[50][256];
    int num_projetos_usuario;
}Usuario;

typedef struct Projeto{
    char nome[256];
    char telefone[12];
} Projeto;

void linha1();
void linha1menor();
void linha2();
void bifrost();
void saida();
void menu();
void sugestao();
void cadastro();
void login();
int num_usuarios();
int num_cidades();
int num_tags();
void cadastra_usuario();
void atualiza_dado(char *username);
void imprime_cidades();
void salva_cidade(FILE *arquivo, int cidade);
void salva_tag(FILE *arquivo, int tag);
void imprime_tags();
int verifica_existencia_username(char *username);
int valida_senha(char *username, char *senha);
int num_projetos();
int verifica_existencia_projeto(char *nome_projeto);
void le_telefone(FILE *projeto);
void salva_dados_usuario(int indice_usuario, Usuario *dados_usuario_ptr);
int cria_lista_sugestoes(int indice_usuario, Usuario *dados_usuario_ptr, Sugestoes *projetos, char *tipo_de_lista);
void salva_projeto(int indice_usuario, int indice_projeto, char *nome_projeto, int alterar_num_membros);
void salva_dados_projeto(int indice_projeto, Projeto *dados_projeto_ptr);
int num_membros_projeto(int indice_projeto);
void mostra_sugestoes(int indice_usuario, int tam_lista_sugestoes, Sugestoes *projetos, char *tipo_de_lista);
void cadastra_projeto(int indice_usuario);
void ver_meus_projetos(Usuario *dados_usuario_ptr);
