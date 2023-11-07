#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int diaSemana;
    float valorCompra, desconto, valorTotal;

    printf("Informe o valor da compra: R$");
    scanf("%f", &valorCompra);

    printf("Informe o dia da semana (1 para segunda-feira, 2 para terça-feira, ... , 7 para domingo): ");
    scanf("%d", &diaSemana);

    if (valorCompra > 100.0) {
        if (diaSemana >= 1 && diaSemana <= 5) {
            // Compra em um dia de semana com desconto de 10%
            desconto = valorCompra * 0.10;
        } else if (diaSemana >= 6 && diaSemana <= 7) {
            // Compra em um fim de semana com desconto de 15%
            desconto = valorCompra * 0.15;
        } else {
            printf("Dia da semana inválido.\n");
            return 1;
        }

        valorTotal = valorCompra - desconto;

        printf("O valor da compra com desconto é: R$%.2f\n", valorTotal);
    } else {
        printf("Sem desconto. O valor da compra é: R$%.2f\n", valorCompra);
    }

    return 0;
}
