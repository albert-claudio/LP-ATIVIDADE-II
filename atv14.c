#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int numero, contadorPares = 0, contadorImpares = 0;
    int somaPares = 0, somaImpares = 0;

    while (1) {
        printf("Digite um número inteiro (negativo para sair): ");
        scanf("%d", &numero);

        if (numero < 0) {
            break; 
        }

        if (numero % 2 == 0) { 
            contadorPares++;
            somaPares += numero;
        } else {
            contadorImpares++;
            somaImpares += numero;
        }
    }

    if (contadorPares > 0) {
        float mediaPares = (float)somaPares / contadorPares;
        printf("Quantidade de números pares: %d\n", contadorPares);
        printf("Média dos números pares: %.2f\n", mediaPares);
    } else {
        printf("Nenhum número par foi inserido.\n");
    }

    if (contadorImpares > 0) {
        float mediaImpares = (float)somaImpares / contadorImpares;
        printf("Quantidade de números ímpares: %d\n", contadorImpares);
        printf("Média dos números ímpares: %.2f\n", mediaImpares);
    } else {
        printf("Nenhum número ímpar foi inserido.\n");
    }

    return 0;
}
