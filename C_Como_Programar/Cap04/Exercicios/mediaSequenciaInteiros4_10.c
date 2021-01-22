/*
   Questão: 4.10 Média de uma sequência de inteiros. Escreva um  programa que
   calcule e imprima a média de vários inteiros.  Considere que o último valor
   lido com scanf seja a sentinela 9999. Uma sequência de entrada típica poderia
   ser  10 8 11 7 9 9999  indicando que é preciso calcular a média de todos
   os valores anteriores a 9999.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 109). Edição do Kindle.
   Autor: @Pedro Filho, 22/01/2021
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

   // variáveis
   int numero;
   int soma = 0, media = 0;
   int contador = 0;

   // entrada de dados
   printf( "Digite um inteiro: " );
   scanf( "%d", &numero );

   // faça enquanto número diferente de 9999
   do {

      // se número diferente de 9999 faça
      if( numero != 9999 ) {

         // somar número
         soma += numero;

         // incrementa contador
         contador++;

      } // fim if

      // entrada de dados
      printf( "Digite um inteiro: " );
      scanf( "%d", &numero );

   } while( numero != 9999 );

   // calcular a média
   media = soma / contador;

   // imprime a soma e a média
   printf( "Você digitou %d números.\n", contador );
   printf( "Soma = %d\nMédia = %d\n\n", soma, media );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
