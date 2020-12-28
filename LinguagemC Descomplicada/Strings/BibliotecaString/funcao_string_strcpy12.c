/*
   Strings: função string strcpy( destino, origem )
   copia toda a string origem para a string destino
   Auto: Pedro Filho, 27/12/2020
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAMANHO 20

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vetor para string
   char origem[ TAMANHO ];
   char destino[ TAMANHO ];
   int resposta;

   // cabeçalho
   printf( "{ COPIANDO STRING COM STRCPY( DESTINO, ORIGEM ) }\n" );

   //entrada de dados
   printf( "Digite uma ( frase, palavra ou texto ): " );
   // limpar o buffer
   setbuf( stdin, NULL );
   // ENTRADA DO USUÁRIO
   gets( origem );

   printf( "\nEu sou a string original: %s\n", origem );

   // recebe um valor da função strcpy( destino, origem )
   strcpy( destino, origem );

   printf( "Eu sou a string copiada: %s\n", destino );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
