/*
   Quest�o: calcular a m�dia das notas
   com repeti��o controlada por sentinela
   Pedro Filho, 14/01/2021
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vari�veis
   int contador = 0; // contador de repeti��es
   int nota; // recebe as notas
   int total = 0; // soma as notas

   float media = 0; // calcula a m�dia das notas

   // entrada de dados
   printf( "Digite a %d� nota [ -1 (sair) ]: ", contador + 1 ); // prompt
   scanf( "%d", &nota ); // l� nota do usu�rio

   // enquanto nota diferente de -1 fa�a
   while( nota != -1 ) // loop
   {
      // calcular
      total += nota; // soma as notas

      contador += 1; // contador soma mais 1

      // entrada de dados
      printf( "Digite a %d� nota [ -1 (sair) ]: ", contador + 1 ); // prompt
      scanf( "%d", &nota ); // l� nota do usu�rio
   } // fim while

   // se contador diferente de zero calcular
   if ( contador != 0 ) {

      media = ( float ) total / contador; // calcula a m�dia das notas

      // imprima
      printf( "Foram cadastrados %d notas.\n", contador );

      // imprime a media
      printf( "Total das notas = %d e a m�dia � %.2f\n", total, media );
   } // fim if
   // se n�o
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

}  // FIM FUN��O MAIN
