/*
   Questão: 5.26 Números perfeitos. Um número inteiro é considerado  um número
   perfeito se a soma de seus fatores, incluindo 1 (mas não o próprio número)
   for igual ao próprio  número. Por exemplo, 6 é um número perfeito porque
   6  = 1 + 2 + 3. Escreva uma função perfect que determine se o parâmetro
   number é um número perfeito. Use  essa função em um programa que determine
   e imprima  todos os números perfeitos entre 1 e 1000. Imprima os  fatores
   de cada número perfeito para confirmar se o nú-  mero é realmente perfeito.
   Desafie o poder de seu computador testando números muito maiores que 1000.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 155). Edição do Kindle.
   Autor: @Pedro Filho, 13/02/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// protótipo

int numerosPerfeitos( int numero );

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // variáveis
   int i;

   // cabeçalho
   printf( "\tNÚMEROS PERFEITOS\n" );

   // loop para o controle da soma
   for( i = 1; i <= 10000; i++ ) {

      // chama a função números perfeitos
      printf( "%9d ", numerosPerfeitos( i ) );

   } // fim for externo

   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

// função numerosPerfeitos
int numerosPerfeitos( int numeros )
{
   // variável
   int i, soma = 0;

   for( i = 1; i <= numeros; i++ ) {

      soma += i;

   } // fim for

   // retorne a soma
   return soma;

}// fim função
