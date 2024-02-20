/*

Exercício 1
Desenvolva um programa que use a passagem de estruturas com parâmetros para uma função, utilizando a passagem de parâmetros por referência.
O programa deve utilizar a seguinte estrutura como base:

typdef struct {
    char nome[80];
    char situacao[20];
    float saldo;
}conta;

Definir a estrutura fora de qualquer função (escopo global).
Definir uma variável cliente do tipo conta dentro de main. Exemplo: conta cliente;
Desenvolver uma função para receber o valor dos seguintes membros da variável cliente: nome e saldo.
Definir uma função que receba toda estrutura como parâmetro e altere seus membros da seguinte forma:
Se o saldo for maior ou igual a R$ 1.000,00, atribua “PREFERENCIAL” para o membro situacao e
incremente em 10% o valor do saldo.
Se o saldo for menor que R$ 1.000,00, atribua “CONVENCIONAL” para o membro situacao.
Desenvolver uma função para exibir o valor dos membros da variável cliente

*/

#include "library1.h"

typedef struct
{
    char nome[80];
    char situacao[20];
    float saldo;
} conta;

void informacao(conta *cliente1)
{
    printf("Insira o nome:");
    scanf("%s", &cliente1->nome);
    printf("\nInsira o saldo:\n");
    scanf( "%f", &cliente1->saldo);
}

void UMouOUTRO(conta *cliente1)
{
    if(cliente1->saldo >= 1000.00)
    {
        strcpy(cliente1->situacao, "PREFERENCIAL");
        cliente1->saldo += (cliente1->saldo)*10/100;
    }
    else
    {
        strcpy(cliente1->situacao, "CONVENCIONAL");
    }
}

void exibir(conta *cliente1)
{
    printf("Nome: %s\n", cliente1->nome);
    printf("Saldo: %.2f\n", cliente1->saldo);
    printf("Situação:  %s\n", cliente1->situacao);
}

int main()
{
    acentuacao();
    conta cliente;
    informacao(&cliente);
    UMouOUTRO(&cliente);
    exibir(&cliente);
    return 0;
}
