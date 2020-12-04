/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define linhas 10
    
    //exibe os elementos na ordem digitada
    int exibir(int *vetor){
      for(int i = 0; i < linhas; i++){
          printf("%d \n", vetor[i]);
      }
    }
    
    //inverte valores do vetor
    int inverterValores(int *vetor){
        int i = linhas - 1;
        int aux ;
        
        printf("\n Ordem invertida dos valores do Vetor: \n");
        for(int j = 0; j <= i; j++){
            aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
            i--;
        }
        
         exibir(vetor);
        
    }
    
    //retorna o maior elemento do vetor
    int maior(int *vetor){
        
        int maior;
        
        maior = vetor[0];
        for(int i = 0; i < linhas; i++){
            if(vetor[i] > maior ){
                maior = vetor[i];
            }
        }
        
        return maior;
    }
    
    //ordena os elementos de forma crescente
    int ordernarElementos(int *vetor){
        int aux, vetOrdenar[linhas];
        
        aux = vetor[0];
        
        printf("\n Ordem crescente dos valores do vetor : \n");
        for(int i = 0; i < linhas; i++){
           for(int j = 0; j < linhas; j++){
              if(vetor[i] < vetor[j]){
                    aux = vetor[i];
                    vetor[i] = vetor[j];
                    vetor[j] = aux;
              } 
           }
        }
         exibir(vetor);
               
    }
    int main(){
        int vetor [linhas];
        int retornoMaior;
        
        for(int i = 0; i < linhas; i++){
            printf("Digite um número : ");    
            scanf("%d", &vetor[i]);
           
        }
        
        printf("Valores do vetor na ordem digitada : \n");
        exibir(vetor); //chamada da função exibir
       
        inverterValores(vetor); //chamada da função inverter valores
        
        retornoMaior = maior(vetor); //chamada da função retornar o maior
        printf("O maior valor é : %d \n", retornoMaior);
      
        ordernarElementos(vetor); //chamada da função ordernar elementos
        
       
    return 0;
}





