/*
   Questão: Tabela verdade
   Autor: @Pedro Filho, 26/01/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // variáveis
   int num1 = 0;
   int num2 = 0;
   int condicao1 = 0;
   int condicao2 = 0;
   int condicao3 = 0;
   int condicao4 = 0;

   // entrada de dados
   printf( "Digite 1 ou 0: " );
   scanf( "%d", &num1 );

   printf( "Digite 1 ou 0: " );
   scanf( "%d", &num2 );

   // se num1 igual a num2 imprima verdade
   if( num1 == 1 && num2 == 1 )
      // tabela verdade ( AND ) ( E ) = &&
      condicao1 = 1;

   // se num1 igual a num2 imprima verdade
   if( num1 == 1 )
      // tabela verdade ( AND ) ( E ) = &&
      num2 = 0;
      condicao2 = 0;

   // se num1 igual a num2 imprima verdade
   if( num2 == 1 )
      // tabela verdade ( AND ) ( E ) = &&
      num1 = 0;
      condicao3 = 0;

   // se num1 igual a num2 imprima verdade
   if( num1 == 0 &&  num2 == 0 )
      // tabela verdade ( AND ) ( E ) = &&
      condicao4 = 0;

   // imprime
   printf( "%38s\n" ,"TABELA VERDDE AND E &&" );
   printf( "   ***********************************************\n" );
   printf( "%12s%12s%25s\n", "Condiçã1", "Condição2", "Condição1 && Condição2" );
   printf( "   ***********************************************\n" );
   printf( "%10d%10d%18d\n", num1, num2, condicao1 );
   printf( "%10d%10d%18d\n", num1, num2, condicao2 );
   printf( "%10d%10d%18d\n", num1, num2, condicao3 );
   printf( "%10d%10d%18d\n", num1, num2, condicao4 );


   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
