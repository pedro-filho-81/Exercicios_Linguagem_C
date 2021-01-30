/*
   Questão: 4.25 Tabela de equivalência decimal, binária, octal  e hexadecimal.
   Escreva um programa que imprima  uma tabela dos equivalentes binário,
   octal e hexadecimal  dos números decimais no intervalo de 1 a 256.
   Se você  não estiver acostumado com esses sistemas numéricos,
   leia o Apêndice C antes de tentar realizar esse exercício.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 110). Edição do Kindle.
   Autor: @Pedro Filho, 29/01/2021
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

// função principal
int main() { // início main

	//Define para Português Brasil
	setlocale(LC_ALL, "Portuguese");

	// variáveis
   long int bin = 0;
   long int reverso = 0;
   int multi  = 1;
   int num = 0;
   int cont = 0;
   int i, j; // para o loop

   // vetor
   int teste[ 10 ];

   //cabeçalho
   printf ( "%10s%8s%8s%10s", "Decimal",  "Hexa", "Octal", "Binário\n" );

   /* loop para mostra os núntmeros
      decimais, octais e hexadecimais */
   for( i = 10; i <= 10; i++ ) {

      // imprima
      printf( "%7d%10X%8o", i, i, i );

      // num recebe i para calcular o binário
      num = i;

      // imprime espaços vazio
      printf( "      " );

      // loop para binário
      while( num != 0 ) {
         bin = num % 2;
         printf( "%d", bin );
         num /= 2;
      } // fim while

      printf("\n");

   } // fim for externo

   printf("\n");

	system("pause");

} // fim main
