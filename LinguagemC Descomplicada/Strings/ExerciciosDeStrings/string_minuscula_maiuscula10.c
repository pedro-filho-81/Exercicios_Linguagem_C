/*
   Strings: 10) Escreva um programa que leia uma string do teclado
   e converta todos os seus caracteres em mai�scula. Dica: subtraia
   32 dos caracteres cujo c�digo ASCII est� entre 97 e 122.
   Backes, Andr�. Linguagem C (p. 140). GEN LTC. Edi��o do Kindle.
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
   char stringMinuscula[ TAMANHO ];

   // cabe�alho
   printf( "{ TRANSFORMANDO STRING min�scula EM MAI�SCULA }\n" );

   //entrada de dados
   printf( "Digite uma ( frase, palavra ou texto ): " );
   // limpar o buffer
   setbuf( stdin, NULL );
   // ENTRADA DO USU�RIO
   gets( stringMinuscula );

   // mostrar
   printf( "String min�scula: %s\n", stringMinuscula );

   // mai�scula
   printf( "String mai�scula: " );

   // loop for para trasformar string min�scula em mai�scula
   for( int i = 0; i < stringMinuscula[ i ] != '\0'; i++ )
   {
      printf( "%c ", stringMinuscula[ i ] - 32 );
   }

   // pular uma linha
   printf( "\n\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
