#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int i;
    int numero;

   printf("Digite um número inteiro: \n");
   scanf("%d", &numero);

   if (numero <= 1){
    printf("Número não é primo\n");
    }else{
        int isPrime = 1;

        for (i = 2; i <= numero / 2; i++)
        {
           if(numero % i == 0){
            isPrime = 0;
            break;
           }
        }

        if (isPrime)
        {
            printf("Número é primo\n");
        }else{
            printf("Número não é primo\n");
        }
        
        
    }
    return 0;
   }
