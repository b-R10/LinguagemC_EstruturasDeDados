#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void acentuacao(){
    setlocale(LC_ALL, "portuguese");
}

struct Conta{
    int num_conta;
    char tipo_conta;
    char nome[80];
    float saldo;
} clienteNovo, clienteAntigo;

void AddNum(){
    clienteNovo.num_conta = 123;
    printf("Número da conta: %i", clienteNovo.num_conta);
}

void InicializacaoDeEstrutura(){
    struct Conta clienteNovo = {100, 'E',"Jean" , 10000};
    printf("%d, %c, %s, %.2f", clienteNovo.num_conta, clienteNovo.tipo_conta, clienteNovo.nome, clienteNovo.saldo);
}

void CopiaDeDados(){
    struct Conta clienteNovo = {100, 'E',"Jean" , 10000};
    struct Conta clienteAntigo;
    clienteAntigo = clienteNovo;
    printf("%d, %c, %s, %.2f", clienteAntigo.num_conta, clienteAntigo.tipo_conta, clienteAntigo.nome, clienteAntigo.saldo);
}

struct Aluno
{
    char *nome;
    int idade;
} aluno1, aluno2;

void EstruturasQueAcompanhamPonteiros()
{
    aluno1.nome = "Antônio";
    aluno1.idade = 18;
    aluno2 = aluno1;
    printf("%s, %d", aluno2.nome, aluno2.idade);
}