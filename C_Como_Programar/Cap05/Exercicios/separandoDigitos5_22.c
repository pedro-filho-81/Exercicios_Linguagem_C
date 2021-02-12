/*
   Quest�o: 5.22 Separando d�gitos. Escreva segmentos de programa  que realizem,
   cada um, o seguinte:  a) O c�lculo da parte inteira do quociente quando
   o inteiro a � dividido pelo inteiro b.  b) O c�lculo do m�dulo inteiro quando
   o inteiro a �  dividido pelo inteiro b.  c) Use as partes do programa
   desenvolvidas em a) e b)  para escrever uma fun��o que pe�a um inteiro entre
   1 e 32767 e o imprima como uma s�rie de d�gitos,  com dois espa�os entre
   cada d�gito. Por exemplo, o  inteiro 4562 dever� ser impresso como:
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

   // vari�vel
   long numero = 0;
   long a,  e, i, o, u;

   // entrada de dados
   printf( "Digite um n�mero entre 1 e 99999: " );
   scanf( "%d", &numero );

   // calcular
   a = numero / 10000 % 10000;
   e = numero % 10000 / 1000;
   i = numero % 1000 / 100;
   o = numero % 100 / 10;
   u = numero % 10 / 1;

   // imprime
   printf( "N�meros separados = %3d%3d%3d%3d%3d\n\n", a, e, i, o, u );

   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN
