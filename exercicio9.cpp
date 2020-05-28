// Crie uma função que tenha 3 parâmetros, representando as notas de cada etapa
// de avaliação de uma disciplina. A função deverá apresentar o somatório das etapas na tela. 
// ATENÇÃO: A função deverá utilizar a PASSAGEM por REFERÊNCIA.

#include <stdio.h>
#include <conio.h>

float somatorio(float nota1, float nota2, float nota3)
{
    float soma;
    soma = 0;
    soma = nota1 + nota2 + nota3;
    
    return(soma);
}

int main()
{
    float nota1, nota2, nota3;
    float soma;
    printf("\nDigite a nota 1: ");
    scanf("%f", &nota1);
    printf("\nDigite a nota 2: ");
    scanf("%f", &nota2);
    printf("\nDigite a nota 3: ");
    scanf("%f", &nota3);
    printf("\n O somatorio das notas %f + %f + %f =  %f  \n", nota1, nota2, nota3, somatorio(nota1, nota2, nota3));
    getch();
    return(0);
}