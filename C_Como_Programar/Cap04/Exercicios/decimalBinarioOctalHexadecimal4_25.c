/*
   Quest�o: 4.25 Tabela de equival�ncia decimal, bin�ria, octal  e hexadecimal.
   Escreva um programa que imprima  uma tabela dos equivalentes bin�rio,
   octal e hexadecimal  dos n�meros decimais no intervalo de 1 a 256.
   Se voc�  n�o estiver acostumado com esses sistemas num�ricos,
   leia o Ap�ndice C antes de tentar realizar esse exerc�cio.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 110). Edi��o do Kindle.
   Autor: @Pedro Filho, 29/01/2021
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

// fun��o principal
int main() { // in�cio main

	//Define para Portugu�s Brasil
	setlocale(LC_ALL, "Portuguese");

	// vari�veis
   long int bin = 0;
   long int reverso = 0;
   int multi  = 1;
   int num = 0;
   int cont = 0;
   int i, j; // para o loop

   // vetor
   int teste[ 10 ];

   //cabe�alho
   printf ( "%10s%8s%8s%10s", "Decimal",  "Hexa", "Octal", "Bin�rio\n" );

   /* loop para mostra os n�ntmeros
      decimais, octais e hexadecimais */
   for( i = 10; i <= 10; i++ ) {

      // imprima
      printf( "%7d%10X%8o", i, i, i );

      // num recebe i para calcular o bin�rio
      num = i;

      // imprime espa�os vazio
      printf( "      " );

      // loop para bin�rio
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
