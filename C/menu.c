#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main ()
{
  char s1[20], s2[20];
  int cont, escolha;

setlocale(LC_ALL, "portuguese");
  
comeco:

  puts ("Escolha uma opção:\n");
  puts ("\n1 - Ler uma string\n");
  puts ("2 - Imprimir o tamanho da string\n");
  puts ("3 - Compararação de duas strings\n");
  puts ("4 - Concatenação de duas strings\n");
  puts ("5 - Impressão de uma string reversa\n");
  puts ("6 - Contagem de algum caractere requerido\n");
  puts ("7 - Sair");

  scanf ("%d", &escolha);

  switch (escolha)
    {

    case 1:
      puts ("Digite uma string");
      fgets (s1, 20, stdin);

      getchar ();
      getchar ();
      goto comeco;

    case 2:
      puts ("Digite uma string");
      fgets (s1, 20, stdin);
      
      getchar ();
      getchar ();
      
      cont = strlen(s1);
      printf("O tamanho da string é: %d\n\n", cont);
      
      getchar ();
      getchar ();
      goto comeco;
      
    case 3:
      puts("Digite uma string: ");
      fgets(s1,20,stdin);
      
      getchar ();
      getchar ();
      
      puts("Digite outra string: ");
      fgets(s2,20,stdin);
      
    }
  return 0;
}



