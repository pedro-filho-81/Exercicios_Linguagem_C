/*
   Strings:  copiando uma string A para uma string B
   Auto: Pedro Filho, 22/12/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAMANHO 50

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vetor para string
   char texto1[ TAMANHO ];
   char texto2[ TAMANHO ];

   //entrada de dados
   printf( "Digite uma frase: " );

   // limpar o buffer
   setbuf( stdin, NULL );

   // ENTRADA DO USU�RIO
   gets( texto1 );

   // mostrando string digitada
   printf( "\nVoc� digitou: %s\n", texto1 );

   // copiando a string 1 para a string 2
   strcpy( texto2, texto1 );

   // copiando e mostrando a string 2
   printf( "\nEu sou a string2 que recebeu a c�pia da string1"
          "\ncom strcpy( string2, string1): \n%s\n", texto2 );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
