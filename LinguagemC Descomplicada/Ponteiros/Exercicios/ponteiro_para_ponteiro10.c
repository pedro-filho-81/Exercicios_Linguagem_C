/*
   Ponteiros: 10) Considere a seguinte declara��o: int a,* b,** c,*** d.
   Escreva um programa que leia a vari�vel a e calcule e exiba
   o dobro, o triplo e o qu�druplo desse valor utilizando apenas
   os ponteiros b, c e d. O ponteiro b deve ser usado para calcular
   o dobro, c, o triplo, e d, o qu�druplo.
   Backes, Andr�. Linguagem C (p. 213). GEN LTC. Edi��o do Kindle.
   Auto: Pedro Filho, 05/01/2021
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
   int num = 0;

   // ponteiro recebe o endere�o da vari�vel
   int *numPtr1 = &num;

   // ponteiro recebe o endere�o do ponteiro
   int **numPtr2 = &numPtr1;

   // ponteiro recebe o endere�o do ponteiro
   int ***numPtr3 = &numPtr2;

   // cabe�alho
   printf( "PONTEIRO PARA PONTEIRO\n" );

   // entrada de dados
   printf( "Digite um valor: " );
   scanf( "%d", &num );

   // cabe�alho
   printf( "\nENDERE�O E VALOR\n" );

   // mostrar resultado
   printf( "Vari�vel int num = %d\n", num );

   printf( "*numPtr1 = %d � o dobro de num e est� no endere�o numPtr1 %d\n",
          *numPtr1 * 2, numPtr1 );

   printf( "**numPtr2 = %d � o triplo de num e est� no endere�o numPtr2 %d\n",
          **numPtr2 * 3, numPtr2 );

   printf( "***numPtr3 = %d � o qu�druplo est� no endere�o numPtr3 %d\n",
          ***numPtr3 * 4, numPtr3 );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
