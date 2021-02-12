/*
   Questão: 5.25 Achar o mínimo. Escreva uma função que retorne o  menor de
   três números em ponto flutuante.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 154). Edição do Kindle.
   Autor: @Pedro Filho, 12/02/2021
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
   float num1, num2, num3;
   float menor = 0;

   // entrada de dados
   printf( "Digite 3 números diferentes: " );
   scanf( "%f%f%f", &num1, &num2, &num3 );

   // atribuindo valor a variável menor
   menor = num1;

   // se n2 menor menor recebe num2
   if( num2 < menor )
      menor = num2;

   // se num3 menor que menor
   if( num3 < menor )
      // menor recebe num3
      menor = num3;

   // mostrar resultado
   printf( "O menor valor é %.2f\n", menor );

   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
