#include <stdio.h>
#include <string.h>
    
    int l;
    
    void a(char *s){
        int b = 5;
        int length = strlen(s); //comprimento de s
        
        printf("%*s%*c",((b - length) >> 1) + length //comprimento da string + espaços de preenchimento
            , s
            , (( b - length) >> 1) + (( b - length) & 1) //espaços desnecessarios a direita do texto
            , ' '
        );
    }
    
    void space(int spa){
        for(l = 1; l <=spa; l++){
          a(" ");
        }
    }
    
    void valor(int val){
        for(l = 1; l <= val; l++){
           a(" * ");
        }
        printf("\n");
    }

    int main(){
        
        int num, spa, value,i;
        
        do{
            printf("Digite um número impar: ");
            scanf("%d", &num);
            
        }while(num % 2 == 0);
        
            
        for(i = 1; i < num; i++){ //parar antes do valor do numero para não repetir 2 vezes
               if(i % 2 == 1){ 
                   
                  spa = num - (i / 2); 
                  space(spa);
                  
                  value = i;
                  valor(value);
                }
        }
        
        for(i = num; i > 0; i--){ 
                if(i % 2 == 1){
                    
                    spa = num - (i / 2);
                    space(spa);
                    
                    value = i;
                    valor(value);
                }
        }
        return 0;
    }







