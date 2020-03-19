// Definição da struct fila
typedef struct Aluno{

    char nome[30];
    int nota1;
    int nota2;
    char periodo[30];
    int ra;

    struct Aluno *prox;
} A; /// <- apelido da struct

/// ASSINATURA DOS METODOS
void criaFila(A *cabeca);
A *verificaFila(A *cabeca);

/// OPERAÇÕES DE MANIPULAÇÃO DA FILA
void insereFila(A *cabeca);
void removeFila(A *cabeca);
void mostraMedias(A *cabeca);

void menu(A *cabeca);