/*
   Strings: A função de biblioteca C char * strncat
   (char * dest, const char * src, size_t n) anexa
   a string apontada por src ao final da string
   apontada por dest até n caracteres.
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
   int quantidade;

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

   // entrada de quantidade
   printf( "Digite a quantida decaracteres a ser anexado: " );
   scanf( "%d", &quantidade );

   // mostrar strings antes da cópia
   printf( "Origem : |%s|\n", origem );
   printf( "Destino antes de strcat() : |%s|\n", destino );

   // anexando a string da origem para o destino com a função
   // strcat( destino, origem )
   strncat( destino, origem, quantidade );

   // mostrando o destino depois da cópia
   printf( "Destino depois de strcat() : |%s|\n", destino );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
