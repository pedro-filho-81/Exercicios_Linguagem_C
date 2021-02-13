/*
   Quest�o: 5.26 N�meros perfeitos. Um n�mero inteiro � considerado  um n�mero
   perfeito se a soma de seus fatores, incluindo 1 (mas n�o o pr�prio n�mero)
   for igual ao pr�prio  n�mero. Por exemplo, 6 � um n�mero perfeito porque
   6  = 1 + 2 + 3. Escreva uma fun��o perfect que determine se o par�metro
   number � um n�mero perfeito. Use  essa fun��o em um programa que determine
   e imprima  todos os n�meros perfeitos entre 1 e 1000. Imprima os  fatores
   de cada n�mero perfeito para confirmar se o n�-  mero � realmente perfeito.
   Desafie o poder de seu computador testando n�meros muito maiores que 1000.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 155). Edi��o do Kindle.
   Autor: @Pedro Filho, 13/02/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// prot�tipo

int numerosPerfeitos( int numero );

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vari�veis
   int i;

   // cabe�alho
   printf( "\tN�MEROS PERFEITOS\n" );

   // loop para o controle da soma
   for( i = 1; i <= 10000; i++ ) {

      // chama a fun��o n�meros perfeitos
      printf( "%9d ", numerosPerfeitos( i ) );

   } // fim for externo

   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

// fun��o numerosPerfeitos
int numerosPerfeitos( int numeros )
{
   // vari�vel
   int i, soma = 0;

   for( i = 1; i <= numeros; i++ ) {

      soma += i;

   } // fim for

   // retorne a soma
   return soma;

}// fim fun��o
