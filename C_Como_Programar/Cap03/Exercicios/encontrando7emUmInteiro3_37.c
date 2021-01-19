/*
   Quest�o: 3.39 Contando 7s. Escreva um programa que leia um inteiro e determine
   e imprima quantos d�gitos no inteiro s�o  algarismos 7.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 77). Edi��o do Kindle.
   Autor: @Pedro Filho, 19/01/2021
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

   // cria vari�vel
   int numero = 0; // recebe n�mero do usu�rio
   int n1, n2, n3, n4, n5; // individualiza n�mero digitado
   int contador = 0; // contador do loop
   int sete = 0; // contador do n�mero 7
   int pegaNumero = 0;

   // cabe�alho
   printf( "CONTANDO OS 7\n" );

   // entrada de dados
   printf( "Digite um n�mero entre 1 e 99999: " ); // prompt
   scanf( "%d", &numero );

   // pega n�mero
   pegaNumero = numero;

   // separando n�mero
   n1 = numero / 10000;
   n2 = numero % 10000 / 1000;
   n3 = numero % 1000 / 100;
   n4 = numero % 100 / 10;
   n5 = numero % 10 / 1;

      //se n�mero igual a sete conte
      if( n1 == 7 )
         sete += 1; // conta 1

      if( n2 == 7 )
         sete += 1;

      if( n3 == 7 )
         sete += 1;

      if( n4 == 7 )
         sete += 1;

      if( n5 == 7 )
         sete += 1;

   // mostra resultado
   printf( "o n�mero %d tem %d ( 7 )\n\n", pegaNumero, sete );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
