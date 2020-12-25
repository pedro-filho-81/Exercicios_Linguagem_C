/*
   Strings: A função da biblioteca C void * memset
   (void * str, int c, size_t n) copia o caractere c
   (um caracter não assinado) para os primeiros n
   caracteres da string apontada, pelo argumento str
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
   char texto1[ TAMANHO ];
   char caractere;
   int resposta, quantidade;

   //entrada de dados
   printf( "Digite uma ( frase, palavra ou texto ): " );
   // limpar o buffer
   setbuf( stdin, NULL );
   // ENTRADA DO USUÁRIO
   gets( texto1 );


   //entrada de dados
   printf( "Digite o caractere a ser inserido na string: " );
   // limpar o buffer
   setbuf( stdin, NULL );
   // ENTRADA DO USUÁRIO
   scanf( "%c", &caractere );


   // mostrar
   printf( "Informe a quantidade de caractere a ser inserido: " );
   // entrada do usuário
   scanf( "%d", &quantidade );
   // mostrar texto original
   printf( "Texto original: %s\n", texto1 );


   // resposta recebe um valor da função
   // memset( string, caractere, quantidade de caractere a ser copiada )
   memset( texto1, caractere, quantidade );


   // mostra resultado
   printf( "Texto modificado: %s\n", texto1 );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
