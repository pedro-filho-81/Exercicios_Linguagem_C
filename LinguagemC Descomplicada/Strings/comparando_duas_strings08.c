/*
   Strings: comparando duas strings fun��o strcmp( string1, string2 0
   Auto: Pedro Filho, 22/12/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAMANHO 30

// FUN��O PRINCIPA
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vetor para string
   char primeiroTexto[ TAMANHO ];
   char segundoTexto[ TAMANHO ];
   char resposta;

   //entrada de dados
   printf( "Digite o primeiro ( texto, palavra ou frase ): " );
   // limpar o buffer
   setbuf( stdin, NULL );
   // ENTRADA DO USU�RIO
   fgets( primeiroTexto, TAMANHO, stdin );


   //entrada de dados
   printf( "Digite o segundo ( texto, palavra ou frase ): " );
   // limpar o buffer
   setbuf( stdin, NULL );
   // ENTRADA DO USU�RIO
   fgets( segundoTexto, TAMANHO, stdin );

   // RESPOSTA RECEBE VALOR DA FUN��O STRCMP()
   resposta = strcmp( primeiroTexto, segundoTexto );

   // se a resposta igual a zero
   if( resposta == 0 )
   {
      // mostrar
      printf( "Textos iguais.\n" );
   }
   else
   {
      printf( "Textos diferentes.\n" );
   }

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
