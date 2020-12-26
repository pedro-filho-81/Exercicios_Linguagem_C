/*
   Strings 03: A função da biblioteca C void * memcpy
   (void * dest, const void * src, size_t n) copia n
   caracteres da área de memória src para a área de memória dest
   Auto: Pedro Filho, 24/12/2020
*/

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
   // origem e destino tem os mesmos tamanho
   char origem[ TAMANHO ];
   char destino[ TAMANHO ];

   //entrada de dados
   printf( "Digite uma ( frase, palavra ou texto ) para origem: " );
   // limpar o buffer
   setbuf( stdin, NULL );
   // ENTRADA DO USUÁRIO
   gets( origem );


   //entrada de dados
   printf( "Digite uma ( frase, palavra ou texto ) destino: " );
   // limpar o buffer
   setbuf( stdin, NULL );
   // ENTRADA DO USUÁRIO
   gets( destino );

   // mostrar strings antes da cópia
   printf( "Origem : |%s|\n", origem );
   printf( "Destino antes da cópia: |%s|\n", destino );

   // copiando a string da origem para o destino
   memcpy( destino, origem, strlen( origem ) + 1 );

   // mostrando o destino depois da cópia
   printf( "Destino depois da cópia: |%s|\n", destino );


   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
