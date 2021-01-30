/*
   Questão: 4.26 Calculando o valor de p. Calcule o valor de p a  partir
   da série infinita  p = −4 +−+− +  4  3  4  5  4  7  4  9  4  11  ...
   Imprima uma tabela que mostre o valor de p aproximado por um termo dessa
   série, e depois por dois termos,  três termos, e assim por diante.
   Quantos termos dessa série você precisa usar antes de obter 3,14?
   3,141?  3,1415? 3,14159?
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 110). Edição do Kindle.
   Autor: @Pedro Filho, 18/01/2021
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() { // início main

	//Define para Português Brasil
	setlocale(LC_ALL, "");

	// variáveis
	 double pi = 0;
	 int contador = 0;

	 // loop para calcular o valor de pi
	for( int i = 1; i <= 100; i += 2 ) {

      // se o conatdor for par
      if( contador % 2 == 0 ) {

         // pi recebe 4 dividido por i
         pi += 4 / ( double ) i;

         // imprima o contador
         printf( "Contador = %d\n", contador );

         // imprima o número do loop e o valor do pi
         printf( "i = %d - PI = %.8lf\n", i, pi );

      } // fim if

      // se não
      else {
         // calcular o valor de pi
         pi -= 4 / ( double ) i;

         // mostrar o contador
         printf( "Contador = %d\n", contador );

         // imprima o índice e o valor de pi
         printf( "i = %d - PI = %.8lf\n", i, pi );

      } // fim else

      // incrementa contador
      contador += 1;

	} // fim for externo

	// pular linha
	printf( "\n" );

  //pausa o programa
	system("pause");

} // fim main
