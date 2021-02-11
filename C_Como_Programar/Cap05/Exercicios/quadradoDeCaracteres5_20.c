/*
   Quest�o: 5.20 Exibindo o quadrado de um caractere. Modifique a  fun��o
   criada no Exerc�cio 5.19 para formar um quadrado  a partir de qualquer
   caractere contido no par�metro de caractere fillCharacter. Assim, se
   side � 5 e fillCharacter � �#�, ent�o essa fun��o dever� imprimir:
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 154). Edi��o do Kindle.
   Autor: @Pedro Filho, 11/02/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// prot�tipo
int quadradoDeCarcteres( int tamanho, char caracter );

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vari�veis
   int tamanho;
   char tipo;

   // cabe�alho menu
   printf( "\tCARACTERES\n" );
   printf( "\t*********\n" );
   printf( "\t*   @   *\n" );
   printf( "\t*   #   *\n" );
   printf( "\t*   $   *\n" );
   printf( "\t*   %%   *\n" );
   printf( "\t*   &   *\n" );
   printf( "\t*   *   *\n" );
   printf( "\
          t*********\n" );

   // entrada de dados     C

   printf( "Informe o caractere de preenchimento: " );
   scanf( "%c", &tipo );

   printf( "Digite o tamanho do quadrado: " );
   scanf( "%d", &tamanho );

   // imprima
   printf( "\n  QUDRADO\n" );

   // loop para desenhar o quadrado ( linha )
   for( int i = 1; i <= tamanho; i++ ) {
      // loop coluna
      for( int j = 1; j <= tamanho; j++ ) {

         // chama a fun��o quadrado de asterisco
         quadradoDeCarcteres( tamanho, tipo );

      } // fim for

      // pular linha
      printf( "\n" );
   }  // fim for

   // pular linha
   printf( "\n" );

   // pausar

   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

// fun��o quadradoDeAsterisco
int quadradoDeCarcteres( int tamanho, char caracter )
{
   switch( caracter )
   {
      case '@':
         printf( "@ " );
         break;

      case '#':
         printf( "# " );
         break;

      case '$':
         printf( "$ " );
         break;

      case '%':
         printf( "%%  " );
         break;

      case '&':
         printf( "& " );
         break;

      case '*':
         printf( "* " );
         break;

   } // fim switch
} // fim fun��o
