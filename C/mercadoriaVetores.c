#include <stdlib.h>
#include <stdio.h>

int a, b=0, c=0, d=0;
float x[5], y[5], l[5];
int main()
{
    printf("PROVA VETORES\n");
    printf("\n");
    
    for(a=0 ;a<5 ;a++){
        printf("Qual o preço de compra da mercadoria %d\n", a+1);
        scanf("%f",&x[a]);
        
        printf("Qual o preço de venda da mercadoria %d\n", a+1);   
        scanf("%f",&y[a]);
        
        l[a]=((y[a]/x[a])-1)*100;
        
        printf("\nA mercadoria %d", a+1);
        if(y[a]<=x[a]){
            printf(" não pode ser vendida");
            printf("\n");
        }
        
        if(y[a]>x[a]){
            printf(" foi vendida com sucesso.");
            printf("\n");
        }
        printf("com lucro de %2.f%%\n\n", l[a]);
    }
        for(a=0; a<5; a++){
            
        
        if(l[a]<=10){
            b=b+1;
        }
        
        if(10<=l[a] && l[a]<=20){
            c=c+1;
        }
        
        if(l[a]>=20){
            d=d+1;
        }
}
    printf("\nMercadorias com lucro menor que 10%%");
    printf("\n%d\n", b);
    printf("Mercadorias com lucros entre 10%% e 20%%");
    printf("\n%d\n", c);
    printf("Mercadorias com lucro maior que 20%%");
    printf("\n%d\n", d);
    return 0;
}









