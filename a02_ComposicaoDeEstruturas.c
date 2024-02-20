#include "library1.h"

int main()
{
    acentuacao();

    struct data
    {
        int mes;
        int dia;
        int ano;
    };

    struct conta
    {
        int num_conta;
        int tipo_conta;
        char nome[80];
        float saldo;
        struct data ult_pag;
    }cliente_novo, cliente_antigo;

    // exemplo de acesso aos dados //
    cliente_novo.ult_pag.dia = 12;

///////////////////////////// MATRIZES DE ESTRUTURAS /////////////////////////////
    struct conta cliente[100];      // cliente é uma matriz do tipo conta com 100 elementos
    
    // Para acessar um dos membros da matriz, deve-se indexar o nome da estrutura.
    // Por exemplo, para exibir o número da conta do 1º cliente armazenado na matriz cliente:
    printf("%d", cliente[0].num_conta);

    return 0;
}