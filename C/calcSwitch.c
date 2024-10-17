#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float r, n1, n2;
char c;
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
    
    printf("Escolha a Operação desejada \n + | Soma\n - | Subtração\n * | Multiplicação\n / | Divisão\n"); 
    printf("Digite o número da operação desejada: "); 
    scanf(" %c",&c);
    printf("\n");

    switch(c){
    
    case '+':
        r=n1+n2;
        printf("O resultado da soma dos valores é:%.2f \n",r);
        break;
        
    case '-':
        r=n1-n2;
        printf("O resultado da subtração dos valores é:%.2f \n",r); 
        break;
    
    case '*':
        r=n1*n2;
        printf("O resultado da multiplicação dos valores é:%.2f \n",r);
        break;
        
    case '/':
        r=n1/n2;
        printf("O resultado da divisão dos valores é:%.2f \n",r); 
        break;
        
    default:
        if(c |='+'||c |='-'||c|='*'||c|='/');
        printf("Operação inválida");    
        
    }
    return 0;
    
}

