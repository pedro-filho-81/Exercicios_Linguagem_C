/*
   Strings: fun��o string strncpy( destino, origem, tamanho a ser copiado )
   O tamanho da origem a ser copiado, vo
   Auto: Pedro Filho, 27/12/2020
*/

// biblioteca
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
   char origem[ TAMANHO ];
   char destino[ TAMANHO ];
   int resposta;

   // cabe�alho
   printf( "{ COPIANDO STRING COM STRCPY( DESTINO, ORIGEM ) }\n" );

   //entrada de dados
   printf( "Digite uma ( frase, palavra ou texto ): " );
   // limpar o buffer
   setbuf( stdin, NULL );
   // ENTRADA DO USU�RIO
   gets( origem );

   printf( "\nEu sou a string original: %s\n", origem );

   // recebe um valor da fun��o strcpy( destino, origem )
   // strlen( tamanho ) especifica a quantidade de caracteres a ser copiado
   // no lugar de strlen() pode ser colocado qual quer n�mero
   strncpy( destino, origem, 10 );

   printf( "Eu posso ser toda ou parte da string copiada: %s\n", destino );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
