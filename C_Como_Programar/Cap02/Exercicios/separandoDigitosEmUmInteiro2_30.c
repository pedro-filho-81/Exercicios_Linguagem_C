/*
   Quest�o: 2.30 Separando d�gitos em um inteiro. Escreva um programa que leia
   um n�mero de cinco d�gitos, separe o n�mero  em d�gitos individuais
   e imprima os d�gitos separados um  do outro por tr�s espa�os cada um.
   [Dica: use combina��es  da divis�o inteira e da opera��o m�dulo.]
   Por exemplo, se o  usu�rio digitar 42139, o programa dever� exibir
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 42). Edi��o do Kindle.
   Autor: Pedro Filho, 13/01/2021
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // variaveis
   int num, a, b, c, d, e;


   // entrada de dados
   printf( "digite um n�mero entre 1 99999: " );
   scanf( "%d", &num );

   // calcular
   a = num / 10000 % 1000;
   b = num % 10000 / 1000;
   c = num % 1000 / 100;
   d = num % 100 / 10;
   e = num % 10;

   printf( "\nN�meros separados: %d %d %d %d %d\n", a, b, c, d, e );


   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
