/*
   Quest�o:3.35 Testador de pal�ndromo. Um pal�ndromo � um n�-  mero, ou uma
   frase textual, que pode ser lido da mesma forma da esquerda para a direita
   e vice-versa. Por  exemplo, cada um dos seguintes inteiros de cinco d�gitos
   � um pal�ndromo: 12321, 55555, 45554 e 11611. Escreva um programa que leia
   um inteiro de cinco d�gitos e  determine se ele � ou n�o um pal�ndromo.
   [Dica: use os  operadores de divis�o e m�dulo para separar o n�mero
   em seus d�gitos individuais.]
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 77). Edi��o do Kindle.
   Autor: @Pedro Filho, 18/01/2021
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

   // cria vari�veis
   int numero = 0; // para entrada do usu�rio
   int n1, n2, n3, n4, n5; // vari�veis para separar o n�mero digitado
   int numeroInvertido = 0; // para receber os n�meros separados

   // cabe�alho
   printf( "SER� QUE O N�MERO � UM PAL�NDROMO?\n" );

   // entrada de dados
   printf( "Digite um n�mero com 5 digitos [ -1 para sair ]: " );
   scanf( "%d", &numero );

   // separando os n�meros digitados
   n1 = numero / 10000;
   n2 = numero % 10000 / 1000;
   n3 = numero % 1000 / 100;
   n4 = numero % 100 / 10;
   n5 = numero % 10 / 1;

   // imprime n�meros separados
   printf( "O n�mero: %d %d %d %d %d\n", n5, n4, n3, n2, n1 );

   // se n5 igual a n1
   if( n5 == n1 )
       printf( "" );
      // se n4 igual a n2
      if( n4 == n2 )
         // imprime
         printf( "� um pal�ndromo.\n" );
      // se n�o
      else
         // imprime
         printf( "N�O � um pal�ndromo.\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
