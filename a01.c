#include "library1.h"

struct Empregado
{
    char nome[40];
    int a[2][2];        // matriz 2x2 de inteiros
    float salario;
} fixo, temporario;

int main()
{
    acentuacao();
    
    printf("Entre com um nome: ");
    fgets(fixo.nome, 39, stdin);
        // fgets(ondeArmazenar, tamanho, entrada);
        // scanf("%39[^\n]%*c", fixo.nome);

    printf("Insira os valores na matriz");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("\nElemento[%d][%d]", i, j);
            scanf("%d%*c", &fixo.a[i][j]);
        }
    }

    printf("Qual o salário?");
    scanf("%f", &fixo.salario);

    temporario = fixo;
        // passa todos os valores inseridos na struct da variável fixo para temporário.

    printf("\nO salário de %s é %.2f", temporario.nome, temporario.salario);

    return 0;
}