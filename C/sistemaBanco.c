/******************************************************************************

prova do Alexander

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

float valor, saldo1, saque ,valor1;
int x, y, fim;
int main()
{
 saldo1=100;
 
 printf("Sistema Banco Cep\n");
 printf("\n");
 printf("1 - Depósito conta corrente \n2 - Saque da conta corrente \n3 - Saldo \n4 - Sair \n");
 printf("\n");
 printf("Escolha a opção desejada: ");
 scanf("%d",&x);
 
 switch(x){
     
    case 1:
    printf("\n");
    printf("Seu saldo atual é: %.2f \n",saldo1);
    printf("\n");
    printf("Qual o valor que deseja depositar?\n");
    scanf("%f",&valor);
    printf("Seu valor foi depositado com sucesso!!!\n");
    printf("\n");
    saldo1=valor+100;
    printf("\n");
    printf("O saldo total da conta é: %.2f",saldo1);
    break;
    
    case 2:
    printf("\n");
    printf("Seu saldo atual é: %.2f \n",saldo1);
    printf("Qual o valor que você deseja sacar?\n");
    scanf("%f",&saque);
    if(saque>100){
        printf("Há quantia desejada não corresponde ao valor em caixa.");
        goto fim;
    }
    valor1=saldo1-saque;
    printf("\n");
    printf("O valor que ainda está na conta é: %.2f",valor1);
    break;
    
    case 3:
    printf("\n");
    printf("Seu saldo atual é: %.2f \n",saldo1);
    break;
    
    case 4:
    goto fim;
    break;
    
    default:
    printf("\n");
    if(x>3||x<1){
        printf("Opção inexistente.");    
        goto fim;
        break;
    }
 }

 fim:
 printf("\noperação finalizada.");
    return 0;
}


