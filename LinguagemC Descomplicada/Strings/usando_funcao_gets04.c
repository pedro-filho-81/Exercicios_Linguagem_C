/*
   Strings:  Usando a fun��o gets() e fgets() para entrada
   de string pelo usu�rio.
   Auto: Pedro Filho, 22/12/2020
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

   // cria um vetor para string
   char frase[ TAMANHO ];

   // ENtrada de dados
   printf( "Usando a fun��o gets() - Digite uma frase: " );

   // limpar o buffer, para ser usado com a fun��o gets()
   setbuf(stdin, NULL );

   // entrada do usu�rio
   gets( frase );

   // mostrar o resultado
   printf( "\nA melhor op��o para a entrada de string pelo teclado \n"
          "� usar a fun��o gets() da biblioteca string.h e n�o scanf().");
   printf( "\nA frase digitada foi: %s\n", frase );

   // ENtrada de dados
   printf( "\nUsando afun��o fgets() - Digite uma frase: " );

   // limar o buffer do teclado
   fflush( stdin );

   // entrada do usu�rio
   fgets( frase, TAMANHO, stdin );

   // pular uma linha
   printf( "\n" );

   // mostrar o resultado
   printf( "\nA melhor op��o para a entrada de string pelo teclado \n"
          "� usar a fun��o fgets( nome do arrays, tamanho, stdin ) da biblioteca string.h\n");
   printf( "\nA frase digitada foi: %s\n", frase );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
