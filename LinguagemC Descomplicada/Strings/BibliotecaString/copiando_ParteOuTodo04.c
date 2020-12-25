/*
   Strings: A fun��o da biblioteca C void * memmove
   (void * str1, const void * str2, size_t n)
   copia n caracteres de str2 para str1 , mas para
   blocos de mem�ria sobrepostos, memmove () � uma
   abordagem mais segura do que memcpy ().
   Auto: Pedro Filho, 24/12/2020
*/
 /*
   Strings: A fun��o da biblioteca C void * memcpy
   (void * dest, const void * src, size_t n) copia n
   caracteres da �rea de mem�ria src para a �rea de mem�ria dest
   Auto: Pedro Filho, 24/12/2020
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
   printf( "Destino antes da c�pia: |%s|\n", destino );

   // copiando a string da origem para o destino com a fun��o
   // memmove( destino, origem, tamanho da origem ) + 1 )
   memmove( destino, origem, strlen( origem ) + 1 );

   // mostrando o destino depois da c�pia
   printf( "Destino depois da c�pia: |%s|\n", destino );


   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
