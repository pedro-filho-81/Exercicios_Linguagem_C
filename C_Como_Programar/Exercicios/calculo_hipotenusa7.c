/* Função: Cálculos de hipotenusa. Defina uma função chamada hipotenusa
   que calcule o tamanho da hipotenusa de um triângulo retângulo quando
   os outros dois lados são conhecidos. Use essa função em um programa para
   determinar o tamanho da hipotenusa de cada um dos tri- ângulos da tabela a seguir.
   A função deverá usar dois argumentos do tipo double e retornar a hipotenusa
   como um double. Teste seu programa com os valores de lado especificados na Figura 5.18.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (Página 153).  . Edição do Kindle.
   Pedro Filho, 06/11/2020*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

double hipotenusa( double x, double y );

// função principal
int main()
{
   setlocale(LC_ALL, "Portuguese" );

   // variáveis para calcular a hipotenusa de um triângulo retângulo
   double a = 0;
   double b = 0;

   // entrada de dados
   printf( "Calcular a hipotenusa:\n" );
   printf( "Valor de A: " );
   scanf( "%lf", &a );
   printf( "Valor de B: " );
   scanf( "%lf", &b );

   // imprimir a hipotenusa
   printf( "A soma de %.2lf + %.2lf = %.2lf\n", a, b, sqrt( hipotenusa( a, b ) ) );
   printf( "O valor da hipotenusa é %.2lf\n", sqrt( hipotenusa( a,b ) ) );

    printf( "\n" ); // pula linha

   system( "pause" ); // pausa o sistema

   return 0; // fim do programa

} // fim main

// function hipotenusa
double hipotenusa( double x, double y )
{
   // calcular
   x = pow( x, 2 );
   y = pow( y , 2 );
   return x + y;

} // fim da função
