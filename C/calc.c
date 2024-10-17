#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 


float c, n1, n2, r;
int main()
{
setlocale(LC_ALL, "Portuguese");

    printf("Bem-vindo a Calculadora\n");
    printf("\n");
    
    printf("Digite um número: \n");
    scanf("%f",&n1);
    printf("Digite outro número\n");
    scanf("%f",&n2);
    printf("\n");
    
    printf("Escolha a Operação desejada \n 1 - Soma\n 2 - Subtração\n 3 - Multiplicação\n 4 - Divisão\n"); 
    printf("Digite o número da operação desejada: "); 
    scanf("%f",&c);
    printf("\n");
    
        if(c==1){
            r=n1+n2;    
            printf("O resultado da soma dos valores é:%.2f \n",r);
        }
        
        else if(c==2){
            r=n1-n2;
            printf("O resultado da subtração dos valores é:%.2f \n",r); 
        }
        
        else if(c==3){
            r=n1*n2;
            printf("O resultado da multiplicação dos valores é:%.2f \n",r); 
        }
        
        else if(c==4){
            r=n1/n2;
            printf("O resultado da divisão dos valores é:%.2f \n",r); 
        }
        else if(c>4){
            printf("Código inválido");
        }
        
        else if(c>4 || c<1){
            printf("Código inválido");
        }
    return 0;
}


