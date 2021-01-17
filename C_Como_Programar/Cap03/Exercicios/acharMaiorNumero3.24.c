/*
   Quest�o:  3.24 Ache o n�mero maior. O processo de achar o n�mero  maior
   (ou seja, o m�ximo de um grupo de n�meros)  � usado com frequ�ncia nas
   aplica��es de computador.  Por exemplo, um programa que determina o vencedor
   de uma disputa de vendas ler� o n�mero de unidades  vendidas por vendedor.
   O vendedor que tiver vendido  mais unidades vence a disputa.
   Escreva um programa  em pseudoc�digo e depois um programa que leia uma
   s�rie de 10 n�meros, determine e imprima o maior dos  n�meros.
   [Dica: seu programa dever� usar tr�s vari�veis  da seguinte forma]:
   contador: Um
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 75). Edi��o do Kindle.
   Autor: Pedro Filho, 17/01/2021
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
   int contador = 1; // para o loop
   int num = 0; // para a entreda do usu�rio
   int maior = 0; // para achar o maior

   // cabe�alho
   printf( "\tENCONTRE O MAIOR N�MERO\n" );

   //enquanto contador menor ou igual a dez fa�a
   while( contador <= 10 )
   {
      // entrada de dados
      printf( "Digite um n�mero: " ); // prompt
      scanf( "%d", &num );

      // verificar se contador igual a 1 maior recebe num
      if( contador == 1 )
      {
         // maior recebe num;
         maior = num;
      } // fim if

      // se num maior que maior
      if( num > maior ) {

         // maior recebe num
         maior = num;

      }  // fim if

      // incrementa contador
      contador++;

   } // fim while

   // imprime
   printf( "O maior valor � %d\n\n", maior );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
