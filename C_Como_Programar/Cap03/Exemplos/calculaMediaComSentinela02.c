/*
   Questão: calcular a média das notas
   com repetição controlada por sentinela
   Pedro Filho, 14/01/2021
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // variáveis
   int contador = 0; // contador de repetições
   int nota; // recebe as notas
   int total = 0; // soma as notas

   float media = 0; // calcula a média das notas

   // entrada de dados
   printf( "Digite a %dº nota [ -1 (sair) ]: ", contador + 1 ); // prompt
   scanf( "%d", &nota ); // lê nota do usuário

   // enquanto nota diferente de -1 faça
   while( nota != -1 ) // loop
   {
      // calcular
      total += nota; // soma as notas

      contador += 1; // contador soma mais 1

      // entrada de dados
      printf( "Digite a %dº nota [ -1 (sair) ]: ", contador + 1 ); // prompt
      scanf( "%d", &nota ); // lê nota do usuário
   } // fim while

   // se contador diferente de zero calcular
   if ( contador != 0 ) {

      media = ( float ) total / contador; // calcula a média das notas

      // imprima
      printf( "Foram cadastrados %d notas.\n", contador );

      // imprime a media
      printf( "Total das notas = %d e a média é %.2f\n", total, media );
   } // fim if
   // se não
   else {
      // imprima
      printf( "Nenhuma nota foi cadastrada.\n" );
   } // fim else-1

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
