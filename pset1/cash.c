#include <cs50.h>
#include <math.h>
#include <stdio.h>

float get_cash()
{
    return get_float("Troca devida: ");
}

int main(void)
{
    // Garante que o cash nao seja negativo
     float cash = get_cash();
     while (cash < 0)
     {
        cash = get_cash();
     }

     // Converte para reais
    int cents = round(cash * 100);

    // Contadores
    int counter25 = 0, counter10 = 0, counter05 = 0, counter01 = 0;

    // Conta moedas de 0.25
    while (cents >= 25)
    {
        cents -= 25;
        counter25++;
    }

    // Conta moedas de 0.10
    while (cents >= 10)
    {
        cents -= 10;
        counter10++;
    }

    // Conta moedas de 0.05
    while (cents >= 5)
    {
        cents -= 05;
        counter05++;
    }

    // Conta moedas de 0.01
    while (cents >= 1)
    {
        cents -= 1;
        counter01++;
    }

    // Imprime resultado
    printf("Quantidade moedas 0.25: %d\n", counter25);
    printf("Quantidade moedas 0.10: %d\n", counter10);
    printf("Quantidade moedas 0.05: %d\n", counter05);
    printf("Quantidade moedas 0.01: %d\n", counter01);
    printf("Quantidade de moedas totais: %d\n", counter25 + counter10 + counter05 + counter01);
}
