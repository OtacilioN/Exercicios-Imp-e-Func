#include <stdarg.h>
#include <stdio.h>

float mediaPositiva(int valor_inicial, ...);

int main(void)
{
    printf("%f\n", mediaPositiva(2, 2, 2, -1));
    printf("%f\n", mediaPositiva(2, 6, -1));
    return 0;
}

// Escrever uma funcao que calcula uma media de n valores positivos sem passar o n
float mediaPositiva(int valor_inicial, ...)
{
    va_list argumentos;
    va_start(argumentos, valor_inicial);
    int valor_atual, contador = 1;
    int soma = valor_inicial;
    while ((valor_atual = va_arg(argumentos, int)) >= 0)
    {
        soma += valor_atual;
        contador++;
    }
    va_end(argumentos);
    return (float)soma / (float)contador;
}