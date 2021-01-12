/*
   Figura 2.13: fig02_13.c  2 Usando instruções if, operadores relacionais
   3 e operadores de igualdade
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 33). Edição do Kindle.
   Autor: Pedro Filho, 12/01/2021
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // variáveis
   int numero1; // para entrada do primeiro valor
   int numero2; // para o segundo inteiro

   // entrada de dados
   printf( "Digite o primeiro inteiro: " );
   scanf( "%d", &numero1 );

   printf( "Segundo inteiro: " );
   scanf( "%d", &numero2 );

   // cabeçalho
   printf( "\n COMPARAÇÃO ENTRE NÚMEROS\n" );

   // vereficar se são iguais
   if( numero1 == numero2 )
      printf( "%d é igual a %d\n", numero1, numero2 );

   // verificar se são diferentes
   if( numero1 != numero2 )
      printf( "%d é diferente de  %d\n", numero1, numero2 );

   // verificar se o primeiro e maior que o segundo
   if( numero1 > numero2 )
      printf( "%d É maior que %d\n", numero1, numero2 );

   // verificar se o primeiro é menor que o segundo
   if( numero1 < numero2 )
      printf( "%d é menor que %d\n", numero1, numero2 );

   // verificar se o primeiro é menor  o segundo
   if( numero1 <= numero2 )
      printf( "%d é menor ou igual a %d\n", numero1, numero2 );

   // verificar se o primeiro é maior ou igual  o segundo
   if( numero1 >= numero2 )
      printf( "%d é maior ou igual a %d\n", numero1, numero2 );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
