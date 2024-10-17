#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int num ,num1 ,x ,fim ,fim2 ,fim3 ,e ,w ;
float a, b=0, c, d, s=0;
char n[100] ;
int main()
{
    
    do{
        printf("Coeficiente dos alunos\n\n");
fim2:
    
        printf("Digite o nome do aluno\n");
        fflush(stdin);
        fgets(n,100,stdin);
        //getchar();
        
        printf("Digite o número do aluno\n");
        scanf("%d",&num);
        if(num<1||num>51){
            printf("O número é inválido");
            return 0;
        }
   
        printf("Quantas matérias o aluno cursa?\n");
        scanf("%d",&num1);
    
        for(x=1;x<=num1;x++){
        printf("Quais as notas das matérias cursadas pelo aluno\n");
        scanf("%f",&a);
        s=s+a;
    }
    b=s/num1;
    printf("\nAluno: %s",n);
    printf("\nNúmero: %d\n",num);
    printf("\nMédia: %f",b);
    
    
    num=0;
    b=0;
    s=0;
    
fim3:
    printf("\n\nDeseja registrar outro aluno?\n");
    printf("1 - Sim       2 - Não\n");
    scanf("%d",&e);
    
    switch(e){
        
        case 1:
        printf("\n\n\n\n\n");
        goto fim2;
        break;
        
        case 2:
        w=10;
        break;
        
        default:
        printf("Código inválido\n\n");
        goto fim3;
        break;
    }
}
    while(w!=10); {
        printf("|------Fim do programa-----|");
        
    return 0;
    }
}







