/*
   Questão: 5.13 Escreva instruções que atribuam inteiros aleatórios à variável
   n nos seguintes intervalos:
   a) 1 ≤ n ≤ 2  b) 1 ≤ n ≤ 100  c) 0 ≤ n ≤ 9  d) 1000 ≤ n ≤ 1112
   e) –1 ≤ n ≤ 1  f) –3 ≤ n ≤ 11
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 153). Edição do Kindle.
   Autor: @Pedro Filho, 09/02/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>


// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   int i; // contador do for
   int num = 0;

   srand( time(NULL) );

   printf( "A) " );

   // repete 5 vezes
   for( i = 1; i <= 5; i++ ) {
      // números aleatórios entre 1 e dois
       num = 1 + rand() % 2;
      // inprima
       printf( "%d ", num );
   } // fim for

   printf( "\n" );
   printf( "B) " );

   // loop
   for( i = 1; i <= 5; i++ ) {
      // números aleatórios entre 1 e 100
      num = 1 + rand() % 99;
      printf( "%d ", num );
   } //fim for

   printf( "\n" ); // pular linha
   printf( "C) " );
    // loop
   for( i = 1; i <= 5; i++ ) {
      // números aleatórios entre 1 e 100
      num = 0 + rand() % 9;
      printf( "%d ", num );
   } // fim for

   printf( "\n" ); // pular linha
   printf( "D) " );
    // loop
   for( i = 1; i <= 20; i++ ) {
      // números aleatórios entre 1 e 100
      num = 1000 + rand() % 1112;
      // se num maior ou igual a mil e menor que 1112
      if( num >= 1000 && num <= 1112 )
         // imprima
         printf( "%d ", num );
   } // fim for

   printf( "\n" ); // pular linha
   printf( "E) " );
    // loop
   for( i = 1; i <= 5; i++ ) {
      // números aleatórios entre 1 e 100
      num = -1 + rand() % 1;
      // imprima
      printf( "%d ", num );
   } // fim for

   printf( "\n" ); // pular linha
   printf( "F) " );
    // loop
   for( i = 1; i <= 5; i++ ) {
      // números aleatórios entre 1 e 100
      num = -3 + rand() % 11;
      // imprima
      printf( "%d ", num );
   } // fim for

   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
