/*
   Strings:4) Fa�a um programa que leia uma  string e a imprima
   de tr�s para a frente.
   Backes, Andr�. Linguagem C (p. 139). GEN LTC. Edi��o do Kindle.
   Auto: Pedro Filho, 23/12/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAMANHO 30

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vetor para string
   char texto[ TAMANHO ];

   //entrada de dados
   printf( "Digite uma frase: " );

   // limpar o buffer
   setbuf( stdin, NULL );

   // ENTRADA DO USU�RIO
   gets( texto );

   // mostrando a string
   printf( "Voc� digitou: %s\n", texto );

   // mostrar texto invertido
   printf( "O texto invertido � " );

   // loop para inverter a string
   for( int j = strlen( texto ); j >= 0; j-- )
   {
      // mostrar os caracteres do texto
      printf( "%c", texto[ j ] );
   } // fim for

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
