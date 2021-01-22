/*
   Quest�o: 4.11 Ache o menor. Escreva um programa que encontre o  menor de
   v�rios inteiros. Considere que o primeiro valor  lido especifique
   o n�mero de valores restantes.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 109). Edi��o do Kindle.
   Autor: @Pedro Filho, 22/01/2021
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// fun��o principal
int main()
{

      // configura para portugu�s Brasil
      setlocale( LC_ALL, "Portuguese" );

      // vari�veis
      int numero;
      int maior = 0;
      int contador = 0;
      int i;

      // entrada de dados
      printf( "Digite o n�mero de repeti��o: " );
      scanf( "%d", &contador );

      // loop for para entrada de dados
      for( i = 1; i <= contador; i ++ ) {

         // entrada dos valores
         printf( "Digite os valores: " );
         scanf( "%d", &numero );

         // se i igual a 1
         if( i == 1 ) {

            // maior recebe o n�mero
            maior = numero;
         } // fim if

         // se n�mero maior que maior
         if( numero >= maior ) {

            // maior recebe o n�mero
            maior = numero;
         } // fim if

      } // fim for

      printf( "O maior valor � %d\n\n", maior );

}  // fim main
