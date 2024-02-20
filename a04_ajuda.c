/*
2 – Faça uma nova versão para o exercício número 1, utilizando alocação dinâmica para alocar espaço
para a variável vcliente do tipo estrutura Conta
*/

#include "library1.h"

typedef struct
{
    /* data */
    int num_conta;
    char tipo_conta;
    char nome[80];
    float saldo;
} Conta;


int main()
{
    int n;
    printf("Quantos clientes serão inseridos?");
    scanf("%d", &n);

    Conta *vcliente = (Conta*) malloc(n*sizeof(Conta)); 

    for(int i=0; i<n; i++)
    {
        printf("\nInsira o nome do cliente %d:", i+1);
        scanf("%s", vcliente->nome);
        printf("Insira o tipo da conta do cliente %d:", i+1);
        scanf(" %c", &vcliente->tipo_conta);
        printf("Insira o número da conta do cliente %d:", i+1);
        scanf("%d", &vcliente[i].num_conta);
        printf("Insira o saldo da conta do cliente %d:", i+1);
        scanf("%f", &vcliente[i].saldo);
    }

    printf("\nImprime dados dos clientes");
    printf("\nNro CtaTipo CtaNomeCliente SaldoCta");
    for (int i=0; i<n; i++)
    {
        printf("\n%3d \t%c \t%s   \t%.2f", vcliente[i].num_conta,
                                            vcliente[i].tipo_conta,
                                            vcliente[i].nome,
                                            vcliente[i].saldo);
    }


    return 0;
}