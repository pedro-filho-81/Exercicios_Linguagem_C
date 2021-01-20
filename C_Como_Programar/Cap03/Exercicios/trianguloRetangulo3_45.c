/*
   Quest�o: 3.45 Lados de um tri�ngulo ret�ngulo. Escreva um programa que leia
   tr�s inteiros diferentes de zero e determine e imprima se eles poderiam
   ser os lados de um  tri�ngulo ret�ngulo.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 78). Edi��o do Kindle.
   Autor: @Pedro Filho, 20/01/2021
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
   int catetoAdj = 0;
   int catetoOposto = 0;
   int hipotenusa= 0;

   // cabe�alho
   printf( "\tTRI�NGULO RET�NGULO\n" );

   // entrada de dados
    // entrada de dados
   printf( "Digite os valores dos catetos e da hipotenusa: " );
   scanf( "%d%d%d", &catetoAdj, &catetoOposto, &hipotenusa );

   // REGRA TRI�NGULO RET�NGULO
   // CatetoA� + catetoB� = hipotenusa� => tri�ngulo ret�ngulo

   /* se o quadrado do cateto adjacente mais o quadrado do cateto oposto
    igual ao quadrado da hipotenusa ent�o � um tri�ngulo ret�ngulo.*/
   if( (catetoAdj * catetoAdj) +
      ( catetoOposto * catetoOposto ) ==
      ( hipotenusa * hipotenusa ) ) {
      // imprima
      printf( "� um tri�ngulo ret�ngulo.\n" );
   } // fim if 3

   // se n�o
   else {
      // imprima
      printf( "N�O � um tri�ngulo ret�ngulo.\n" );
   } // fim else

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
