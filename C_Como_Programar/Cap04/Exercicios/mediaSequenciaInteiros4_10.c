/*
   Quest�o: 4.10 M�dia de uma sequ�ncia de inteiros. Escreva um  programa que
   calcule e imprima a m�dia de v�rios inteiros.  Considere que o �ltimo valor
   lido com scanf seja a sentinela 9999. Uma sequ�ncia de entrada t�pica poderia
   ser  10 8 11 7 9 9999  indicando que � preciso calcular a m�dia de todos
   os valores anteriores a 9999.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 109). Edi��o do Kindle.
   Autor: @Pedro Filho, 22/01/2021
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

   // vari�veis
   int numero;
   int soma = 0, media = 0;
   int contador = 0;

   // entrada de dados
   printf( "Digite um inteiro: " );
   scanf( "%d", &numero );

   // fa�a enquanto n�mero diferente de 9999
   do {

      // se n�mero diferente de 9999 fa�a
      if( numero != 9999 ) {

         // somar n�mero
         soma += numero;

         // incrementa contador
         contador++;

      } // fim if

      // entrada de dados
      printf( "Digite um inteiro: " );
      scanf( "%d", &numero );

   } while( numero != 9999 );

   // calcular a m�dia
   media = soma / contador;

   // imprime a soma e a m�dia
   printf( "Voc� digitou %d n�meros.\n", contador );
   printf( "Soma = %d\nM�dia = %d\n\n", soma, media );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
