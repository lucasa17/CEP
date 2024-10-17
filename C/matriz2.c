#include <stdio.h>

int main()
{
    
    #define M 3
    #define N 3
    
    int matriz[M][N];
    int i, j;
    int op;
    
    printf("Insira os valores da Matriz.\n\n");
    
    for(i=0;i<M;i++){
        
        for(j=0;j<N;j++){
            
            printf("Matriz[%i][%i] = ", i, j);
                scanf("%i", &matriz[i][j]);
            
        }
        printf("\n");    
    }
    
    exibicao:
    
    for(i = 0; i < M; i++){
    
        for(j = 0; j < N; j++){
    
            printf("%4i", matriz[i][j]);
        }
    
        printf("\n");
        
    }
    
    printf("\nEscolha uma linha da matriz - ");
        scanf("%i", &op);
    printf("\n");
        
    switch(op){
        
        case 1:
             
            for(j=0;j<N;j++){
                
                printf("%4i", matriz[0][j]);
                
            }
        
        break;
        
        case 2:
        
            for(j=0;j<N;j++){
                
                printf("%4i", matriz[1][j]);
                
            }
        
        break;
        
        case 3:
        
            for(j=0;j<N;j++){
                
                printf("%4i", matriz[2][j]);
                
            }
        
        break;
        
        default:
        
            printf("Linha inexistente.\n\n");
            goto exibicao;
            
        break;
        
    }
}


