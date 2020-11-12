/* Fun��o: 5.22 Separando d�gitos. Escreva segmentos de programa que realizem,
   cada um, o seguinte:
   a) O c�lculo da parte inteira do quociente quando o inteiro a � dividido pelo inteiro b.
   b) O c�lculo do m�dulo inteiro quando o inteiro a � dividido pelo inteiro b.
   c) Use as partes do programa desenvolvidas em a) e b) para escrever uma fun��o
   que pe�a um inteiro entre 1 e 32767 e o imprima como uma s�rie de d�gitos, com
   dois espa�os entre cada d�gito. Por exemplo, o inteiro 4562 dever� ser impresso como: 4  5  6  2.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (P�gina 154).  . Edi��o do Kindle.
   Autor: Pedro Filho, 12/11/2020*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// prot�tipos
void separar_digitos( int num );

// fun��o principal
int main()
{
   // seleciona o idioma Portugu�s
   // possibilita o uso de (�, �, �, etc.).
   setlocale(LC_ALL, "Portuguese" );

   // vari�vel
   int n = 0;

   // entrar com os dados
   printf( "Digite um inteiro entre 1 e 32767: " );
   scanf( "%d", &n );

   // chamar a fun��o separar digitos
   separar_digitos( n );

   printf( "\n" ); // pula linha

   system( "pause" ); // pausa o sistema

   return 0; // fim do programa

} // fim main

// fun��o separar_digitos
void separar_digitos( int num )
{
   // vari�veis
   int a, b, c, d, e;

      // calcular
      a = num / 10000 % 10;
      b = num / 1000 % 10;
      c = num / 100 % 10;
      d = num / 10 % 10;
      e = num / 1 % 10;
       printf( "\t%d  %d  %d  %d  %d", a, b, c, d, e );
}
