/*
   Questão: 4.27 Triplas de Pitágoras. Um triângulo retângulo pode  ter lados
   que são valores inteiros. O conjunto de três valores inteiros para os lados
   de um triângulo retângulo é chamado de tripla de Pitágoras. Esses três lados
   precisam  satisfazer o relacionamento de que a soma dos quadrados de dois
   catetos é igual ao quadrado da hipotenusa.  Ache todas as triplas de Pitágoras
   não superiores a 500  para cateto1, cateto2 e hipotenusa. Use um loop for
   triplamente aninhado que simplesmente teste todas as possibilidades.
   Este é um exemplo de computação por ‘força  bruta’. Isso não é esteticamente
   atraente para muitas  pessoas. Mas existem muitos motivos para essas técnicas
   serem importantes. Em primeiro lugar, com o poder  da computação aumentando
   em um ritmo tão fenomenal, soluções que levariam anos, ou mesmo séculos,
   para serem produzidas com a tecnologia de alguns anos  atrás agora podem
   ser produzidas em horas, minutos ou  mesmo segundos. Os chips microprocessadores
   recentes  podem processar um bilhão de instruções por segundo!
   Em segundo lugar, como você descobrirá em cursos de ciência da computação
   mais avançados, existem inúmeros  problemas interessantes para os quais não
   existe uma  técnica algorítmica conhecida além da simples força bruta.
   Investigamos muitos tipos de metodologias de solução  de problemas neste livro.
   Consideraremos muitas técnicas de força bruta para diversos problemas
   interessantes.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 110). Edição do Kindle.
   Autor: @Pedro Filho, 30/01/2021
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() { // início main

	//Define para Português Brasil
	setlocale(LC_ALL, "Portuguese");

	// variáveis
	int a = 0; // cateto a
	int b = 0; // cabeto b
	int c = 0; // hipotenuza c
	int m, n; // para achar o cateto a e b e a hipotenuza
	int soma = 0;

	/*
	FÓRMULA DE EUCLIDES
	Triplas de Pitágoras

      a = m² - n²;
      b = 2 * m * n;
      c = m² + n²;
   */

   // FÓRMULA DE EUCLIDES
	//Triplas de Pitágoras
  for(int i = 1; i <= 5; i++){

    m = i; // m recebe i

    for(int j = 1; j <= 5; j++){

      n = j; // n recebe j

      // calcula usando a fórmula de Euclides
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
