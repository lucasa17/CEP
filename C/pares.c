#include <stdio.h>
#include <stdlib.h>

int x, y, resto;
int main()
{
    x=0;
    y=0;
    printf("Número pares de 0 a 249\n");
    for(x=0 ;x<249 ;x++){
    

    resto=x%2;
    
    //para fazer números ímpares
    if (resto>0 ){
        printf(" %d \n",x);
    }
}
    //para fazer números pares
     if (resto==0){
        printf (" %d \n",x);
       
    }
    return 0;
}


