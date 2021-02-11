/*
   Questão: 5.20 Exibindo o quadrado de um caractere. Modifique a  função
   criada no Exercício 5.19 para formar um quadrado  a partir de qualquer
   caractere contido no parâmetro de caractere fillCharacter. Assim, se
   side é 5 e fillCharacter é ‘#’, então essa função deverá imprimir:
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 154). Edição do Kindle.
   Autor: @Pedro Filho, 11/02/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// protótipo
int quadradoDeCarcteres( int tamanho, char caracter );

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // variáveis
   int tamanho;
   char tipo;

   // cabeçalho menu
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

         // chama a função quadrado de asterisco
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

}  // FIM FUNÇÃO MAIN

// função quadradoDeAsterisco
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
} // fim função
