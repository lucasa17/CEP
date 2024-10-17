#include <stdlib.h>
#include <stdio.h>

int a ,b ,c ,j ,k ,l ,x ,fim ,fim2 ,fim3  ;
float d ,e ,f ,g ,h ,i ,rr ,ra ,rb ,ra1 ,ra2 ,ra3 ,rb1 ,rb2 ,rb3  ;

int main()

{
    d=1.50;
    e=3.50;
    f=2.50;
    g=3;
    h=2;
    i=5;
    
    printf("Seja bem-vindo a Lanchonete do Cep \n");
    
    for(x=0;x<1000;x++){
     
    printf("\n");
    
    fim2:
    
    printf("Escolha o cárdapio desejado:\n");
    printf("\n");
    printf("1 - Comidas \n2 - Bebidas\n3 - Encerrar pedido \n4 - Cancelar pedido \n");
    printf("\n");
    printf("Digite o número do cárdapio: ");
    scanf("%d",&c);
    printf("\n");

    switch(c){
        
    case 1:
        printf("101 - Hamburger - 1,50 \n102 - Salgado - 3,50 \n103 - Fritas - 2,50\n");
        printf("\n");
        printf("Digite o número da comida desejada: ");
        scanf("%d",&a);
        break;
        
    case 2:
        printf("201 - Refrigerante - 3,00 \n202 - Água - 2,00 \n203 - Suco - 5,00\n");
        printf("\n");
        printf("Digite o número da comida desejada: ");
        scanf("%d",&b);
        break;
        
    case 3:
        goto fim; 
        break;
   
    case 4:
        printf("Seu pedido foi cancelado");
        goto fim3;
        break;
        
    default:
        if(c<0||c>3);
        printf("\n");
        printf("Código inválido.\n");
        printf("\n");
        goto fim2;
    }
    
    switch(a){
        
    case 101:
        printf("Quantos deseja?\n");
        scanf("%d",&k);
        ra1=d*k;
        break;
        
       
    case 102:
        printf("Quantos deseja?\n");
        scanf("%d",&k);
        ra2=e*k;
        break;
        
       
    case 103:
        printf("Quantos deseja?\n");
        scanf("%d",&k);
        ra3=f*k;
        break;
    }
    
    switch(b){
        
    case 201:
        printf("Quantos deseja?\n");
        scanf("%d",&l);
        rb1=g*l;
        break;
        
    case 202:
        printf("Quantos deseja?\n");
        scanf("%d",&l);
        rb2=h*l;
        break;
        
    case 203:
        printf("Quantos deseja?\n");
        scanf("%d",&l);
        rb3=i*l;
        break;
        
    
 
    }
}   
    fim:
    
ra=ra1+ra2+ra3;
rb=rb1+rb2+rb3;

    printf("\n");
    
        rr=ra+rb;
        
    printf("O total a ser pago é: R$%.2f \n",rr);
    printf("\n");
    printf("Obrigado pela escolha.\n");
    
fim3:

    return 0;
}







