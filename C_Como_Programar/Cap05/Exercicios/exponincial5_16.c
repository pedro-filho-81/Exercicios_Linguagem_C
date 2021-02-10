/*
   Questão: 5.16 Exponenciação Escreva uma função  potenciaInt(base, expoente)
   que retorne o  valor de  baseexpoente  Por exemplo,
   potenciaInt( 3, 4) = 3 * 3 * 3 * 3.  Suponha que expoente seja um inteiro
   positivo, diferente de zero, e base seja um inteiro. A função potenciaInt
   deve usar for para controlar o cálculo. Não use  funções da biblioteca matemática.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 154). Edição do Kindle.
   Autor: @Pedro Filho, 10/02/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// protótipo
float exponencial( float num, int expo );

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // variáveis
   float numero = 0;
   int expoente = 0;
   float resposta = 0;

   // entrada de dados
   printf( "Digite um número: " );
   scanf( "%f", &numero );

   printf( "Digite o expoente: " );
   scanf( "%d", &expoente );

   // enquanto
   while( 1 )
   {
      // chama a função exponincial
      resposta = exponencial( numero, expoente);

      // mostrar resultado
      printf( "O valor %.0f elevado a %d potência é %.0f\n",
             numero, expoente, resposta );

      // entrada de dados
      printf( "\nDigite um número: " );
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

}  // FIM FUNÇÃO MAIN

// função exponencial
float exponencial( float num, int expo )
{
   // variável
   float calcular = 1;

   // loop para calcular o exponencial
   for( int i = 1; i <= expo; i++ ) {
      calcular *= num;
   } // fim for

   // retorne calcular
   return calcular;
} // fim função
