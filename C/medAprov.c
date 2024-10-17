#include <stdio.h>
#include <stdlib.h>

float n1 , n2, n3, n4, m ;
float main()
{
    printf("Digite a primeira nota do aluno: \n");
    scanf("%f",&n1);
    printf("Digite a segunda nota do aluno: \n");
    scanf("%f",&n2);
    printf("Digite a terceira nota do aluno: \n");
    scanf("%f",&n3);
    printf("Digite a última nota do aluno: \n");
    scanf("%f",&n4);
    m = n1*0.1 + n2*0.2 + n3*0.3 + n4*0.4;
printf("A média ponderada das notas foi: %.2f\n", m);
        
        if(m > 7.0){
                printf("O aluno foi aprovado\n");
                }
        else{
                printf("O aluno foi reprovado\n");
                }
    return 0;
}
