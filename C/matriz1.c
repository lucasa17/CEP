#include <stdlib.h>
#include <stdio.h>

#define M 3
#define N 3
    
int main(){
int matriz[M][N];

    //capturando dados
    for(int i=0; i<M; i++){ //para as linhas
    for(int j=0; j<N; j++){ //para as colunas

        printf("matriz [%d][%d] = ", i, j);
        scanf("%d", &matriz[i][j]);
    }
        printf("\n");
    }
    
    //imprimindo o conteudo da matriz
    for(int i=0; i<M; i++){ //para as linhas
    for(int j=0; j<N; j++){ //para as colunas
        printf("%4d ", matriz [i][j]);
    }
        printf("\n");
    }
    return 0;
}

