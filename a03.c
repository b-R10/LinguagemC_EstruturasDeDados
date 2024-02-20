/*
Faça um programa que contenha uma variável vetor do tipo estrutura Conta denominada vcliente tal como a estrutura definida no slide 4.
A estrutura Conta deve ser declarada como variável global, porém a variável vcliente deve ser declarada como variável local na função main.
O programa deve declarar a variável vcliente para 100 clientes, porém, deve perguntar o número de clientes antes de iniciar a inserção
das informações para o cliente.
As informações da estrutura devem ser impressas conforme exemplo ilustrado a seguir.

    printf("\nImprime dados dos clientes");
    printf("\nNroCta TipoCta NomeCliente SaldoCta");
    for (i=0; i<n; i++)
    {
        printf("\n%3d %c %s %.2f", vcliente[i].num_conta, vcliente[i].tipo_conta, vcliente[i].nome,
        vcliente[i].saldo);
    }
*/

#include "library1.h"

struct conta
{
    int num_conta;
    char tipo_conta[15];
    char nome[40];
    float saldo;
};

int main()
{
    acentuacao();

    int n;
    printf("Quantos clientes serão inseridos?");
    scanf("%d", &n);
    getchar();

    struct conta vcliente[100];

    for(int i=0; i<n; i++)
    {
        printf("\nInsira o nome do cliente %d:", i+1);
        scanf("%s", &vcliente->nome);
        printf("Insira o tipo da conta do cliente %d:", i+1);
        scanf("%14s", &vcliente->tipo_conta);
        printf("Insira o número da conta do cliente %d:", i+1);
        scanf("%d", &vcliente[i].num_conta);
        printf("Insira o saldo da conta do cliente %d:", i+1);
        scanf("%f", &vcliente[i].saldo);
    }

    printf("\nImprime dados dos clientes");
    printf("\nNroCta TipoCta NomeCliente SaldoCta");
    for(int i=0; i<n; i++)
    {
        printf("\n%3d %s %s %.2f", vcliente[i].num_conta,
                                    vcliente[i].tipo_conta,
                                    vcliente[i].nome,
                                    vcliente[i].saldo);
    }

    return 0;
}