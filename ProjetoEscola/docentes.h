// Declaração da estrutura de um aluno
typedef struct Professor {
  int matricula, cpf, data_nascimento;
  char nome[50], sexo[1];
} Professor;

// Funções pertinentes ao CRUD

void menu_professor(int);

void listar_professor(Aluno aluno, int);

int cadastro_professor(int quantidade_alunos);

void editar_professor(void);

void remover_professor(void);