// Declaração da estrutura de um aluno
typedef struct Aluno {
  int matricula, cpf, data_nascimento;
  char nome[50], sexo[1];
} Aluno;

// Funções pertinentes ao CRUD

void menu_aluno(int);

void listar_alunos(Aluno aluno, int);

int cadastro_aluno(int quantidade_alunos);

void editar_aluno(void);

void remover_aluno(void);