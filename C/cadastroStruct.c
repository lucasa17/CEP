#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 struct livros
{
  

char titulo[50];
   
char autor[50];
   
char assunto[100];
   
int id_livro;
 

};

 
int
main ()
{
setlocale(LC_ALL, "");
 
struct livros livro1;
  
struct livros livro2;
  
 
 
printf ("Cadastro de livros\n\n\n");
  
 
strcpy (livro1.titulo, "Pai rico pai pobre");
  
strcpy (livro1.autor, "Robert Kiyosaki");
  
strcpy (livro1.assunto, "Best seller");
  
 
livro1.id_livro = 5487;
  
 
strcpy (livro2.titulo, "Quem pensa enriquece");
  
strcpy (livro2.autor, "Napoleon Hill");
  
strcpy (livro2.assunto, "EducaC'C#o Financeira");
  
 
livro2.id_livro = 5700;
  
 
printf ("livro_1\n\n");
  
printf ("Titulo: %s\n", livro1.titulo);
  
printf ("Autor: %s\n", livro1.autor);
  
printf ("Assunto: %s\n", livro1.assunto);
  
printf ("ID: %d\n\n", livro1.id_livro);
  
 
printf ("livro_2\n\n");
  
printf ("Titulo: %s\n", livro2.titulo);
  
printf ("Ator: %s\n", livro2.autor);
  
printf ("Assunto: %s\n", livro2.assunto);
  
printf ("ID: %d\n", livro2.id_livro);
  
 
return 0;

}


