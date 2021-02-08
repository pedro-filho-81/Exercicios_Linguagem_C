/*
   Questão: 5.10 Arredondando números. Uma das aplicações da função floor
   é arredondar um valor para o inteiro mais  próximo. A instrução
   y = floor( x + .5);  arredondará o número x para o inteiro mais próximo e
   atribuirá o resultado a y. Escreva um programa que leia  vários números
   e use o comando anterior para arredondar cada um desses números para
   o inteiro mais próximo. Para cada número processado, imprima o número
   original e o número arredondado.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 153). Edição do Kindle.
   Autor: @Pedro Filho, 08/02/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // variáveis
   float x = 1;
   int y = 0;


   // entrada de dados
   printf( "Digite um número qualquer [ - 1 sair ]: " );
   scanf( "%f", &x );

   while( x > 0 ) {

      // arredondar o valor de x
      y = ( x + 0.5 );

      // mostrar resultado
      printf( "O número arredondado de %.2f é %d\n", x, y );

      // entrada de dados
      printf( "Digite um número qualquer [ - 1 sair ]: " );
      scanf( "%f", &x );

   } // fim while

   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
