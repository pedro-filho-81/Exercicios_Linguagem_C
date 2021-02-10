/*
   Quest�o: 5.16 Exponencia��o Escreva uma fun��o  potenciaInt(base, expoente)
   que retorne o  valor de  baseexpoente  Por exemplo,
   potenciaInt( 3, 4) = 3 * 3 * 3 * 3.  Suponha que expoente seja um inteiro
   positivo, diferente de zero, e base seja um inteiro. A fun��o potenciaInt
   deve usar for para controlar o c�lculo. N�o use  fun��es da biblioteca matem�tica.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 154). Edi��o do Kindle.
   Autor: @Pedro Filho, 10/02/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// prot�tipo
float exponencial( float num, int expo );

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vari�veis
   float numero = 0;
   int expoente = 0;
   float resposta = 0;

   // entrada de dados
   printf( "Digite um n�mero: " );
   scanf( "%f", &numero );

   printf( "Digite o expoente: " );
   scanf( "%d", &expoente );

   // enquanto
   while( 1 )
   {
      // chama a fun��o exponincial
      resposta = exponencial( numero, expoente);

      // mostrar resultado
      printf( "O valor %.0f elevado a %d pot�ncia � %.0f\n",
             numero, expoente, resposta );

      // entrada de dados
      printf( "\nDigite um n�mero: " );
      scanf( "%f", &numero );

      printf( "Digite o expoente [-1 sair]: " );
      scanf( "%d", &expoente );

      // se expoente igual a -1 sair
      if( expoente <= 0 ) break;

   } // fim while

   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

// fun��o exponencial
float exponencial( float num, int expo )
{
   // vari�vel
   float calcular = 1;

   // loop para calcular o exponencial
   for( int i = 1; i <= expo; i++ ) {
      calcular *= num;
   } // fim for

   // retorne calcular
   return calcular;
} // fim fun��o
