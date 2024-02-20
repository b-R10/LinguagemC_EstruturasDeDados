/*
FORMATO:

    struct nome_da_estrutura
    {
        tipo_1 dado_1;
        tipo_2 dado_2;
        ...
        tipo_n dado_n;
    }nome_da_variavel_estrutura;

*/

#include "library.h"

struct Conta
{
    int num_conta;
    char tipo_conta;
    char nome[80];
    float saldo;
} clienteNovo, clienteAntigo;

void AddNum()
{
    clienteNovo.num_conta = 123;
    printf("Número da conta: %i", clienteNovo.num_conta);
}

void InicializacaoDeEstrutura()
{
    struct Conta clienteNovo = {100, 'E',"Jean" , 10000};
    printf("%d, %c, %s, %.2f", clienteNovo.num_conta,
                                clienteNovo.tipo_conta,
                                clienteNovo.nome,
                                clienteNovo.saldo);
}

void CopiaDeDados()
{
    struct Conta clienteNovo = {100, 'E',"Jean" , 10000};
    struct Conta clienteAntigo;
    clienteAntigo = clienteNovo;
    printf("%d, %c, %s, %.2f", clienteAntigo.num_conta,
                                clienteAntigo.tipo_conta,
                                clienteAntigo.nome,
                                clienteAntigo.saldo);
}

int main()
{
    acentuacao();
    
    // AddNum();
    // InicializacaoDeEstrutura();
    // CopiaDeDados();
    EstruturasQueAcompanhamPonteiros();
    
    return 0;
}

