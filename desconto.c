#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){

    float produto,total;

    printf("Digite o valor do produto: ");
    scanf("%f", &produto);

    //  desconto = (produto * (10/100));
     total = produto - (produto * 0.1);

     printf("O valor do produto é %0.2f com o desconto fica: %0.2f", produto, total);

     return 0;
}
