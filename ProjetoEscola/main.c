#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main() 
{

void menu(opcao){
  int opcao;
  do{

    printf("\nMENU ESCOLAR\n\n1- Alunos\n2 - Docentes\n\nESCOLHA UMA OPCAO: ");
    scanf("%d", &opcao);
   
  }while(opcao != 0);

}

menu(0);
  


  
}