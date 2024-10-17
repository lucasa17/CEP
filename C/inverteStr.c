#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[20];
    int cont = 0;
    
    printf("Digite uma palavra: \n");
    scanf("%[^\n]", s1);
    getchar();
    
    cont = strlen(s1);
    
    printf("A palavra escrita na ordem inversa: \n");
    
    while(cont > 0){
        printf("%c", s1[cont-1]);
        cont--;
    }

    return 0;
}

