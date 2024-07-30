/*
   Figura 2.13: fig02_13.c  2 Usando instru��es if, operadores relacionais
   3 e operadores de igualdade
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 33). Edi��o do Kindle.
   Autor: Pedro Filho
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

   // vari�veis
   int numero1; // para entrada do primeiro valor
   int numero2; // para o segundo inteiro

   // entrada de dados
   printf( "Digite o primeiro inteiro: " );
   scanf( "%d", &numero1 );

   printf( "Segundo inteiro: " );
   scanf( "%d", &numero2 );

   // cabe�alho
   printf( "\n COMPARA��O ENTRE N�MEROS\n" );

   // vereficar se s�o iguais
   if( numero1 == numero2 )
      printf( "%d � igual a %d\n", numero1, numero2 );

   // verificar se s�o diferentes
   if( numero1 != numero2 )
      printf( "%d � diferente de  %d\n", numero1, numero2 );

   // verificar se o primeiro e maior que o segundo
   if( numero1 > numero2 )
      printf( "%d � maior que %d\n", numero1, numero2 );

   // verificar se o primeiro � menor que o segundo
   if( numero1 < numero2 )
      printf( "%d � menor que %d\n", numero1, numero2 );

   // verificar se o primeiro � menor  o segundo
   if( numero1 <= numero2 )
      printf( "%d � menor ou igual a %d\n", numero1, numero2 );

   // verificar se o primeiro � maior ou igual  o segundo
   if( numero1 >= numero2 )
      printf( "%d � maior ou igual a %d\n", numero1, numero2 );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
