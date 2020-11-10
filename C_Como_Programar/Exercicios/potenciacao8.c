/* Fun��o: Exponencia��o Escreva uma fun��o potenciaInt(base, expoente) que
   retorne o valor de baseexpoente Por exemplo, potenciaInt( 3, 4) = 3 * 3 * 3 * 3.
   Suponha que expoente seja um inteiro positivo, diferente de zero, e base seja
   um inteiro. A fun��o potenciaInt deve usar for para controlar o c�lculo.
   N�o use fun��es da biblioteca matem�tica.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (P�gina 154).  . Edi��o do Kindle.
   Pedro Filho, 09/11/2020*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// prot�tipo de fun��o
int potencia( int x, int y );

// fun��o principal
int main()
{
   setlocale(LC_ALL, "Portuguese" );

   // vari�vel
   int n = 0;
   int pot = 1;

   // entrada de dados base
   printf( "Digite um n�mero maior que zero: " );
   scanf( "%d", &n );
   // verufucar se n � maior que zero
   if( n > 0 ) // se verdade
   {
      // entrar com o valor do expoente
      printf( "Informe o valor do expoente: " );
      scanf( "%d", &pot );

      // chamar a fun��o pot�ncia e mostrar o resultado
      printf( "\t%d elevado a %d� pot�ncia � %d\n", n, pot, potencia( n, pot ) );
   }
   else // se n�o for verdade
   {
      // mostrar essa mensagem
      printf( "O valor %d � igual ou menor que zero.\n", n );
   } // fim else

    printf( "\n" ); // pula linha

   system( "pause" ); // pausa o sistema

   return 0; // fim do programa

} // fim main

// fun��o potencia
int  potencia( int x, int y )
{
   // vari�vel para calcular a pont�ncia
   int pot = 1;

   // verificar se x � maior que zero
   if( x > 0 ) // se verdade
      // criar o loop para calcular a pot�ncia
      for( int i = 1; i <= y ; i++ )
   {
      // pot recebe a multiplica��o de x
      pot *= x;
   } // fim de for
   // retornar com o valor da pot~encia
   return pot;
} // fim da fun��o
