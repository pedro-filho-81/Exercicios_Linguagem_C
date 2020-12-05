/*
   2.17 Imprimindo valores com printf. Escreva um programa que imprima
   os n�meros de 1 a 4 na mesma linha. Escreva o programa utilizando
   os m�todos a seguir.
   a) Uma instru��o printf sem especificadores de convers�o.
   b) Uma instru��o printf com quatro especificadores  de convers�o.
   c) Quatro instru��es printf.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 41). Edi��o do Kindle.
   Autor: Pedro Filho, /12/2020.
*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese" );

	 //Vari�vel
	 int num01 = 1;
	 int num02 = 2;
	 int num03 = 3;
	 int num04 = 4;

	 //a) Uma instru��o printf sem especificadores de convers�o
	 printf("Uma instru��o printf sem especificadores de convers�o.\n",
         num01, num02, num03, num04);

	 //b) Uma instru��o printf com quatro especificadores de convers�o.
	 printf("\nUma instru��o printf com quatro especificadores de convers�o, %d, %d, %d, %d.\n",
         num01, num02, num03, num04);

	 //c) Quatro instru��es printf.
	 printf("\nQuatro instru��es printf.\n%d", num01);
	 printf(" %d ", num02);
	 printf(" %d ", num03);
	 printf(" %d ", num04);

	return 0;

} // fim main
