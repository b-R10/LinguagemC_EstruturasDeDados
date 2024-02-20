#include <stdio.h>

// cria uma estrutura
struct registro {
    char *nome;         // ponteiro
    int num_conta;
    char tipo_conta;
    float saldo;
};

// protótipos
void ajuste(struct registro *pt);
void imprime(struct registro *pt);

int main(void) {
    struct registro cliente = { "Silva", 3333, 'C', 33.33};
        // cria uma variável cliente do tipo registro e atribui os valores acima ao mesmo
    imprime(&cliente);
        // chama a função imprime com o endereço de cliente
    ajuste(&cliente);
        // chama a função ajuste com o endereço de cliente
    imprime(&cliente);
        // chama a função imprime com o endereço de cliente
    return 0;
}

// a função recebe uma estrutura por referência (ponteiro para ela), ou seja, pode alterar seus campos sem retorná-la
void imprime(struct registro *pt){
    printf("\n\nNome: %s\n", pt->nome);
    printf("Conta: %d\n", pt->num_conta);
    printf("Tipo conta: %c\n", pt->tipo_conta);
    printf("Saldo: %.2f\n\n", pt->saldo);
}

// a função recebe uma estrutura por referência (ponteiro para ela), ou seja, pode alterar seus campos sem retorná-la
void ajuste(struct registro *pt){
    pt->nome = "Jonas";
    pt->num_conta = 999;
    pt->tipo_conta = 'R';
    pt->saldo = 99.99;
}
