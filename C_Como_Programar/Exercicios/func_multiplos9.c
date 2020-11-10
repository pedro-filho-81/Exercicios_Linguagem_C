/* Função: Múltiplos. Escreva uma função multiple que determine para um par
   de inteiros, se o segundo inteiro é um múltiplo do primeiro. A função deve apanhar
   dois argumentos inteiros e retornar 1 (verdadeiro), se o segundo for um múltiplo
   do primeiro, e 0 (falso), caso contrário. Use essa função em um programa
   que inclua uma série de pares de inteiros.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (Página 154).  . Edição do Kindle.
   Pedro Filho, 09/11/2020*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// protótipo
int multiplos( int x, int y );

// função principal
int main()
{
   // seleciona o idioma Português
   setlocale(LC_ALL, "Portuguese" );

   // loop para verificar  se o segundo número é multiplo do primeiro
   for( int i = 2; i <= 10; i++ ) // loop do primeiro número
   {  // loop do segundo número
      for( int j = 2; j <= 15; j++ )
      {
         // verificar se o segundo número é multiplo do primeiro
         // chamar a função multiplos e verificar se a função retorna o valor 1 ou 0
         // 1 significa multiplo
         if( multiplos( i, j ) == 1 ) // se igual a 1
            // imprima
            printf( "\t%d É multiplo de %d\n", j, i );

         // aqui mostra os que não são multiplos ( optei não deixar ativo )
         // mas funciona.
         /*
         else // se valor diferente de 1
            // imprima
            printf( "\t%d NÃO é multiplo de %d\n", j, i );
         */
      } // fim for interno
   } //  fim for externo

    printf( "\n" ); // pular linha

   system( "pause" ); // pausar o sistema

   return 0; // fim do programa

} // fim main

// função multiplos
int multiplos( int x, int y )
{
   // variável multi para calcular a diferença de x e y
   int multi = y % x;

   // verificar se multi é igual a zero se sim então y é multiplo de x
   if( multi == 0 ) // se verdade
      return 1; // retornar 1
   else // se falso
      return 0; // retornar zero 0
} // fim função
