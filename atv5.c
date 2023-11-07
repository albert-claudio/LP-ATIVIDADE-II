#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    
    int opcao;

        printf("1 | Escolha o idioma: \n");
        printf("2 | Chosen your languange: \n");
        printf("3 | Choisissez votre langue: \n");
        scanf("%d", &opcao);

       switch (opcao)
       {
       case 1:
        printf("Bem vindos!");
        break;

         case 2:
        printf("Welcome baby!");
        break;      

        case 3:
        printf("Bienvenue!");
        break;
       default:
        break;
       }

        return 0;
     }