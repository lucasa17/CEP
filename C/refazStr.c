#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{ 
    char s1[20], s2[20];
    int result;
    
    puts("Digite uma palavra: ");
    fgets(s1,20,stdin);
    
    puts("Digite outra palavra");
    fgets(s2,20,stdin);
    
    result = strcmp(s1, s2);
    
    if(result == 0){
        puts("As strings são iguais");
    }
    
    else{
        puts("As strings são diferentes");
    }

    return 0;

}

