#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int a, b, auxiliar, i, n;

main() {

    setlocale(LC_ALL, "Portuguese");


    a = 0;
    b = 1;

    printf("Digite até qual posição deseja: ");
    scanf("%d", &n);
    printf("\nSérie de Fibonacci:\n\n");
    printf("%d\n", b);

    for(i = 1; i < n; i++) {

        auxiliar = a + b;
        a = b;
        b = auxiliar;
        
        printf("%d \n", auxiliar);
    }

return 0;
}
