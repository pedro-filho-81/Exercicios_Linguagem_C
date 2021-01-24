/*
   Quest�o: 4.14 Fatoriais. A fun��o fatorial � usada com frequ�ncia  nos
   problemas de probabilidade. O fatorial de um inteiro  positivo n
   (escrito como n! e pronunciado como �fatorial  de n�) � igual ao produto
   dos inteiros positivos de 1 a n.  Escreva um programa que avalie os fatoriais
   dos inteiros  de 1 a 5. Imprima os resultados em formato tabular. Que
   dificuldade poderia impedi-lo de calcular o fatorial de 20?
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 109). Edi��o do Kindle.
   Autor: @Pedro Filho, 23/01/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vari�vel
   int fatorial = 1;
   int i, j;

   // cabe�alho
   printf( "%10s%12s\n", "N�mero", "Fatorial" );

   // loop para controlar a repeti��o
   for( j = 1; j <= 10; j++ ) {

      // loop for para calcular o fatorial
      for( i = 1; i <= j; i++ ) {

         // calcula o fatorial
         fatorial *= i;

      } // fim for interno

      // imprima o n�mero e o fatorial
      printf( "%7d!   =  %7d\n", j, fatorial );

      // inicializa o fatorial
      fatorial = 1;

   } // fim for externo

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
