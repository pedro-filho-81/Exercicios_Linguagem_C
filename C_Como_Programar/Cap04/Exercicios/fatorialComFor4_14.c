/*
   Questão: 4.14 Fatoriais. A função fatorial é usada com frequência  nos
   problemas de probabilidade. O fatorial de um inteiro  positivo n
   (escrito como n! e pronunciado como ‘fatorial  de n’) é igual ao produto
   dos inteiros positivos de 1 a n.  Escreva um programa que avalie os fatoriais
   dos inteiros  de 1 a 5. Imprima os resultados em formato tabular. Que
   dificuldade poderia impedi-lo de calcular o fatorial de 20?
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 109). Edição do Kindle.
   Autor: @Pedro Filho, 23/01/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // variável
   int fatorial = 1;
   int i, j;

   // cabeçalho
   printf( "%10s%12s\n", "Número", "Fatorial" );

   // loop para controlar a repetição
   for( j = 1; j <= 10; j++ ) {

      // loop for para calcular o fatorial
      for( i = 1; i <= j; i++ ) {

         // calcula o fatorial
         fatorial *= i;

      } // fim for interno

      // imprima o número e o fatorial
      printf( "%7d!   =  %7d\n", j, fatorial );

      // inicializa o fatorial
      fatorial = 1;

   } // fim for externo

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
