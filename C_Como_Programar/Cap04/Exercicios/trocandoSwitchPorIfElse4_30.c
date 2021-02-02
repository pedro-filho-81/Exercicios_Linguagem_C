/*
   Questão:    4.30 Substituindo switch por if…else. Reescreva o programa da
   Figura 4.7 substituindo a estrutura switch pela  estrutura if...else aninhada;
   tenha o cuidado de tratar do caso default corretamente. Depois, reescreva
   essa  nova versão substituindo a estrutura if...else aninhada por uma série
   de estruturas if; aqui, também tenha  o cuidado de lidar com o caso default
   corretamente  (isso é mais difícil do que na versão do if...else  aninhado).
   Esse exercício demonstra que switch é  uma conveniência, e que qualquer
   estrutura switch  pode ser escrita apenas com instruções de seleção única.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 111). Edição do Kindle.
   Autor: @Pedro Filho, 01/02/2021
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
   int nota = 0;
   int aContar = 0;
   int bContar = 0;
   int cContar = 0;
   int dContar = 0;
   int eContar = 0;
   int fContar = 0;

   // imprime
   printf( "Digite as notas em letra.\n" );
   printf( "Digite o caractere EOF para sair do programa. \n" );

   // loop while até encontrar EOF = ( ctrl z )
   while( ( nota = getchar() ) != EOF ) {

      // se a ou A
      if( nota == 'A' || nota == 'a' ) ++aContar;
      if( nota == 'B' || nota == 'b' ) ++bContar;
      if( nota == 'C' || nota == 'c' ) ++cContar;
      if( nota == 'D' || nota == 'd' ) ++dContar;
      if( nota == 'E' || nota == 'e' ) ++eContar;
      if( nota == 'F' || nota == 'f' ) ++fContar;

   } // fim while

   // mostrar resultado
   printf( "Totais para cada nota digitada:\n" );
   printf( "A = %d\n", aContar );
   printf( "B = %d\n", bContar );
   printf( "C = %d\n", cContar );
   printf( "D = %d\n", dContar );
   printf( "E = %d\n", eContar );
   printf( "F = %d\n", fContar );

   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
