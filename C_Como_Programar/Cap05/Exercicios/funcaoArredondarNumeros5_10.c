/*
   Quest�o: 5.10 Arredondando n�meros. Uma das aplica��es da fun��o floor
   � arredondar um valor para o inteiro mais  pr�ximo. A instru��o
   y = floor( x + .5);  arredondar� o n�mero x para o inteiro mais pr�ximo e
   atribuir� o resultado a y. Escreva um programa que leia  v�rios n�meros
   e use o comando anterior para arredondar cada um desses n�meros para
   o inteiro mais pr�ximo. Para cada n�mero processado, imprima o n�mero
   original e o n�mero arredondado.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 153). Edi��o do Kindle.
   Autor: @Pedro Filho, 08/02/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vari�veis
   float x = 1;
   int y = 0;


   // entrada de dados
   printf( "Digite um n�mero qualquer [ - 1 sair ]: " );
   scanf( "%f", &x );

   while( x > 0 ) {

      // arredondar o valor de x
      y = ( x + 0.5 );

      // mostrar resultado
      printf( "O n�mero arredondado de %.2f � %d\n", x, y );

      // entrada de dados
      printf( "Digite um n�mero qualquer [ - 1 sair ]: " );
      scanf( "%f", &x );

   } // fim while

   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
