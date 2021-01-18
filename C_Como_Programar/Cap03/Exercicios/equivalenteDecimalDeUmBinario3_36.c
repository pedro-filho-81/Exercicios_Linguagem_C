/*
   Quest�o:3.36 Imprimindo o equivalente decimal de um n�mero bin�rio. Leia
   um inteiro contendo apenas 0s e 1s  (ou seja, um inteiro �bin�rio�)
   e imprima seu equivalente decimal. [Dica: use os operadores de m�dulo
   e divis�o  para apanhar os d�gitos do n�mero �bin�rio� um de cada  vez,
   da direita para a esquerda. Assim como no sistema  num�rico decimal, em que
   o d�gito mais � direita tem  um valor posicional de 1, e o pr�ximo d�gito
   � esquerda  tem um valor posicional de 10, depois de 100, depois de  1.000,
   e assim por diante, no sistema bin�rio, o d�gito mais � direita tem um valor
   posicional de 1, o pr�ximo  d�gito � esquerda tem um valor posicional de 2,
   depois de  4, depois de 8 e assim por diante. Assim, o n�mero 234  pode ser
   interpretado como 4 * 1 + 3 * 10 + 2 * 100.  O equivalente decimal do bin�rio
   1101 � 1 * 1 + 0 * 2  + 1 * 4 + 1 * 8 ou 1 + 0 + 4 + 8 ou 13.]
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 77). Edi��o do Kindle.
   Autor: Pedro Filho, 18/01/2021
*/

#include<stdlib.h>
#include<stdio.h>
#include <locale.h>
#include<math.h>

int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "portuguese" );

   // cria vari�vel
   int binario = 0; // recebe valor do usu�rio
   int decimal = 0; // calcula o decimal
   int recebeBinario = 0; // recebe o valor
   int contador = 0; // contador do while

   // entrada de dados
   printf( "Informe um n�mero bin�rio: " );
   scanf( "%d", &binario );

   // recebe o valor do bin�rio
   recebeBinario = binario;

   // enquanto bin�rio maior que zero fa�a
   while( binario > 0 ) {

      // calcular o decimal
      decimal += pow( 2, contador ) * ( binario % 10 );

      // bin�rio dividido por 10
      binario /= 10;

      // incrementa contador
      contador++;

   } // fim while

   // mostrar resultado
   printf( "O valor bin�rio |%d| equivale ao n�mero |%d| em decimal.\n",
          recebeBinario, decimal );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

} // fim main
