#include <stdlib.h>
#include <stdio.h>

int x, y ,a ;
float z ;
char letra;
int main()
{
printf("Contador de 0 a 9 \n");
printf("\n");

    for(x=0;x<=9;x++){
    printf("%d \t",x);
}

printf("\n");
printf("\n Contador de 9 a 0 \n");
printf("\n");

    for(y=9;y>=0;y--){
    printf("%d \t",y);
        
}

printf("\n");
printf("\n Contador de 0.1 a 1 \n");
printf("\n");

    for(z=0;z<=1.1;z+=0.1){
    printf("%0.1f \t",z);   
}

printf("\n");
printf("\n Contador do alfabeto \n");
printf("\n");

    for(letra='a';letra<='z';letra++){
    printf("%c\n",letra);
    }
    
printf("\n");
printf("\n Contador de 0 a 100 \n");
printf("\n");

    for(a=0;a<=100;a+=10){
    printf("%d \t",a);
}
    return 0;
}
