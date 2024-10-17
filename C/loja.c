#include <stdlib.h>
#include <stdio.h>

float a; 
int x, y;
int main (void)
{
     do{
    printf("Bem vindo a minha Loja!\n\n");
    
        printf("Confira nosso catálogo:\n\n");
        
        printf("1 - Chinelo - R$10,00 \n2 - Tênis - R$35,00 \n3 - Camiseta - R$20,00 \n4 - Boné - R$15,00 \n5 - Bermuda - R$25,00 \n6 - Vestido - R$18,00 \n7 - Saia - R$12,00 \n8 - Blusa - R$40,00 \n");
        
        printf("Escolha o número do produto desejado: ");
        scanf("%d",&x);
        printf("Quantos deseja?");
        scanf("%d",&y);
        
        switch(x){
            
            case 1 :
                
        }
        
         
         
     }
    printf("\nO número do seu pedido é: %d\n", rand() %100);
    printf("\nData do seu pedido 03/06/2022\n");

    return 0;
}


