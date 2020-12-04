#include <stdio.h>
#include <locale.h>

int main(){
    // setlocale(LC_ALL, 'pt-br');
    float n1,n2,soma,sub,mul,media;

    printf("Entre com o primeiro número ");
    scanf("%f", &n1);

    printf("\n Entre com o segundo número ");
    scanf("%f", &n2);

    soma = n1 + n2;
    sub = n1 - n2;
    mul = n1 * n2;
    media = ( (n1 / n2) / 2 );

    printf("Soma : %0.2f \n ", soma); //limitando o número de casas (%0.2f)
    printf("Diferença : %0.2f \n ", sub);
    printf("Produto : %0.2f \n ", mul);
    printf("Media : %0.2f \n ", media);
}