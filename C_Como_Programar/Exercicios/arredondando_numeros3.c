/* Função: Arredondando números. Uma das aplicações da fun- ção floor é arredondar
   um valor para o inteiro mais próximo. A instrução y = floor( x + .5); arredondará
   o número x para o inteiro mais próximo e atribuirá o resultado a y. Escreva um
   programa que leia vários números e use o comando anterior para arredondar cada
   um desses números para o inteiro mais próximo. Para cada número processado,
   imprima o número original e o número arredondado.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (Página 153).  . Edição do Kindle.
   Pedro Filho, 06/11/2020*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float arredondar( float x );

// função principal
int main()
{
   setlocale(LC_ALL, "Portuguese" );

   float n = 0;
   float y = 0;

   printf( "Digite um número: " );
   scanf( "%f", &n );
   y = arredondar( n );
   printf( "\ny = %.2f\n", y );

    printf( "\n" ); // pula linha

   system( "pause" ); // pausa o sistema

   return 0; // fim do programa

} // fim main

float arredondar( float x )
{
   return floor( x + 0.5);
}
