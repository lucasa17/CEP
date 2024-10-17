#include <stdlib.h>
#include <stdio.h>

int a;
float num[5], b;
int main()
{
    printf("JOGO DOS VALORES\n\n");
    
     for(a=0; a<5; a++)
    {
        printf("\nDigite um número: \n");
            scanf("%f",&num[a]);
    }
    
        printf("\nColoque um valor: \n");
            scanf("%f",&b);
            
    for(a=0; a<5; a++)
    {
        
        printf("\n");
        if(b==num[a]){
            printf("Posição %d",a+1);
            printf("\n");
            printf("Verdadeiro, o número existe.\n");
        }
        
        else{
            printf("Posição %d",a+1);
            printf("\n");
            printf("Número não encontrado.\n");
        }
    }
    return 0;
}


