#include <stdio.h>
#include <stdlib.h>

int x, y, z;
float vc=0, vb, vt, pc, pb, qb,qc;

int main()  {
 do{   
    printf("Lachonete - CEP\n");
    printf("Escolha seus produtos:\n");
    printf("\n");
    
    printf("COMIDAS:");
    printf("\n 101 - Hamburguer - 1,50\n 102 - Salgado - 3,50 \n 103 - Fritas - 2,50\n ");
    
    printf("\n");
    
    printf("BEBIDAS:");
    printf("\n 201 - Refrigerante - 3,00\n 202 - Água - 2,00\n 203 - Suco - 5,00\n");
    
    printf ("Escolha sua opcao de comida: ");
        scanf("%d",&x);
    
    switch (x) {
        case 101 :
            pc=1.50;
            printf ("Escolha a quantidade que deseja comprar: ");
                scanf("%f",&qc);
        break;
        
        case 102 :
            pc=3.50;
            printf ("Escolha a quantidade que deseja comprar: ");
                scanf("%f",&qc);
        break;
        
        case 103 :
            pc=2.50;
            printf ("Escolha a quantidade que deseja comprar: ");
                scanf("%f",&qc);
        break;
        
        default : 
            printf("Opcao invalida!\n");
    }
    
    
    printf ("Escolha sua opcao de bebida: ");
        scanf("%d",&y);
    
    switch (y) {   
        case 201 :
            pb=3.00;
            printf ("Escolha a quantidade que deseja comprar: ");
                scanf("%f",&qb);
        break;
        
        case 202 :
            pb=2.00;
            printf ("Escolha a quantidade que deseja comprar: ");
                scanf("%f",&qb);
        break;
        
        case 203 :
            pb=5.00;
            printf ("Escolha a quantidade que deseja comprar: ");
                scanf("%f",&qb);
        break;
        
        default : 
            printf("Opcao invalida! \n");
    }
    
    /*Valor total*/
    vc = vc+pc*qc;
    vb = vb+pb*qb;
    vt = vc+vb;
    
    printf("Deseja finalizar a compra ou continuar\n");
    printf("1-CONTINUAR\n");
    printf("2-FINALIZAR COMPRA:\n");
    scanf("%d",&z);
 
    
 }while(z==1);
     printf ("Valor total: %.2f \n", vt);
    
    return 0;
} 
