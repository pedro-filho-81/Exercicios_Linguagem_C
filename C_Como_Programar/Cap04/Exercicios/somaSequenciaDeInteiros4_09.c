/*
   Questão: 4.9 Soma de uma sequência de inteiros. Escreva um  programa que
   some uma sequência de inteiros. Considere que o primeiro inteiro lido com
   scanf especifique o  número de valores restantes a serem inseridos.
   Seu programa deve ler apenas um valor toda vez que scanf for  executado.
   Uma sequência de entrada típica poderia ser  5 100 200 300 400 500  onde
   o 5 indica que os cinco valores subsequentes devem  ser somados.
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

   // variável
   int numero;
   int soma = 0;
   int i;

   // entrada de dados
   printf( "Digite um inteiro: " );
   scanf( "%d", &numero );

   printf( "Somar os valores: " );

   // loop for
   for( i = 1; i <= 1000; i += 1 ) {

      // imprime
      printf( "%d ", i );

      // somar i
      soma += i;

      // se i igual a número pare
      if( i == numero ) break;

   } // fim for

   // imprime resultado
   printf( "Soma = %d\n\n", soma );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
