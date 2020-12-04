/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num,i,j;
    int tab;
    
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    
    for(i = 1; i <= num; i++){
        for(j = 1; j <= i; j++){
            tab = i * j;
            printf("%d ", tab);
            
            
        }
        printf("\n");
    }
    return 0;
    
   
}

