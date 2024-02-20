#include <stdio.h>

struct Forma
{
    int tipo;
    int cor;
    float raio;
    float area;
    float perimetro;
};

// procedimentos
void exibe_estru(struct Forma forma);
void muda_estru(struct Forma *forma);

int main(void)
{
    struct Forma circulo;
        // circulo: variável do tipo Forma 
    circulo.tipo = 0;
    circulo.cor = 1;
    circulo.raio = 5.0;
    circulo.area = (22.0 / 7.0) * circulo.raio * circulo.raio;
        // 22.0/7.0 é o valor da constante pi
    circulo.perimetro = 2.0 * (22.0 / 7.0) * circulo.raio;
    exibe_estru(circulo);
    muda_estru(&circulo);
    exibe_estru(circulo);
    return 0;
}

void exibe_estru(struct Forma forma)
{
    printf("\n");
    printf("\nTipo %d", forma.tipo);
    printf("\nCor %d", forma.cor);
    printf("\nRaio %.2f", forma.raio);
    printf("\nArea %.2f", forma.area);
    printf("\n\nPerimetro %.2f",forma.perimetro);
}

void muda_estru(struct Forma *forma)
{
    forma->tipo = 2;
    forma->cor = 2;
    forma->raio = 10.0;
}