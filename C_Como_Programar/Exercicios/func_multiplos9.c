/* Fun��o: M�ltiplos. Escreva uma fun��o multiple que determine para um par
   de inteiros, se o segundo inteiro � um m�ltiplo do primeiro. A fun��o deve apanhar
   dois argumentos inteiros e retornar 1 (verdadeiro), se o segundo for um m�ltiplo
   do primeiro, e 0 (falso), caso contr�rio. Use essa fun��o em um programa
   que inclua uma s�rie de pares de inteiros.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (P�gina 154).  . Edi��o do Kindle.
   Pedro Filho, 09/11/2020*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// prot�tipo
int multiplos( int x, int y );

// fun��o principal
int main()
{
   // seleciona o idioma Portugu�s
   setlocale(LC_ALL, "Portuguese" );

   // loop para verificar  se o segundo n�mero � multiplo do primeiro
   for( int i = 2; i <= 10; i++ ) // loop do primeiro n�mero
   {  // loop do segundo n�mero
      for( int j = 2; j <= 15; j++ )
      {
         // verificar se o segundo n�mero � multiplo do primeiro
         // chamar a fun��o multiplos e verificar se a fun��o retorna o valor 1 ou 0
         // 1 significa multiplo
         if( multiplos( i, j ) == 1 ) // se igual a 1
            // imprima
            printf( "\t%d � multiplo de %d\n", j, i );

         // aqui mostra os que n�o s�o multiplos ( optei n�o deixar ativo )
         // mas funciona.
         /*
         else // se valor diferente de 1
            // imprima
            printf( "\t%d N�O � multiplo de %d\n", j, i );
         */
      } // fim for interno
   } //  fim for externo

    printf( "\n" ); // pular linha

   system( "pause" ); // pausar o sistema

   return 0; // fim do programa

} // fim main

// fun��o multiplos
int multiplos( int x, int y )
{
   // vari�vel multi para calcular a diferen�a de x e y
   int multi = y % x;

   // verificar se multi � igual a zero se sim ent�o y � multiplo de x
   if( multi == 0 ) // se verdade
      return 1; // retornar 1
   else // se falso
      return 0; // retornar zero 0
} // fim fun��o
