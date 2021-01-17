/*
   Quest�o: 3.28 Valide a entrada do usu�rio. Modifique o programa  da Figura
   3.10 para validar suas entradas. Em qualquer  entrada, se o valor inserido
   for diferente de 1 ou 2, continue o looping at� que o usu�rio informe
   um valor correto.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 76). Edi��o do Kindle.
   Autor: Pedro Filho, 17/01/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // cria vari�vel senha
   int senhaValida = 0; // senha v�lida 1 ou 2
   int contador = 1;

   // cabe�alho
   printf( "\tSENHA CORRETA\n" );

   // enquanto senha diferente de 12534 fa�a
   while( contador <= 10 ) {

      // entrada de dados
      printf( "\nDigite o n�mero 1 ou 2: " );
      scanf( "%d", &senhaValida );

      // se senha igual a 1
      if( senhaValida == 1 ) {
         printf( "Senha v�lida!\n" );
         contador += 10;
      } // fim if

      // se senha igual a 1
      if( senhaValida == 2 ) {
         printf( "Senha v�lida!\n" );
         contador += 10;
      } // fim if

      // contador
      contador++;

} // fim while

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
