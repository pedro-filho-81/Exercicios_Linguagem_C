/*
   Quest�o: 5.25 Achar o m�nimo. Escreva uma fun��o que retorne o  menor de
   tr�s n�meros em ponto flutuante.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 154). Edi��o do Kindle.
   Autor: @Pedro Filho, 12/02/2021
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
   float num1, num2, num3;
   float menor = 0;

   // entrada de dados
   printf( "Digite 3 n�meros diferentes: " );
   scanf( "%f%f%f", &num1, &num2, &num3 );

   // atribuindo valor a vari�vel menor
   menor = num1;

   // se n2 menor menor recebe num2
   if( num2 < menor )
      menor = num2;

   // se num3 menor que menor
   if( num3 < menor )
      // menor recebe num3
      menor = num3;

   // mostrar resultado
   printf( "O menor valor � %.2f\n", menor );

   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
