#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int temperatura;

    printf("Digite a temperatura externa: \n");
    scanf("%d", &temperatura);

    if(temperatura > 25 && temperatura < 15){
        printf("o Clima está ensolarado!\n");
    }else if(temperatura > 25 || temperatura < 15){
        printf("o Clima está nublado\n");
    } else {
        printf("o Clima está chuvoso\n");
    }
    

    return 0;
}