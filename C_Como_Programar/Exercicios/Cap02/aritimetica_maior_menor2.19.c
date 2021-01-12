/*
   2.19 Aritmética, maior e menor valor. Escreva um programa que leia três
   inteiros diferentes do teclado, depois  apresente a soma, a média,
   o produto, o menor e o maior  desses números. Use apenas a forma de seleção
   única da  instrução if que você aprendeu neste capítulo. O diálogo  na tela
   deverá aparecer da seguinte forma:
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 41). Edição do Kindle.
   Auto: Pedro Filho, 09/01/2021
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

   // cria variáveis
   int n1, n2, n3;
   int soma = 0, media = 0, produto = 0, resto = 0;
   int maior = 0, menor = 0;

   // entrada de dados
   printf( "Digite 3 inteiros diferentes: " );
   scanf( "%d%d%d", &n1, &n2, &n3 );


   // calcular
   soma = n1 + n2 +n3;
   media = soma / 3;
   resto = soma % 3;
   produto = n1 * n2 * n3;

   // verificar o menor e o maior
   if( n1 > n2 ) // 3 2 1
      if( n2 > n3 ) {
         maior = n1;
         menor = n3;
      } //  fim if

   // verificar o menor e o maior
   if( n1 > n2 ) // 3 1 2
      if( n2 < n3 ) {
         maior = n1;
         menor = n2;
      } //  fim if

   // verificar o menor e o maior
   if( n3 > n2 ) // 1 2 3
      if( n2 > n1 ) {
         maior = n3;
         menor = n1;
      } //  fim if

   // verificar o menor e o maior
   if( n3 > n2 ) // 2 1 3
      if( n2 < n1 ) {
         maior = n3;
         menor = n2;
      } //  fim if

   // verificar o menor e o maior
   if( n2 > n3 ) // 1 3 2
      if( n3 > n1 ) {
         maior = n2;
         menor = n1;
      } //  fim if

   // verificar o menor e o maior
   if( n2 > n1 ) // 2 3 1
      if( n1 > n3 ) {
         maior = n2;
         menor = n3;
      } //  fim if

   // mostrar resultado
   printf( "ARITIMÉTICA DE VALORES \n" );
   printf( "Soma = %d\n", soma );
   printf( "Média = %d\n", media );
   printf( "Resto = %d\n", resto );
   printf( "Produto = %d\n", produto );
   printf( "Maior = %d\n", maior );
   printf( "Menor = %d\n", menor );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN
