/*
   Strings: A fun��o de biblioteca C char * strcat
   (char * dest, const char * src) anexa a string
   apontada por src ao final da string apontada por dest .
   Auto: Pedro Filho, 26/12/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAMANHO 20

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vetor para string
   // origem e destino tem os mesmos tamanho
   char origem[ TAMANHO ];
   char destino[ TAMANHO ];

   //entrada de dados
   printf( "Digite uma ( frase, palavra ou texto ) para origem: " );
   // limpar o buffer
   setbuf( stdin, NULL );
   // ENTRADA DO USU�RIO
   gets( origem );


   //entrada de dados
   printf( "Digite uma ( frase, palavra ou texto ) destino: " );
   // limpar o buffer
   setbuf( stdin, NULL );
   // ENTRADA DO USU�RIO
   gets( destino );

   // mostrar strings antes da c�pia
   printf( "Origem : |%s|\n", origem );
   printf( "Destino antes de strcat() : |%s|\n", destino );

   // anexando a string da origem para o destino com a fun��o
   // strcat( destino, origem )
   strcat( destino, origem );

   // mostrando o destino depois da c�pia
   printf( "Destino depois de strcat() : |%s|\n", destino );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
