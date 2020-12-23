/*
   Strings:  Usando a função gets() e fgets() para entrada
   de string pelo usuário.
   Auto: Pedro Filho, 22/12/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAMANHO 30

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // cria um vetor para string
   char frase[ TAMANHO ];

   // ENtrada de dados
   printf( "Usando a função gets() - Digite uma frase: " );

   // limpar o buffer, para ser usado com a função gets()
   setbuf(stdin, NULL );

   // entrada do usuário
   gets( frase );

   // mostrar o resultado
   printf( "\nA melhor opção para a entrada de string pelo teclado \n"
          "é usar a função gets() da biblioteca string.h e não scanf().");
   printf( "\nA frase digitada foi: %s\n", frase );

   // ENtrada de dados
   printf( "\nUsando afunção fgets() - Digite uma frase: " );

   // limar o buffer do teclado
   fflush( stdin );

   // entrada do usuário
   fgets( frase, TAMANHO, stdin );

   // pular uma linha
   printf( "\n" );

   // mostrar o resultado
   printf( "\nA melhor opção para a entrada de string pelo teclado \n"
          "é usar a função fgets( nome do arrays, tamanho, stdin ) da biblioteca string.h\n");
   printf( "\nA frase digitada foi: %s\n", frase );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
