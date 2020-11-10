/* Fun��o: Arredondando n�meros. Uma das aplica��es da fun- ��o floor � arredondar
   um valor para o inteiro mais pr�ximo. A instru��o y = floor( x + .5); arredondar�
   o n�mero x para o inteiro mais pr�ximo e atribuir� o resultado a y. Escreva um
   programa que leia v�rios n�meros e use o comando anterior para arredondar cada
   um desses n�meros para o inteiro mais pr�ximo. Para cada n�mero processado,
   imprima o n�mero original e o n�mero arredondado.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (P�gina 153).  . Edi��o do Kindle.
   Pedro Filho, 06/11/2020*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float arredondar( float x );

// fun��o principal
int main()
{
   setlocale(LC_ALL, "Portuguese" );

   float n = 0;
   float y = 0;

   printf( "Digite um n�mero: " );
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
