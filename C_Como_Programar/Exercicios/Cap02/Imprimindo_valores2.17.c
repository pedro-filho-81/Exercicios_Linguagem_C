/*
   2.17 Imprimindo valores com printf. Escreva um programa que imprima
   os números de 1 a 4 na mesma linha. Escreva o programa utilizando
   os métodos a seguir.
   a) Uma instrução printf sem especificadores de conversão.
   b) Uma instrução printf com quatro especificadores  de conversão.
   c) Quatro instruções printf.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 41). Edição do Kindle.
   Autor: Pedro Filho, /12/2020.
*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese" );

	 //Variável
	 int num01 = 1;
	 int num02 = 2;
	 int num03 = 3;
	 int num04 = 4;

	 //a) Uma instrução printf sem especificadores de conversão
	 printf("Uma instrução printf sem especificadores de conversão.\n",
         num01, num02, num03, num04);

	 //b) Uma instrução printf com quatro especificadores de conversão.
	 printf("\nUma instrução printf com quatro especificadores de conversão, %d, %d, %d, %d.\n",
         num01, num02, num03, num04);

	 //c) Quatro instruções printf.
	 printf("\nQuatro instruções printf.\n%d", num01);
	 printf(" %d ", num02);
	 printf(" %d ", num03);
	 printf(" %d ", num04);

	return 0;

} // fim main
