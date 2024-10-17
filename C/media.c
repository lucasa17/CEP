#include <stdlib.h>
#include <stdio.h>

int y, a;
float x, m ,t ;
int main()
{
    printf("Média da sala\n");
    printf("\n");
    
    printf("Digite a quantidade de alunos da sala: ");
    scanf("%d",&a);
    
 for(y=0;y<a;y++){
     
    printf("Digite a nota do aluno:\n");
    scanf("%f",&x);
t=t+x; 

}

m=t/a;
    printf("A média dos alunos é %.2f",m);
    return 0;
}
