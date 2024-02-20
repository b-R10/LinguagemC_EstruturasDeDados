#include <stdio.h>
#include <conio.h>
#include <unistd.h>

struct registroHoras
{
    int horas;
    int minutos;
    int segundos;
};

void espera()
{
    sleep(1);
}

void atualiza (struct registroHoras *t)
{
    t->segundos++;
    if (t->segundos == 60)
     {
        t->segundos = 0;
        t->minutos++;
    }
    if (t->minutos == 60)
    {
        t->minutos = 0;
        t->horas++;
    }
    if (t->horas == 24)
        t->horas = 0;
    espera();
}

void exibe(struct registroHoras *t)
{
    printf ("%d:", t->horas);
    printf ("%d:", t->minutos);
    printf ("%d\n", t->segundos);
}

int main(void)
{
    struct registroHoras tempo;     // declara um objeto do tipo "registroHoras" chamado "tempo".
    tempo.horas = 0;
    tempo.minutos = 0;
    tempo.segundos = 0;
    for ( ; !kbhit(); )
    {                               // kbhit abreviação de keyboard hit, é uma função do C que fica
        atualiza (&tempo);          // aguardando uma tecla ser pressionada para encerrar a execução
        exibe (&tempo);
    }
    return (0);
}
