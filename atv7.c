#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int escolha;
  printf("Bem-vindo ao jogo!\n");
    printf("Escolha uma opção:\n");
    printf("1 - Novo jogo\n");
    printf("2 - Carregar jogo\n");
    printf("3 - Configurações\n");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("Iniciando um novo jogo...\n");
            // Coloque aqui a funcionalidade para iniciar um novo jogo.
            break;
        case 2:
            printf("Carregando um jogo existente...\n");
            // Coloque aqui a funcionalidade para carregar um jogo existente.
            break;
        case 3:
            printf("Configurações:\n");
            printf("4 - Escolher linguagem\n");
            printf("5 - Ajustar brilho\n");
            printf("Digite o número da opção de configuração: ");
            int configEscolha;
            scanf("%d", &configEscolha);

            switch (configEscolha) {
                case 4:
                    printf("Escolhendo linguagem...\n");
                    // Coloque aqui a funcionalidade para escolher a linguagem.
                    break;
                case 5:
                    printf("Ajustando o brilho...\n");
                    // Coloque aqui a funcionalidade para ajustar o brilho.
                    break;
                default:
                    printf("Opção de configuração inválida. Por favor, escolha uma opção válida.\n");
                    break;
            }
            break;
        default:
            printf("Opção inválida. Por favor, escolha uma opção válida.\n");
            break;
    }

    return 0;
}