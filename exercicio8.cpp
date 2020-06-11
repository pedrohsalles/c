// CICLO 3 EXERCICIO 8
// CRIE UMA FUNÇÃO NA LINGUAGEM C QUE APRESENTE NO CONSOLE SEU NOME COMPLETO,
// DATA DE NASCIMENTO, E NUMERO DE MATRICULA. APRESENTE TODO O CODIGO REFERENTE
// A FUNÇÃO E O PROGRAMA PRINCIPAL EM FUNCIONAMENTO.

#include <stdio.h>
#include <conio.h>
info()
{
  char nome[60];
  char nasc[11];
  int mat;

  printf("\nDigite seu nome: ");
  gets(nome);
  printf("\nDigite sua data nascimento DD/MM/AAA: ");
  gets(nasc);
  printf("\nDigite sua matricula: ");
  scanf("%d", &mat);

  printf("\nNome: %s \tData Nasc.: %s \tMatricula: %d \n", nome, nasc, mat);

  getch();
  return (0);
}
int main()
{
  info();
  return (0);
}
