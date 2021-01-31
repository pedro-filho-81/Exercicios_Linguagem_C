/*
   Quest�o: 4.27 Triplas de Pit�goras. Um tri�ngulo ret�ngulo pode  ter lados
   que s�o valores inteiros. O conjunto de tr�s valores inteiros para os lados
   de um tri�ngulo ret�ngulo � chamado de tripla de Pit�goras. Esses tr�s lados
   precisam  satisfazer o relacionamento de que a soma dos quadrados de dois
   catetos � igual ao quadrado da hipotenusa.  Ache todas as triplas de Pit�goras
   n�o superiores a 500  para cateto1, cateto2 e hipotenusa. Use um loop for
   triplamente aninhado que simplesmente teste todas as possibilidades.
   Este � um exemplo de computa��o por �for�a  bruta�. Isso n�o � esteticamente
   atraente para muitas  pessoas. Mas existem muitos motivos para essas t�cnicas
   serem importantes. Em primeiro lugar, com o poder  da computa��o aumentando
   em um ritmo t�o fenomenal, solu��es que levariam anos, ou mesmo s�culos,
   para serem produzidas com a tecnologia de alguns anos  atr�s agora podem
   ser produzidas em horas, minutos ou  mesmo segundos. Os chips microprocessadores
   recentes  podem processar um bilh�o de instru��es por segundo!
   Em segundo lugar, como voc� descobrir� em cursos de ci�ncia da computa��o
   mais avan�ados, existem in�meros  problemas interessantes para os quais n�o
   existe uma  t�cnica algor�tmica conhecida al�m da simples for�a bruta.
   Investigamos muitos tipos de metodologias de solu��o  de problemas neste livro.
   Consideraremos muitas t�cnicas de for�a bruta para diversos problemas
   interessantes.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 110). Edi��o do Kindle.
   Autor: @Pedro Filho, 30/01/2021
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() { // in�cio main

	//Define para Portugu�s Brasil
	setlocale(LC_ALL, "Portuguese");

	// vari�veis
	int a = 0; // cateto a
	int b = 0; // cabeto b
	int c = 0; // hipotenuza c
	int m, n; // para achar o cateto a e b e a hipotenuza
	int soma = 0;

	/*
	F�RMULA DE EUCLIDES
	Triplas de Pit�goras

      a = m� - n�;
      b = 2 * m * n;
      c = m� + n�;
   */

   // F�RMULA DE EUCLIDES
	//Triplas de Pit�goras
  for(int i = 1; i <= 5; i++){

    m = i; // m recebe i

    for(int j = 1; j <= 5; j++){

      n = j; // n recebe j

      // calcula usando a f�rmula de Euclides
      a = pow( m, 2 ) - pow( n, 2 ); // encontra cateto a

      b = 2 * m * n; // encontra cateto b

      c = pow( m, 2 ) + pow( n , 2 ); // encontra a hipotenusa

      // se a, b e c maior que zero imprima
      if( a > 0 && b > 0 && c > 0 )

         // imprime
         printf(" Triplas: a = %d, b = %d, c = %d\n", a, b, c );

    } // for 2
  } // for 1

  // pula linha
  printf( "\n" );

   // pausar o sistema
	system("pause");

	// fim do programa
	return 0;

} // fim main
