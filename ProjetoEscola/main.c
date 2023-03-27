#include "main.h"
#include "alunos.h"
#include <stdio.h>
#include <stdlib.h>

int main() {

  int opcao, opcao_menu_aluno;

  do {

    printf("\nMENU ESCOLAR\n\n1- Alunos\n2 - Docentes\n\nESCOLHA UMA OPCAO: ");
    scanf("%d", &opcao);
    fflush(stdin);
    system("clear");

    switch (opcao) {
    case 1:
      menu_aluno(opcao_menu_aluno);
      break;
    }
  } while (opcao != -1);
}