/*
   Questão: 4.18 Programa de exibição de gráfico de barras. Uma  aplicação
   interessante dos computadores é a de desenhar  gráficos e gráficos de barras
   (às vezes, chamados ‘histogramas’). Escreva um programa que leia cinco números
   (entre 1 e 30). Para cada número lido, seu programa  deverá exibir uma linha
   contendo esse número de asteriscos adjacentes. Por exemplo, se seu programa
   ler o  número sete, ele deverá exibir *******.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 110). Edição do Kindle.
   Autor: @Pedro Filho, 25/01/2021
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

   // variável
   int num; // inicializa num com 1

   // entrada de dados
   printf( "Digite um número ente 1 e 30: " );
   scanf( "%d", &num );

   // se num maior que zero e menor ou igual a 30 faça
   if( num > 0 && num <= 30 ) {

      // cabeçalho
      printf( "\tHISTOGRAMAS\n" );

      // cabeçalho da tabela
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
            printf( "%40s", "Digite um número ente 1 e 30: " );
            scanf( "%d", &num );

      } // fim for externo

   } // fim if geral

   printf( "\n\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
