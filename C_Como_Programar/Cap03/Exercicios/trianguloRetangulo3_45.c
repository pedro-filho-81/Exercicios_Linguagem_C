/*
   Questão: 3.45 Lados de um triângulo retângulo. Escreva um programa que leia
   três inteiros diferentes de zero e determine e imprima se eles poderiam
   ser os lados de um  triângulo retângulo.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 78). Edição do Kindle.
   Autor: @Pedro Filho, 20/01/2021
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
   int catetoAdj = 0;
   int catetoOposto = 0;
   int hipotenusa= 0;

   // cabeçalho
   printf( "\tTRIÂNGULO RETÂNGULO\n" );

   // entrada de dados
    // entrada de dados
   printf( "Digite os valores dos catetos e da hipotenusa: " );
   scanf( "%d%d%d", &catetoAdj, &catetoOposto, &hipotenusa );

   // REGRA TRIÂNGULO RETÂNGULO
   // CatetoA² + catetoB² = hipotenusa² => triângulo retângulo

   /* se o quadrado do cateto adjacente mais o quadrado do cateto oposto
    igual ao quadrado da hipotenusa então é um triângulo retângulo.*/
   if( (catetoAdj * catetoAdj) +
      ( catetoOposto * catetoOposto ) ==
      ( hipotenusa * hipotenusa ) ) {
      // imprima
      printf( "É um triângulo retângulo.\n" );
   } // fim if 3

   // se não
   else {
      // imprima
      printf( "NÃO é um triângulo retângulo.\n" );
   } // fim else

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
