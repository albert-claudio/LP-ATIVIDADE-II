#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    
    int nota;
    
        printf("         TABELA       \n");
        printf("      NOTAS | QUALIDADE\n");
        printf("        9   | EXCELENTE\n");
        printf("      7/8.9 | BOM\n");
        printf("      5/6.9 | RAZOÁVEL\n");
        printf("MENOR QUE 5 | INSUFICIENTE\n");
        scanf("%d", &nota);
    
        if (nota < 5)
        {
            printf("Insuficiente\n");
        }else{
            if (nota < 7)
            {
                printf("Bom\n");
            }else{
                if (nota < 8.9 || nota == 6.9)
                {
                    printf("Razoavel\n");
                }else{
                    if (nota <= 9)
                    {
                        printf("Excelente\n");
                    }else{
                        printf("Qualidade\n");
                    }
                }
            }
        }
        

        return 0;
     }