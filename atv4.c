#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int idade;
    
        printf("  VIDROS HUB  \n");
        printf(" Você tem 18 anos:\n");
        scanf("%d", &idade);

        if(idade >= 18){
            printf("Acesso Permitido!\n");
        }else{
            printf("Acesso negado\n");
        }

        return 0;
     }