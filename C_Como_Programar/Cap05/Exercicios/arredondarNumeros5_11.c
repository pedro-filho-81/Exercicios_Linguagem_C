/*
   Quest�o: 5.11 Arredondando n�meros. A fun��o floor pode ser  usada para
   arredondar um n�mero at� uma casa decimal espec�fica. A instru��o
   y = floor( x * 10 + 5)/ 10;  arredonda x at� a posi��o de d�cimos
   (a primeira posi-  ��o � direita do ponto decimal). A instru��o arredonda
   x at� a posi��o de cent�simos (a segunda posi��o � direita do ponto decimal).
   Escreva um programa  que defina quatro fun��es que arredondem um n�mero
   x de v�rias maneiras:
   a) arredInteiro( n�mero)
   b) arredDecimos( n�mero)
   c) arredCentesimos( n�mero)
   d) arredMilesimos( n�mero) Para cada valor lido, seu programa dever�
   imprimir o  valor original, o n�mero arredondado at� o pr�ximo inteiro,
   o n�mero arredondado at� o p r�ximo d�cimo, at� o  pr�ximo cent�simo e at�
   o pr�ximo mil�simo.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 153). Edi��o do Kindle.
   Autor: @Pedro Filho, 09/02/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

// prot�tipos
int arredondaInteiro( int numero );
float arredondaDecimo( float numero );
float arredondaCentesimo( float numero );
float arredondaMilesimo( float numero );

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vari�veis
   int x = 0;

   // entrada de dados
   printf( "Digite um n�mero qualquer [- 1 sair]: " );
   scanf( "%d", &x );

   while( x > 0 ) {

      // mostrar resultado
      printf( "O n�mero arredondado de %d � %d inteiros\n", x, arredondaInteiro( x ) );
      printf( "O n�mero arredondado de %d � %.4f e 5 decimos\n", x, arredondaDecimo( x ) );
      printf( "O n�mero arredondado de %d � %.4f e 5 cent�simos\n", x, arredondaCentesimo( x ) );
      printf( "O n�mero arredondado de %d � %.4f e 5 mil�simos\n", x, arredondaMilesimo( x ) );

      // entrada de dados
      printf( "Digite um n�mero qualquer [- 1 sair]: " );
      scanf( "%d", &x );

   } // fim while

   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

// fun��o arredondaInteiro
int arredondaInteiro( int numero )
{
   return ( numero + 0.5 );
} // fim

// fun��o arredondaDecimo
float arredondaDecimo( float numero )
{
   // retorna d�cimo
   return ( numero * 10 + 5 ) / 10;
} // fim function

// fun��o arredondaCent�simo
float arredondaCentesimo( float numero )
{
   // retorna cent�simo
   return ( numero * 100 + 5 ) / 100;
} // fim function

// fun��o arredonda Mil�simo
float arredondaMilesimo( float numero )
{
   // retorna o mil�simo
   return ( numero * 1000 + 5 ) / 1000;
} // fim function
