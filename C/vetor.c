#include <stdlib.h>
#include <stdio.h>

int main(){
int a ;
float n1[4], n2[4], n3[4], n4[4], m[4], s[2] ;



    printf("Média dos alunos\n");
    printf("\n");
    
        for(a=0; a<4; a++)
    {
        printf("Digite as notas do aluno %d", a+1);
        printf("\n");
        
        printf("\nNota 1\n");
        scanf("%f",&n1[a]);
        printf("\n");
        
        printf("Nota 2\n");
        scanf("%f",&n2[a]);
        printf("\n");
        
        printf("Nota 3\n");
        scanf("%f",&n3[a]);
        printf("\n");
        
        printf("Nota 4\n");
        scanf("%f",&n4[a]);
        printf("\n");
        
        m[a]=(n1[a]+n2[a]+n3[a]+n4[a])/4;
        }
            for(a=0; a<4; a++){
   
            if(m[a]>=60){
                s[a]=1;
                     
                printf("\n\n\n");
            }
            
            if(m[a]<60){
                s[a]=0;

                printf("\n\n\n");
        }
        
        if(s[a]==1){
            printf("APROVADO");
            
        }
        if(s[a]==0){
            printf("REPROVADO");
        }
        
        printf("\nAluno - Nota 1 - Nota 2 - Nota 3 - Nota 4 - Média - Situação\n");
        printf(" %d      %.2f     %.2f     %.2f     %.2f    %.2f ", a+1, n1[a], n2[a], n3[a], n4[a], m[a] );
        printf("\n\n\n");
        }
    return 0;
}







