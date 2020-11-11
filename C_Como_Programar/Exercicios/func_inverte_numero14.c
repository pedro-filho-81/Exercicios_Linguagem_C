/* Fun��o:5.28 Invertendo d�gitos. Escreva uma fun��o que leia um valor inteiro
   e retorne o n�mero com seus d�gitos invertidos. Por exemplo, dado o n�mero 7631,
   a fun��o dever� retornar 1367.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (P�gina 155).  . Edi��o do Kindle.
   Autor: Pedro Filho, 11/11/2020*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// prot�tipo
void inverte_num( int num );

// fun��o principal
int main()
{
   // seleciona o idioma Portugu�s
   // possibilita o uso de (�, �, �, etc.).
   setlocale(LC_ALL, "Portuguese" );

   // vari�vel para entrada do usu�rio
   int n = 0;

   // entrada de dados
   printf( "Digite um n�mero: " );
   scanf( "%d", &n );

   // chamar a fun��o inverte n�mero
   inverte_num( n );

   printf( "\n" ); // pula linha

   system( "pause" ); // pausa o sistema

   return 0; // fim do programa

} // fim main

// fun��o inverte_num
void inverte_num( int num )
{
   // vari�vel para inver��o
   int inverte = 0;

   // fa�a enquanto o parametro num for maior que zero
   while( num > 0 )
   {
      // inverte recebe o resto da divis�o por dez
      inverte = num % 10;
      // imprime o valor de inverte
      printf( "%d ", inverte );
      // divide o parametro por dez
      num /= 10;

   } // fim while
} // fim fun��o
