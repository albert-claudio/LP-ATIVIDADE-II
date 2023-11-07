#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    
    int numero;

    do
    {
        printf("Digite um número: \n");
        scanf("%d", &numero);

    if(numero < 0){
        printf("Por favor, digite um número inteiro positivo.\n");
    }
    } while (numero < 0);

    printf("Contagem regressiva a partir de %d: \n", numero);
    while (numero >= 0)
    {
        printf("%d\n", numero);
        numero--;
    }
    
    
    return 0;
}