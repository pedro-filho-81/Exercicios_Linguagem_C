/* Função: Exponenciação Escreva uma função potenciaInt(base, expoente) que
   retorne o valor de baseexpoente Por exemplo, potenciaInt( 3, 4) = 3 * 3 * 3 * 3.
   Suponha que expoente seja um inteiro positivo, diferente de zero, e base seja
   um inteiro. A função potenciaInt deve usar for para controlar o cálculo.
   Não use funções da biblioteca matemática.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (Página 154).  . Edição do Kindle.
   Pedro Filho, 09/11/2020*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// protótipo de função
int potencia( int x, int y );

// função principal
int main()
{
   setlocale(LC_ALL, "Portuguese" );

   // variável
   int n = 0;
   int pot = 1;

   // entrada de dados base
   printf( "Digite um número maior que zero: " );
   scanf( "%d", &n );
   // verufucar se n é maior que zero
   if( n > 0 ) // se verdade
   {
      // entrar com o valor do expoente
      printf( "Informe o valor do expoente: " );
      scanf( "%d", &pot );

      // chamar a função potência e mostrar o resultado
      printf( "\t%d elevado a %dª potência é %d\n", n, pot, potencia( n, pot ) );
   }
   else // se não for verdade
   {
      // mostrar essa mensagem
      printf( "O valor %d é igual ou menor que zero.\n", n );
   } // fim else

    printf( "\n" ); // pula linha

   system( "pause" ); // pausa o sistema

   return 0; // fim do programa

} // fim main

// função potencia
int  potencia( int x, int y )
{
   // variável para calcular a pontência
   int pot = 1;

   // verificar se x é maior que zero
   if( x > 0 ) // se verdade
      // criar o loop para calcular a potência
      for( int i = 1; i <= y ; i++ )
   {
      // pot recebe a multiplicação de x
      pot *= x;
   } // fim de for
   // retornar com o valor da pot~encia
   return pot;
} // fim da função
