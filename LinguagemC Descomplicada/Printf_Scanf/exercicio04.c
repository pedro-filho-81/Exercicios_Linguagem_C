/*
   4) Fa�a um programa que leia um n�mero inteiro e depois
   o imprima usando o operador �% f�. Veja o que aconteceu.
   Backes, Andr�. Linguagem C (p. 47). GEN LTC. Edi��o do Kindle.
   Auto: Pedro Filho, 11/01/2021
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

   // vari�vel
   int num;

   // entrada de dados
   printf( "Digite um n�mero:" );
   scanf( "%d", &num );

   // imprimir
   printf( "Voc� digitou o n�mero %f\n", num );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
