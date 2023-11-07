#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

     int quantidadeNotas;
    float soma = 0.0;

    printf("Digite a quantidade de notas: ");
    scanf("%d", &quantidadeNotas);

    if (quantidadeNotas <= 0) {
        printf("Quantidade inválida. O programa será encerrado.\n");
        return 1;
    }

    for (int i = 1; i <= quantidadeNotas; i++) {
        float nota;
        printf("Digite a nota %d: ", i);
        scanf("%f", &nota);

        // Verifica se a nota é válida (entre 0 e 10)
        if (nota < 0 || nota > 10) {
            printf("Nota inválida. Por favor, digite uma nota entre 0 e 10.\n");
            i--; // Decrementa i para repetir a entrada da nota inválida.
        } else {
            soma += nota;
        }
    }

    double media = soma / quantidadeNotas;
    printf("A média das notas é: %.2f\n", media);

    return 0;
}
