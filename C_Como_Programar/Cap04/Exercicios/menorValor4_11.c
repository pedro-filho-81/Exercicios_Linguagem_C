/*
   Questão: 4.11 Ache o menor. Escreva um programa que encontre o  menor de
   vários inteiros. Considere que o primeiro valor  lido especifique
   o número de valores restantes.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 109). Edição do Kindle.
   Autor: @Pedro Filho, 22/01/2021
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// função principal
int main()
{

      // configura para português Brasil
      setlocale( LC_ALL, "Portuguese" );

      // variáveis
      int numero;
      int menor = 0;
      int contador = 0;
      int i;

      // entrada de dados
      printf( "Digite o número de repetição: " );
      scanf( "%d", &contador );

      // loop for para entrada de dados
      for( i = 1; i <= contador; i ++ ) {

         // entrada dos valores
         printf( "Digite um valores: " );
         scanf( "%d", &numero );

         // se i igual a 1
         if( i == 1 ) {

            // menor recebe o número
            menor = numero;
         } // fim if

         // se número menor que menor
         if( numero < menor ) {

            // menor recebe o número
            menor = numero;
         } // fim if

      } // fim for

      printf( "O menor valor é %d\n\n", menor);

}  // fim main
