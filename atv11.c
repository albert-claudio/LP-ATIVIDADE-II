#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "portuguese");

    char codigoCorreto[]="12345";
    char codigoInserido[20];

    while (1)
    {
        printf("digite o codigo de acesso: \n");
        scanf("%s", &codigoInserido);

        if(strcmp(codigoInserido, codigoCorreto) == 0){
            printf("Acesso concedido. Bem-Vindo. \n");
            break;
        }else{
            printf("Acesso negado. tente novamente \n");
        }
    }
    


    return 0;
}