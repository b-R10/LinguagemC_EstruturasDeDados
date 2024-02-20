#include <stdio.h>

struct Conta
{
    int num_conta;
    char tipo_conta;
    char nome[80];
    float saldo;
};

float ajuste(float taxa, float saldo);

int main()
{
    struct Conta cliente;
    float taxa;
    printf("\nInsere dados na estrutura cliente");
    
    printf("\nInsira o numero da conta: ");
    scanf("%d%*c", &cliente.num_conta);
    
    printf("\nInsira o tipo da conta: ");
    scanf("%c%*c", &cliente.tipo_conta);
    
    printf("\nInsira o nome do cliente: ");
    scanf("%79[^\n]%*c", cliente.nome);
        // %79[^\n]: Lê até 79 caracteres que não sejam um caractere de nova linha (\n).
        // O limite de 79 caracteres é definido para evitar buffer overflow.
        // O caractere de nova linha é usado como delimitador.
        // %*c: Lê e descarta um caractere. Nesse caso, é usado para descartar
        //  o caractere de nova linha que foi lido como delimitador na etapa 
        // anterior

    printf("\nInsira o saldo da conta: ");
    scanf("%f%*c", &cliente.saldo);
    
    /* Exibe dados cliente */
    printf("\nNumero da conta: %d", cliente.num_conta);
    printf("\nTipo da conta: %c", cliente.tipo_conta);
    printf("\nNome do cliente: %s", cliente.nome);
    printf("\nSaldo da conta: %.2f", cliente.saldo);

    printf("\n\nEntre com a taxa de reajuste do saldo: ");
    scanf("%f", &taxa);

    cliente.saldo = ajuste(taxa, cliente.saldo);

    printf("\nSaldo da conta atualizado: %.2f\n", cliente.saldo);
    return 0;
}

float ajuste(float taxa, float saldo)
{
    saldo += (saldo * taxa)/100;            /* valor do saldo reajustado */
    return (saldo);
}
