#include "alunos.h"
#include <stdio.h>
#include <stdlib.h>

// Função que realiza o cadastro de aluno

int cadastro_aluno(int quantidade_alunos) {
  // Variável que controla a quantidade de alunos a serem cadastrados
  int count;

  // Solicita a quantidade de alunos e armazena o valor na variável
  printf("Quantos alunos serao cadastrados?\n");
  scanf("%d", &quantidade_alunos);
  fflush(stdin);

  // Faz a alocação dinâmica da quantidade de alunos cadastrados
  Aluno *alunos = (Aluno *)malloc(quantidade_alunos * sizeof(Aluno));

  system("clear");
  // Realiza o cadastro de aluno
  printf("Cadastrar novo aluno\n");
  printf("-------------------------------------------------------\n\n");

  for (count = 0; count < quantidade_alunos; count++) {
    printf("Informe o CPF: ");
    scanf("%d", &alunos->cpf);
    fflush(stdin);

    printf("Informe a matricula: ");
    scanf("%d", &alunos->matricula);
    fflush(stdin);
  }
  return quantidade_alunos;
}


 void listar_alunos(Aluno aluno, int *quantidade_alunos){
    int count;
    for(count = 0; count < quantidade_alunos; count++){
      printf("%d", aluno.cpf);
    }
}

// Função que apresenta o menu de aluno
void menu_aluno(int opcao_menu_aluno) {
  Aluno aluno;
  int *quantidade_alunos;
  printf("MENU ALUNO\n\n1 - Cadastrar novo aluno\n2 - Atualizar aluno "
         "existente\n3 - Remover aluno\n\nEscolha uma opcao: ");

  scanf("%d", &opcao_menu_aluno);

  system("clear");

  switch (opcao_menu_aluno) {
  case 1:
    cadastro_aluno(quantidade_alunos);
    break;
  case 2:
    listar_alunos(aluno, *quantidade_alunos);
    break;
    
  }
}