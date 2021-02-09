/*
   Questão: 5.11 Arredondando números. A função floor pode ser  usada para
   arredondar um número até uma casa decimal específica. A instrução
   y = floor( x * 10 + 5)/ 10;  arredonda x até a posição de décimos
   (a primeira posi-  ção à direita do ponto decimal). A instrução arredonda
   x até a posição de centésimos (a segunda posição à direita do ponto decimal).
   Escreva um programa  que defina quatro funções que arredondem um número
   x de várias maneiras:
   a) arredInteiro( número)
   b) arredDecimos( número)
   c) arredCentesimos( número)
   d) arredMilesimos( número) Para cada valor lido, seu programa deverá
   imprimir o  valor original, o número arredondado até o próximo inteiro,
   o número arredondado até o p róximo décimo, até o  próximo centésimo e até
   o próximo milésimo.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 153). Edição do Kindle.
   Autor: @Pedro Filho, 09/02/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

// protótipos
int arredondaInteiro( int numero );
float arredondaDecimo( float numero );
float arredondaCentesimo( float numero );
float arredondaMilesimo( float numero );

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // variáveis
   int x = 0;

   // entrada de dados
   printf( "Digite um número qualquer [- 1 sair]: " );
   scanf( "%d", &x );

   while( x > 0 ) {

      // mostrar resultado
      printf( "O número arredondado de %d é %d inteiros\n", x, arredondaInteiro( x ) );
      printf( "O número arredondado de %d é %.4f e 5 decimos\n", x, arredondaDecimo( x ) );
      printf( "O número arredondado de %d é %.4f e 5 centésimos\n", x, arredondaCentesimo( x ) );
      printf( "O número arredondado de %d é %.4f e 5 milésimos\n", x, arredondaMilesimo( x ) );

      // entrada de dados
      printf( "Digite um número qualquer [- 1 sair]: " );
      scanf( "%d", &x );

   } // fim while

   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

// função arredondaInteiro
int arredondaInteiro( int numero )
{
   return ( numero + 0.5 );
} // fim

// função arredondaDecimo
float arredondaDecimo( float numero )
{
   // retorna décimo
   return ( numero * 10 + 5 ) / 10;
} // fim function

// função arredondaCentésimo
float arredondaCentesimo( float numero )
{
   // retorna centésimo
   return ( numero * 100 + 5 ) / 100;
} // fim function

// função arredonda Milésimo
float arredondaMilesimo( float numero )
{
   // retorna o milésimo
   return ( numero * 1000 + 5 ) / 1000;
} // fim function
