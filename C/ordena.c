#include<stdio.h>
#include<stdlib.h>

int a, b, c, d, e, x, y;
int main()
{

    printf("Digite um número \n");
    scanf("%d",&a);
    printf("Digite um número \n");
    scanf("%d",&b);
    printf("Digite um número \n");
    scanf("%d",&c);
    printf("Digite um número \n");
    scanf("%d",&d);
    printf("Digite um número \n");
    scanf("%d",&e);
    
    for(y=0;y<5;y++){
        
    
        if(a>b){
            x=a;
            a=b;
            b=x;
        }
        if(b>c){
            x=b;
            b=c;
            c=x;
        }
        if(c>d){
            x=c;
            c=d;
            d=x;
        }
        if(d>e){
            x=d;
            d=e;
            e=x;
        }    
        
    }
        
    printf("A sequência é: %d %d %d %d %d", a, b, c, d, e);
}



