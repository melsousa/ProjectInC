#include <stdio.h>
#include <string.h>
    
    int l;
    
    void f(char *s){
        printf("%*s%*s",3+strlen(s)/2,s,3-strlen(s)/2,"");
    }
    void space(int spa){
        for(l = 1; l <=spa; l++){
          f(" ");
        }
    }
    
    void valor(int val){
        for(l = 1; l <= val; l++){
            f("*");
        }
        f("\n");
    }
    

    int main(int argc, char **argv){
        
        int num, spa, val,i;
        
        printf("Digite um número impar: ");
        scanf("%d", &num);
        
        for(i = 1; i <= num; i++){
           if(num % 2 == 1){
               
              spa = num - (i / 2);
              space(spa);
              
              val = i;
              valor(val);
            }
        }
        for(i = num; i >= 0; i--){
                if(num % 2 == 1){
                    
                    spa = num - (i / 2);
                    space(spa);
                    val = i;
                    valor(val);
                }
        }
        
        
        return 0;
    }
