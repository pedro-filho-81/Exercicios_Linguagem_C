/*
   Ponteiros: 10) Considere a seguinte declaração: int a,* b,** c,*** d.
   Escreva um programa que leia a variável a e calcule e exiba
   o dobro, o triplo e o quádruplo desse valor utilizando apenas
   os ponteiros b, c e d. O ponteiro b deve ser usado para calcular
   o dobro, c, o triplo, e d, o quádruplo.
   Backes, André. Linguagem C (p. 213). GEN LTC. Edição do Kindle.
   Auto: Pedro Filho, 05/01/2021
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // variável
   int num = 0;

   // ponteiro recebe o endereço da variável
   int *numPtr1 = &num;

   // ponteiro recebe o endereço do ponteiro
   int **numPtr2 = &numPtr1;

   // ponteiro recebe o endereço do ponteiro
   int ***numPtr3 = &numPtr2;

   // cabeçalho
   printf( "PONTEIRO PARA PONTEIRO\n" );

   // entrada de dados
   printf( "Digite um valor: " );
   scanf( "%d", &num );

   // cabeçalho
   printf( "\nENDEREÇO E VALOR\n" );

   // mostrar resultado
   printf( "Variável int num = %d\n", num );

   printf( "*numPtr1 = %d é o dobro de num e está no endereço numPtr1 %d\n",
          *numPtr1 * 2, numPtr1 );

   printf( "**numPtr2 = %d é o triplo de num e está no endereço numPtr2 %d\n",
          **numPtr2 * 3, numPtr2 );

   printf( "***numPtr3 = %d é o quádruplo está no endereço numPtr3 %d\n",
          ***numPtr3 * 4, numPtr3 );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
