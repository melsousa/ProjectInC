#include <stdio.h>
#include <locale.h>

int main(){
    int a,b,c,delta;

    printf("Digite o seu a :");
    scanf("%i", &a);
    
    printf("\n Digite o seu b :");
    scanf("%i", &b);
    
    printf("\n Digite o seu c :");
    scanf("%i", &c);

    delta = (b*b) - (4 * a * c);

    printf("O seu delta é %i", delta);

    
}