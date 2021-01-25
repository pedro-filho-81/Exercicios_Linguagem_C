/*
   Quest�o: 4.18 Programa de exibi��o de gr�fico de barras. Uma  aplica��o
   interessante dos computadores � a de desenhar  gr�ficos e gr�ficos de barras
   (�s vezes, chamados �histogramas�). Escreva um programa que leia cinco n�meros
   (entre 1 e 30). Para cada n�mero lido, seu programa  dever� exibir uma linha
   contendo esse n�mero de asteriscos adjacentes. Por exemplo, se seu programa
   ler o  n�mero sete, ele dever� exibir *******.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 110). Edi��o do Kindle.
   Autor: @Pedro Filho, 25/01/2021
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

   // vari�vel
   int num; // inicializa num com 1

   // entrada de dados
   printf( "Digite um n�mero ente 1 e 30: " );
   scanf( "%d", &num );

   // se num maior que zero e menor ou igual a 30 fa�a
   if( num > 0 && num <= 30 ) {

      // cabe�alho
      printf( "\tHISTOGRAMAS\n" );

      // cabe�alho da tabela
      printf( "%10s%15s\n", "Valor", "histogramas" );

      // loop para informar os 5 valores
      for( int i = 1; i <= 5; i++ ) {

         // valores da tabela
         printf( "%10d%4s", num, "" );

         // loop for para mostrar histogramas
         for( int j = 1; j <= num; j++ ) {

            // imprima
            printf( "*" );

         } // fim for histogramas

         // se i igual a 5 pare
         if( i == 5 ) break;

            // entrada de dados
            printf( "%40s", "Digite um n�mero ente 1 e 30: " );
            scanf( "%d", &num );

      } // fim for externo

   } // fim if geral

   printf( "\n\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
