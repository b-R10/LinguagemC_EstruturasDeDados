#include "library1.h"

// Caso 1:
typedef struct {
    int num_conta;
    char tipo_conta;
    char nome[80];
    float saldo;
} Conta;
Conta clienteantigo, clientenovo;


// Caso 2:
struct Conta {
    int num_conta;
    char tipo_conta;
    char nome[80];
    float saldo;
};
struct Conta clientenovo, clienteantigo; 

