#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int compra;

       printf("   CONVENIENÊCIA DO CLAUDINHO   \n");
       printf("1 | Camiseta da Mike | R$40.00\n");
       printf("2 | Tenis da Abibas| R$51.00\n ");
       printf("3 | Calça da Cleiton Kleins| R$89.00\n");
       scanf("%d", &compra);

       switch(compra){
           case 1:
               printf("Você comprou a camiseta da Mike. R$40.00\n");
               break;
           case 2:
               printf("Você comprou a tenis da Abibas. R$51.00\n");
               break;
           case 3:
               printf("Você comprou a calça da Cleiton Kleins. R$89.00\n");
               break;
           default:
               printf("Opção Inválida\n");
               break;
     }

     return 0;
      }